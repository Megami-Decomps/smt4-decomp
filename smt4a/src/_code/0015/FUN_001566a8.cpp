#include "runtime/Stdio.h"
#include "code/Code0016.h"
/* NON_MATCHING: retail reloads the g_soundObjectTable base (r1) after asdSoundGetObjectCount instead of keeping it in r4, and assigns group/flags to sl/r9 the other way round. */
#include "sound/VoiceLoadQueue.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern VoiceLoadQueue g_soundObjectTable;
extern const char DAT_0053629c[];
extern const char DAT_00536294[];
extern const char DAT_00536288[];
void rt_aeabi_memclr(void *memory, u32 size);
s32 eventIsSkipping(void);
char *libc_strcat(char *destination, const char *source);
char *libc_strcpy(char *destination, const char *source);
u32 asdSoundGetObjectCount(void);
u32 asdLoadFileExists(const char *path);
void workCommandArm(void *file, VoiceLoadRequest *request);
}

static inline VoiceLoadRequest *voiceLoadRequestAt(u32 index)
{
    return index < 4 ? &g_soundObjectTable.entries[index] : NULL;
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
    if (eventIsSkipping() != 0)
        return failure;
    if (g_soundObjectTable.disabled != 0 || kind == 0)
        return failure;
    __2sprintf(directory, DAT_0053629c);
    __2sprintf(number, DAT_00536294, id);
    libc_strcat(directory, number);
    __2sprintf(path, DAT_00536288, directory);
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
    asdLoadFileAsyncDefault(reinterpret_cast<u32>(path), 0, 3, reinterpret_cast<u32>(workCommandArm), reinterpret_cast<u32>(request));
    return index;
}
