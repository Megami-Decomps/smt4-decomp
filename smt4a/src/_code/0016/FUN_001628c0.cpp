/* NON_MATCHING: retail clears a third unused scratch buffer; bounded slot lookup and float-pair copies also schedule differently. */
#include "common.h"
#include <stddef.h>

namespace {
struct VoiceFileSlot {
    u8 active;
    char path[0x40];
    u8 unk41[0xF];
    u32 position;
    u32 frame;
    f32 leftVolume;
    f32 rightVolume;
    u8 unk60[8];
    u32 flags;
    u8 unk6C[8];
    u8 category;
    u8 volume;
    u8 unk76;
    u8 options;
};
struct VoiceFileRequests {
    VoiceFileSlot slots[4];
    u8 unk1E0[6];
    u8 disabled;
};
typedef char VoiceFileSlotOffsetsCheck[sizeof(VoiceFileSlot) == 0x78 &&
    offsetof(VoiceFileSlot, leftVolume) == 0x58 && offsetof(VoiceFileSlot, options) == 0x77 &&
    offsetof(VoiceFileRequests, disabled) == 0x1E6 ? 1 : -1];
}

extern "C" {
extern VoiceFileRequests DAT_0061978c;
extern const char DAT_0053629c[]; // "snd/voice/"
extern const char DAT_00536288[]; // "%s.bcwav"
void rt_aeabi_memclr(void *data, u32 size);
void textFormatBuffer(char *output, const char *format, ...);
char *libc_strcat(char *output, const char *input);
char *libc_strcpy(char *output, const char *input);
void *jyoucyuGetTableEntry(u32 id);
s32 FUN_00162ea4(void);
void asdSoundGetObjectCount(void);
u32 asdLoadFileExists(const char *path);
void FUN_00167f44(void *file, VoiceFileSlot *slot);
void FUN_00168750(const char *path, void **file, u32 flags,
    void (*callback)(void *, VoiceFileSlot *), VoiceFileSlot *slot);
}

static __inline VoiceFileSlot *voiceFileSlotAt(u32 index)
{
    if (index >= 4)
        return NULL;
    return &DAT_0061978c.slots[index];
}

static __inline s32 findFreeVoiceFileSlot(void)
{
    for (s32 index = 0; index < 4; ++index) {
        if (voiceFileSlotAt(index)->active == 0)
            return index;
    }
    return -1;
}

// Request one streamed BCWAV voice in a free slot, preserving its independent channel volumes.
extern "C" u32 FUN_001628c0(const char *name, u32 volume, u8 category, u8 options,
    f32 leftVolume, f32 rightVolume)
{
    char path[64];
    char basename[64];
    rt_aeabi_memclr(path, sizeof(path));
    rt_aeabi_memclr(basename, sizeof(basename));
    if (jyoucyuGetTableEntry(1) != NULL || FUN_00162ea4() != 0 ||
        DAT_0061978c.disabled != 0 || volume == 0)
        return ~0u;
    textFormatBuffer(basename, DAT_0053629c);
    libc_strcat(basename, name);
    textFormatBuffer(path, DAT_00536288, basename);
    asdSoundGetObjectCount();
    s32 index = findFreeVoiceFileSlot();
    if (index == -1)
        return ~0u;
    VoiceFileSlot *slot = voiceFileSlotAt(index);
    if (slot == NULL || asdLoadFileExists(path) == 0)
        return ~0u;
    slot->position = 0;
    slot->frame = 0;
    slot->flags = 0;
    slot->category = category;
    slot->active = 1;
    slot->leftVolume = leftVolume;
    slot->rightVolume = rightVolume;
    slot->volume = static_cast<u8>(volume);
    slot->options = options;
    libc_strcpy(slot->path, path);
    FUN_00168750(path, NULL, 3, FUN_00167f44, slot);
    return index;
}
