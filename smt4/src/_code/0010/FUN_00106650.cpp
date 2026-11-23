#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "sound/VoiceLoadQueue.h"
#include "AsdSDK/FileLoadSync.h"

/* The voice file's data: the load queue and, right after it, the ducking parameters (the twin of Apocalypse's
 * FUN_0013ae58). The file defines both, so armcc reaches the settings from the queue's pool word (queue + 0x1E8)
 * and stores them as one block, as retail does. */
VoiceLoadQueue DAT_004c5634;
VoiceDuckSettings g_voiceDuckSettings;

extern "C" {

s32 jyoucyuGetTableEntry(u32 index);
void FUN_0010dd80(void);
void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames, u32 mode, u32 fadeInFrames, u32 fadeOutFrames);

// Initialize sound defaults and load the voice-pan table if entry 1 is absent.
void FUN_00106650(void)
{
    VoiceLoadQueue *queue = &DAT_004c5634;
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }

    FUN_0010dd80();
    queue->voiceBank = 0x60;
    queue->voiceFlags |= 3;
    queue->disabled = 0;
    asdSoundSetVolumeIfEnabled(1);

    g_voiceDuckSettings.level = 0.7f;
    g_voiceDuckSettings.holdFrames = 5;
    g_voiceDuckSettings.mode = 30;
    g_voiceDuckSettings.fadeInFrames = 1;
    g_voiceDuckSettings.fadeOutFrames = 20;
    asdSoundDuckSetup(g_voiceDuckSettings.level, 1, g_voiceDuckSettings.holdFrames, g_voiceDuckSettings.mode,
                      g_voiceDuckSettings.fadeInFrames, g_voiceDuckSettings.fadeOutFrames);

    u32 size = 0;
    if (queue->panTable == NULL) {
        queue->panTable = fileLoadSync("snd/voice_pan.tbl", &size, 0);
    }
}
}
