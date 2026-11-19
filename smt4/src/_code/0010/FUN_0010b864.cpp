/* NON_MATCHING: layout matches retail (the empty-list arm after the tail call), as in its twin smt4a
 * asdSoundObjectRegister; remaining: retail keeps `level` in ip across the push (r4 here), loads the 1.0 into the
 * volume's s0 and copies it to s1 (here the reverse) and moves `frames` into r1 before the volume test. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void asdWaveVoicePrepareFade(AsdSndWaveVoice *voice, s32 frames, f32 volume, f32 secondaryVolume);

/* Links `voice` into the live sound list unless it is already there, then starts it at the volume of `level`
 * (64 = unit volume, 0 = silent, clamped to 2.0). */
void FUN_0010b864(AsdSndWaveVoice *voice, u32 level, s32 frames)
{
    if (voice == NULL) {
        return;
    }

    AsdSndStatus *status = &g_asdSoundStatus;
    AsdSndWaveVoice *node = static_cast<AsdSndWaveVoice *>(status->objects);
    if (node == NULL) {
        status->objects = voice;
        ++status->objectCount;
    } else {
        for (;;) {
            if (node == voice)
                break;
            AsdSndWaveVoice *next = node->link.next;
            if (next != NULL) {
                node = next;
                continue;
            }
            voice->link.prev = node;
            node->link.next = voice;
            ++status->objectCount;
            break;
        }
    }

    f32 volume = 1.0f;
    if (level == 0) {
        volume = 0.0f;
    } else {
        volume += (static_cast<f32>(level) - 64.0f) * (2.0f / 127.0f);
        if (volume > 2.0f) {
            volume = 2.0f;
        }
    }

    asdWaveVoicePrepareFade(voice, frames, volume, 1.0f);
}
}
