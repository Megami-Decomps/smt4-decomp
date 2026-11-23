/* Initializes voice playback defaults and loads the voice panning table. */
#include "sound/VoiceLoadQueue.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "kernel/jyoucyuGetTableEntry.h"

/* The voice file's data: the load queue and, right after it, the ducking parameters. The file defines both, so
 * armcc reaches the settings from the queue's pool word (queue + 0x1E8) and stores them as one block, as retail
 * does. */
VoiceLoadQueue g_soundObjectTable;
VoiceDuckSettings g_voiceDuckSettings;

extern "C" {
void FUN_00143800(void);
void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames,
                       u32 mode, u32 fadeInFrames, u32 fadeOutFrames);

void FUN_0013ae58(void)
{
    VoiceLoadQueue *queue = &g_soundObjectTable;
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_00143800();
        queue->voiceBank = 0x60;
        queue->voiceFlags |= 3;
        queue->disabled = 0;
        asdSoundSetHasStream(1);
        g_voiceDuckSettings.level = 0.6f;
        g_voiceDuckSettings.holdFrames = 5;
        g_voiceDuckSettings.mode = 30;
        g_voiceDuckSettings.fadeInFrames = 1;
        g_voiceDuckSettings.fadeOutFrames = 20;
        asdSoundDuckSetup(g_voiceDuckSettings.level, 1, g_voiceDuckSettings.holdFrames, g_voiceDuckSettings.mode,
                          g_voiceDuckSettings.fadeInFrames, g_voiceDuckSettings.fadeOutFrames);
        u32 size = 0;
        if (queue->panTable == NULL) {
            queue->panTable = asdLoadFileWithSize("snd/voice_pan.tbl", &size, 0);
        }
    }
}
}
