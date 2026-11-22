/* NON_MATCHING: 176 lines: retail keeps the lock address (status + 8) in its own register across the update, computes the index bound test from a second copy of the status address, lays the released voice's unlink out with merged search branches (as FUN_0010bf78) and shares the flag stores of the fade-out end; the fades' volume terms are scheduled differently. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/AsdMemAlloc.h"

/* unit-local: the state byte of the nn::snd::CTR::Voice a wave voice plays on. */
struct WaveVoiceStateView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 state;          /* 2 = paused */
};

extern "C" {
extern AsdSndStatus g_asdSoundStatus;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state); // declcheck: local (protos__code.h declares it with decompiler types)
s32 FUN_001329d4(u32 voice);
void soundVoiceSetVolume(u32 voice, f32 volume);
void sndVoiceFree(u32 voice);
}

/* The index-th live voice, or NULL when the index is outside the list (as FUN_0010bf78's). */
static AsdSndWaveVoice *soundObjectAt(s32 index)
{
    AsdSndWaveVoice *voice = NULL;

    if (index >= 0 && g_asdSoundStatus.objectCount > index) {
        voice = (AsdSndWaveVoice *)g_asdSoundStatus.objects;
        for (s32 i = 0; i < index; ++i) {
            voice = voice->link.next;
        }
    }
    return voice;
}

static bool soundObjectIsLive(AsdSndWaveVoice *voice)
{
    for (AsdSndWaveVoice *item = (AsdSndWaveVoice *)g_asdSoundStatus.objects; item != NULL; item = item->link.next) {
        if (item == voice) {
            return true;
        }
    }
    return false;
}

/* Takes the voice out of the list. */
static void soundObjectUnlink(AsdSndWaveVoice *voice)
{
    for (AsdSndWaveVoice *item = (AsdSndWaveVoice *)g_asdSoundStatus.objects; item != NULL; item = item->link.next) {
        if (item == voice) {
            if (voice->link.prev != NULL) {
                voice->link.prev->link.next = voice->link.next;
                if (voice->link.next != NULL) {
                    voice->link.next->link.prev = voice->link.prev;
                }
            } else {
                g_asdSoundStatus.objects = voice->link.next;
                if (g_asdSoundStatus.objects != NULL) {
                    ((AsdSndWaveVoice *)g_asdSoundStatus.objects)->link.prev = NULL;
                }
            }
            break;
        }
    }
    --g_asdSoundStatus.objectCount;
}

/* Releases one voice: unlinks it and frees its voice and memory (as FUN_0010bf78's). */
static void soundObjectRelease(AsdSndWaveVoice *voice)
{
    if (voice != NULL) {
        nn_os_CriticalSection_Enter(g_asdSoundStatus.unk08);
        if (soundObjectIsLive(voice)) {
            soundObjectUnlink(voice);
        }
        if (voice->data != NULL) {
            asdMemFree(voice->data);
        }
        if (voice->voice != 0) {
            sndVoiceFree(voice->voice);
        }
        asdMemFree(voice);
        nn_os_CriticalSection_Leave(g_asdSoundStatus.unk08);
    }
}

/* Advances every live wave voice: marks it started, ends or releases it once its voice stops, and steps
 * its fade-in or fade-out on the frames the update is due. */
extern "C" void asdWaveVoiceUpdateAll(void)
{
    AsdSndStatus *status = &g_asdSoundStatus;
    nn_os_CriticalSection_Enter(status->unk08);
    if (status->unk15 != 0) {
        for (s32 i = 0; i < status->objectCount; ++i) {
            AsdSndWaveVoice *voice = soundObjectAt(i);
            if (voice == NULL || (voice->unk90 & 0x40) == 0) {
                continue;
            }
            if (FUN_001329d4(voice->voice) != 0) {
                if ((voice->unk90 & 2) == 0) {
                    voice->unk90 |= 2;
                } else {
                    if (status->pad16 == 0) {
                        continue;
                    }
                    if ((voice->unk90 & 0x20) != 0) {
                        if ((s32)voice->unk84 <= voice->fadeFrames) {
                            soundVoiceSetVolume(voice->voice, (f32)(s32)voice->unk84 / (f32)voice->fadeFrames * voice->targetVolume);
                        } else {
                            soundVoiceSetVolume(voice->voice, voice->targetVolume);
                            voice->unk90 &= ~0x20;
                        }
                    } else if ((voice->unk90 & 0x10) != 0) {
                        if ((s32)voice->unk84 <= voice->fadeFrames) {
                            f32 progress = (f32)(s32)voice->unk84 / (f32)voice->fadeFrames;
                            soundVoiceSetVolume(voice->voice, voice->targetVolume - voice->targetVolume * progress);
                        } else {
                            voice->unk90 &= ~0x10;
                            if ((voice->unk90 & 0x100) != 0) {
                                nn_snd_CTR_Voice_SetState(voice->voice, 1);
                                voice->unk90 &= ~0x100;
                            } else if ((voice->unk90 & 0x80) != 0) {
                                nn_snd_CTR_Voice_SetState(voice->voice, 2);
                                voice->unk90 &= ~0x80;
                            }
                        }
                    }
                }
            } else if (((WaveVoiceStateView *)voice->voice)->state != 2 && (voice->unk90 & 2) != 0) {
                if (voice->unk8c == 0) {
                    soundObjectRelease(voice);
                    --i;
                } else if (voice->unk8c == 1) {
                    voice->unk90 = (voice->unk90 & ~2) | 0x200;
                }
            }
            if (status->pad16 != 0) {
                ++voice->unk84;
            }
        }
        if (status->pad16 != 0) {
            status->pad16 = 0;
        }
    }
    nn_os_CriticalSection_Leave(status->unk08);
}
