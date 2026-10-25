#include "util/FUN_00168750.h"
/* NON_MATCHING: retail reloads the DAT_0061978c base (r1) after asdSoundGetObjectCount instead of keeping it in r4, and assigns group/flags to sl/r9 the other way round. */
#include "sound/VoiceLoadQueue.h"

extern "C" {
extern VoiceLoadQueue DAT_0061978c;
extern const char DAT_0053629c[];
extern const char DAT_00536294[];
extern const char DAT_00536288[];
void rt_aeabi_memclr(void *memory, u32 size);
void *jyoucyuGetTableEntry(u32 index);
s32 FUN_00162ea4(void);
s32 textFormatBuffer(char *buffer, const char *format, ...);
char *libc_strcat(char *destination, const char *source);
char *libc_strcpy(char *destination, const char *source);
u32 asdSoundGetObjectCount(void);
u32 asdLoadFileExists(const char *path);
void FUN_00167f44(void *file, VoiceLoadRequest *request);
}

static inline VoiceLoadRequest *voiceLoadRequestAt(u32 index)
{
    return index < 4 ? &DAT_0061978c.entries[index] : NULL;
}
static inline s32 findFreeVoiceLoadRequest()
{
    for (s32 index = 0; index < 4; ++index) {
        if (voiceLoadRequestAt(index)->active == 0)
            return index;
    }
    return -1;
}

// Reserve a voice-load slot and schedule a wave file with per-channel stereo gains.
extern "C" u32 FUN_001566a8(u32 group, u32 id, s32 kind, u8 flags, u8 priority,
                             f32 leftGain, f32 rightGain)
{
    u32 failure = (u32)-1;
    char path[64], directory[64], number[64];
    rt_aeabi_memclr(path, sizeof(path));
    rt_aeabi_memclr(directory, sizeof(directory));
    rt_aeabi_memclr(number, sizeof(number));
    if (jyoucyuGetTableEntry(1) != NULL)
        return failure;
    if (FUN_00162ea4() != 0)
        return failure;
    if (DAT_0061978c.disabled != 0 || kind == 0)
        return failure;
    textFormatBuffer(directory, DAT_0053629c);
    textFormatBuffer(number, DAT_00536294, id);
    libc_strcat(directory, number);
    textFormatBuffer(path, DAT_00536288, directory);
    asdSoundGetObjectCount();
    s32 index = findFreeVoiceLoadRequest();
    if (index == -1)
        return failure;
    VoiceLoadRequest *request = voiceLoadRequestAt(index);
    if (request == NULL || !asdLoadFileExists(path))
        return failure;
    request->counter = 0;
    request->flags = flags;
    request->active = 1;
    request->id = id;
    request->group = group;
    request->gains[0] = leftGain;
    request->gains[1] = rightGain;
    request->kind = kind;
    request->priority = priority;
    libc_strcpy(request->path, path);
    FUN_00168750(reinterpret_cast<u32>(path), 0, 3, reinterpret_cast<u32>(FUN_00167f44), reinterpret_cast<u32>(request));
    return index;
}
