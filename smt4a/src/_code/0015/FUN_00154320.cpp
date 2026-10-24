/* NON_MATCHING: readable rewrite from retail disassembly compiles (210 vs 211 rows); retail uses one base register for the sound system (list at +0x12fc, critical section at +0x1308) and a different node-walk/branch layout */
#include "common.h"

// One sound stream group (linked list node): its voices, fade state and flags.
struct SoundGroup {
    u8 unk000[0x68];
    u32* voices[1];             // 0x68: voice objects (voiceCount entries, byte 4 = state)
    u8 unk06c[0xd8 - 0x6c];
    SoundGroup* next;           // 0xd8
};

extern "C" {

#define GROUP_INT(group, offset) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(group) + (offset)))
#define GROUP_VOICE(group, index) (reinterpret_cast<u32**>(reinterpret_cast<u8*>(group) + 0x68)[index])

// Sound system: the group list lives at +0x12fc, its critical section at +0x1308.
struct SoundGroupList {
    SoundGroup* head;           // 0x00
    s32 count;                  // 0x04
    s32 totalVoices;            // 0x08
    u8 section[0x19 - 0xc];     // 0x0c: critical section
    u8 active;                  // 0x19
    u8 stepPending;             // 0x1a
};

struct SoundSystem {
    u8 unk0000[0x12fc];
    SoundGroupList list;        // 0x12fc
};

extern SoundSystem g_asdSoundSystem;

s32 FUN_00178144(u32* voice);
void FUN_00152bf8(SoundGroup* group);
void FUN_001b6390(u32* voice, f32 volume);
void nn_os_CriticalSection_Enter(void* section);
void nn_os_CriticalSection_Leave(void* section);
void nn_snd_CTR_Voice_SetState(u32* voice, s32 state);

// Returns the group at `index` of the list (walked two nodes at a time).
static inline SoundGroup* groupAt(SoundGroupList* list, s32 index)
{
    SoundGroup* node = list->head;
    if (index > 0) {
        if ((index & 1) != 0) node = node->next;
        for (s32 pairs = index >> 1; pairs != 0; pairs--) node = node->next->next;
    }
    return node;
}

static inline void setVolume(SoundGroup* group, f32 volume)
{
    for (s32 v = 0; v < GROUP_INT(group, 0xec); v++) FUN_001b6390(GROUP_VOICE(group, v), volume);
}

static inline void setState(SoundGroup* group, s32 state)
{
    for (s32 v = 0; v < GROUP_INT(group, 0xec); v++) nn_snd_CTR_Voice_SetState(GROUP_VOICE(group, v), state);
}

// Per-frame update of the sound groups: keeps the voice total, advances fades and runs
// the queued start/pause/stop transitions of each group, removing finished groups.
void FUN_00154320(u32 unused0, u32 unused1, u32 unused2)
{
    SoundGroupList* list = &g_asdSoundSystem.list;
    nn_os_CriticalSection_Enter(g_asdSoundSystem.list.section);
    if (list->active != 0) {
        list->totalVoices = 0;
        s32 i;
        for (i = 0; i < list->count; i++) {
            if (!(i >= 0 && list->count > i)) continue;
            SoundGroup* group = groupAt(list, i);
            if (group == NULL) continue;
            u32 flags = GROUP_INT(group, 0xf4);
            if ((flags & 0x40) == 0) continue;
            if ((flags & 0x400) != 0) {
                s32 state = GROUP_INT(group, 0xf0);
                if (state == 0 || state == 2) {
                    FUN_00152bf8(group);
                    i--;
                }
                continue;
            }
            if (FUN_00178144(GROUP_VOICE(group, 0)) != 0) {
                list->totalVoices += GROUP_INT(group, 0xec);
                if ((flags & 2) == 0) {
                    GROUP_INT(group, 0xf4) = flags | 2;
                } else {
                    if (list->stepPending == 0) continue;
                    s32 total = GROUP_INT(group, 0xe0);
                    s32 progress = GROUP_INT(group, 0xe8);
                    f32 volume = *reinterpret_cast<f32*>(reinterpret_cast<u8*>(group) + 0xf8);
                    if ((flags & 0x20) != 0) {
                        if (total > progress) {
                            setVolume(group, ((f32)progress / (f32)total) * volume);
                        } else {
                            setVolume(group, volume);
                            GROUP_INT(group, 0xf4) = GROUP_INT(group, 0xf4) & ~0x20;
                        }
                    } else if ((flags & 0x10) != 0) {
                        if (total > progress) {
                            setVolume(group, volume - (f32)progress / (f32)total);
                        } else {
                            flags &= ~0x10;
                            GROUP_INT(group, 0xf4) = flags;
                            if ((flags & 0x100) != 0) {
                                setState(group, 1);
                                GROUP_INT(group, 0xf4) = GROUP_INT(group, 0xf4) & ~0x100;
                            } else if ((flags & 0x80) != 0) {
                                setState(group, 2);
                                GROUP_INT(group, 0xf4) = GROUP_INT(group, 0xf4) & ~0x80;
                            }
                        }
                    } else {
                        GROUP_INT(group, 0xe8) = progress + 1;
                        continue;
                    }
                }
            } else if (*(reinterpret_cast<u8*>(GROUP_VOICE(group, 0)) + 4) != 2 && (flags & 2) != 0) {
                s32 state = GROUP_INT(group, 0xf0);
                if (state == 0 || state == 2) {
                    FUN_00152bf8(group);
                    i--;
                } else if (state == 1 || state == 3) {
                    GROUP_INT(group, 0xf4) = (flags & ~2) | 0x200;
                }
            }
            if (list->stepPending == 0) continue;
            GROUP_INT(group, 0xe8) = GROUP_INT(group, 0xe8) + 1;
        }
        if (list->stepPending != 0) list->stepPending = 0;
    }
    nn_os_CriticalSection_Leave(g_asdSoundSystem.list.section);
}

} /* extern "C" */
