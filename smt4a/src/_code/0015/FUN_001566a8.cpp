/* NON_MATCHING: request search uses another scratch register; the saved group and flags registers and request-field store scheduling differ. */
#include <stdio.h>
#include "code/Code0016.h"
#include "sound/VoiceLoadQueue.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern VoiceLoadQueue g_soundObjectTable;
void rt_aeabi_memclr(void *memory, u32 size);
s32 eventIsSkipping(void);
char *libc_strcat(char *destination, const char *source);
char *libc_strcpy(char *destination, const char *source);
u32 asdSoundGetObjectCount(void);
u32 asdLoadFileExists(const char *path);
void workCommandArm(void *file, VoiceLoadRequest *request);
} /* extern "C" */

static const char s_voiceDirectory[] = "snd/voice/";
static const char s_voiceIdFormat[] = "%06d";
static const char s_voiceFileFormat[] = "%s.bcwav";

static __inline VoiceLoadRequest *voiceLoadRequestAt(VoiceLoadQueue *queue, u32 index)
{
    return index < 4 ? &queue->entries[index] : NULL;
}
static __inline s32 findFreeVoiceLoadRequest(VoiceLoadQueue *queue)
{
    for (s32 index = 0; index < 4; ++index) {
        if (voiceLoadRequestAt(queue, index)->active == 0)
            return index;
    }
    return -1;
}

/* Reserve a voice-load slot and schedule a wave file with per-channel stereo gains. */
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
    sprintf(directory, s_voiceDirectory);
    sprintf(number, s_voiceIdFormat, (s32)id);
    libc_strcat(directory, number);
    sprintf(path, s_voiceFileFormat, directory);
    asdSoundGetObjectCount();
    VoiceLoadQueue *queue = &g_soundObjectTable;
    s32 index = findFreeVoiceLoadRequest(queue);
    if (index == -1)
        return failure;
    VoiceLoadRequest *request = voiceLoadRequestAt(queue, index);
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
    asdLoadFileAsyncDefault((u32)path, 0, 3, (u32)workCommandArm, (u32)request);
    return index;
}
