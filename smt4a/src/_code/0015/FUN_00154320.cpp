/* NON_MATCHING: 210 rows against 209; group fields are real members read in place like retail; remaining: retail derives the list (+0x12fc) and critical section (+0x1308) from the g_asdSoundSystem literal (separate objects of one translation unit), predicates the index bounds test (`ldrge`/`cmpge`) and divides into s3 */
#include "common.h"

// One sound stream group (linked list node): its voices, fade state and flags.
struct SoundGroup {
    u8 unk000[0x68];
    u32* voices[28];            // 0x68: voice objects (voiceCount entries, byte 4 = state)
    SoundGroup* next;           // 0xd8
    u8 unk0dc[4];
    s32 fadeFrames;             // 0xe0
    u8 unk0e4[4];
    s32 fadeProgress;           // 0xe8
    s32 voiceCount;             // 0xec
    s32 state;                  // 0xf0: 0 stopped, 1 playing, 2 paused, 3 stopping
    u32 flags;                  // 0xf4
    f32 volume;                 // 0xf8
};

extern "C" {

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
    if (index >= 0 && list->count > index) {
        SoundGroup* node = list->head;
        if (index > 0) {
            if ((index & 1) != 0) node = node->next;
            for (u32 pairs = index >> 1; pairs != 0; pairs--) node = node->next->next;
        }
        return node;
    }
    return NULL;
}

static inline void setVolume(SoundGroup* group, f32 volume)
{
    for (s32 v = 0; v < group->voiceCount; v++) FUN_001b6390(group->voices[v], volume);
}

static inline void setState(SoundGroup* group, s32 state)
{
    for (s32 v = 0; v < group->voiceCount; v++) nn_snd_CTR_Voice_SetState(group->voices[v], state);
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
            SoundGroup* group = groupAt(list, i);
            if (group == NULL) continue;
            if ((group->flags & 0x40) == 0) continue;
            if ((group->flags & 0x400) != 0) {
                if (group->state == 0 || group->state == 2) {
                    FUN_00152bf8(group);
                    i--;
                }
                continue;
            }
            if (FUN_00178144(group->voices[0]) != 0) {
                list->totalVoices += group->voiceCount;
                if ((group->flags & 2) == 0) {
                    group->flags |= 2;
                } else {
                    if (list->stepPending == 0) continue;
                    if ((group->flags & 0x20) != 0) {
                        if (group->fadeFrames > group->fadeProgress) {
                            setVolume(group, ((f32)group->fadeProgress / (f32)group->fadeFrames) * group->volume);
                        } else {
                            setVolume(group, group->volume);
                            group->flags &= ~0x20;
                        }
                    } else if ((group->flags & 0x10) != 0) {
                        if (group->fadeFrames > group->fadeProgress) {
                            setVolume(group, group->volume - (f32)group->fadeProgress / (f32)group->fadeFrames);
                        } else {
                            group->flags &= ~0x10;
                            if ((group->flags & 0x100) != 0) {
                                setState(group, 1);
                                group->flags &= ~0x100;
                            } else if ((group->flags & 0x80) != 0) {
                                setState(group, 2);
                                group->flags &= ~0x80;
                            }
                        }
                    } else {
                        group->fadeProgress++;
                        continue;
                    }
                }
            } else if (*(reinterpret_cast<u8*>(group->voices[0]) + 4) != 2 && (group->flags & 2) != 0) {
                if (group->state == 0 || group->state == 2) {
                    FUN_00152bf8(group);
                    i--;
                } else if (group->state == 1 || group->state == 3) {
                    group->flags = (group->flags & ~2) | 0x200;
                }
            }
            if (list->stepPending == 0) continue;
            group->fadeProgress++;
        }
        if (list->stepPending != 0) list->stepPending = 0;
    }
    nn_os_CriticalSection_Leave(g_asdSoundSystem.list.section);
}

} /* extern "C" */
