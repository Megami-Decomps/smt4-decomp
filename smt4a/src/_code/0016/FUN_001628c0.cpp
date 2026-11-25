/* NON_MATCHING: the variadic format calls change the prologue, and the slot search and request-field stores
 * use a different register schedule. The image pools these two formats with FUN_001566a8. */
#include "runtime/Stdio.h"
#include "code/Code0016.h"
#include "sound/VoiceLoadQueue.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
void rt_aeabi_memclr(void *memory, u32 size);
s32 eventIsSkipping(void);
char *libc_strcat(char *destination, const char *source);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
u32 asdSoundGetObjectCount(void);
u32 asdLoadFileExists(const char *path);
void workCommandArm(void *file, VoiceLoadRequest *request);
} /* extern "C" */
extern "C" const char DAT_0053629c[]; /* "snd/voice/" */
extern "C" const char DAT_00536288[]; /* "%s.bcwav" */


/* Reserves a voice-load slot and schedules the named wave file with per-channel stereo gains. */
extern "C" u32 FUN_001628c0(const char *name, s32 kind, u8 flags, u8 priority, f32 leftGain, f32 rightGain)
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
    libc_strcat(directory, name);
    __2sprintf(path, DAT_00536288, directory);
    asdSoundGetObjectCount();
    s32 index = findFreeVoiceLoadRequest(&g_soundObjectTable);
    if (index == -1)
        return failure;
    VoiceLoadRequest *request = voiceLoadRequestAt(&g_soundObjectTable, index);
    if (request == NULL || !asdLoadFileExists(path))
        return failure;
    request->group = 0;
    request->id = 0;
    request->counter = 0;
    request->flags = flags;
    request->active = 1;
    request->gains[0] = leftGain;
    request->gains[1] = rightGain;
    request->kind = kind;
    request->priority = priority;
    libc_strcpy(request->path, path);
    asdLoadFileAsyncDefault((u32)path, 0, 3, (u32)workCommandArm, (u32)request);
    return index;
}
