/* Starts a channel: resets its LFOs and envelope, queues the wave buffer on the voice, applies the interpolation type, and starts it. */
#include "nw/snd/Voice.h"

extern "C" {

typedef struct {
    u8 unk000[0x98];                      /* 0x000 */
    u8 adshr[0x1c];                       /* 0x098 CurveAdshr */
    u8 lfo[4][0x20];                      /* 0x0b4 CurveLfo */
    u8 unk134[5];                         /* 0x134 */
    u8 started;                           /* 0x139 */
    u8 unk13a[0x32];                      /* 0x13a */
    u32 unk16c;                           /* 0x16c */
    u8 unk170[0x20];                      /* 0x170 */
    u32 userParam;                        /* 0x190 */
    u8 unk194[3];                         /* 0x194 */
    u8 interpolationType;                 /* 0x197 */
    u8 unk198[0x10];                      /* 0x198 */
    nw_snd_internal_driver_Voice *voice;  /* 0x1a8 */
} Channel;

extern f32 DAT_0054bbd8;

void FUN_00461a54(nw_snd_internal_driver_Voice *voice, u32 waveBuffer, u32 bufferParam);
void sndChannelQueueWaveBuffer(Channel *channel, u32 waveBuffer, u32 bufferParam);
void sndChannelLfoReset(u8 *lfo);
void nw_snd_internal_CurveAdshr_Reset(u8 *adshr, f32 initial);
void nw_snd_internal_driver_Voice_SetInterpolationType(nw_snd_internal_driver_Voice *voice, s32 type);
void nw_snd_internal_driver_Voice_Start(nw_snd_internal_driver_Voice *voice);

void sndChannelStart(Channel *channel, u32 waveBuffer, u32 userParam, u32 bufferParam)
{
    s32 i;

    channel->userParam = userParam;
    for (i = 0; i < 4; i++) {
        sndChannelLfoReset(channel->lfo[i]);
    }
    nw_snd_internal_CurveAdshr_Reset(channel->adshr, DAT_0054bbd8);
    channel->unk16c = 0;
    FUN_00461a54(channel->voice, waveBuffer, bufferParam);
    sndChannelQueueWaveBuffer(channel, waveBuffer, bufferParam);
    nw_snd_internal_driver_Voice_SetInterpolationType(channel->voice, channel->interpolationType);
    nw_snd_internal_driver_Voice_Start(channel->voice);
    channel->started = 1;
}

} /* extern "C" */
