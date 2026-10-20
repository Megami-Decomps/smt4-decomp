/* Starts a channel: resets its envelope and LFO, queues the wave buffer on the voice, applies pan/interpolation settings, and starts it. */
#include "nw/snd/Voice.h"

extern "C" {

typedef struct {
    u8 unk000[0x90];                      /* 0x000 */
    u8 adshr[0x1c];                       /* 0x090 CurveAdshr */
    u8 lfo[0x1a];                         /* 0x0ac CurveLfo */
    u8 started;                           /* 0x0c6 */
    u8 unk0c7[0x31];                      /* 0x0c7 */
    u32 unk0f8;                           /* 0x0f8 */
    u8 unk0fc[0x24];                      /* 0x0fc */
    u32 userParam;                        /* 0x120 */
    u8 panMode;                           /* 0x124 */
    u8 panCurve;                          /* 0x125 */
    u8 unk126[3];                         /* 0x126 */
    u8 interpolationType;                 /* 0x129 */
    u8 unk12a[0xa];                       /* 0x12a */
    nw_snd_internal_driver_Voice *voice;  /* 0x134 */
} Channel;

extern f32 DAT_00414a50;

void FUN_0037bff0(nw_snd_internal_driver_Voice *voice, u32 waveBuffer, u32 bufferParam);
void nw_snd_internal_CurveAdshr_Reset(u8 *adshr, f32 initial);
void nw_snd_internal_CurveLfo_Reset(u8 *lfo);
void nw_snd_internal_driver_Channel_AppendWaveBuffer(Channel *channel, u32 waveBuffer, u32 bufferParam);
void nw_snd_internal_driver_Voice_SetInterpolationType(nw_snd_internal_driver_Voice *voice, s32 type);
void nw_snd_internal_driver_Voice_SetPanCurve(nw_snd_internal_driver_Voice *voice, s32 curve);
void nw_snd_internal_driver_Voice_SetPanMode(nw_snd_internal_driver_Voice *voice, s32 mode);
void nw_snd_internal_driver_Voice_Start(nw_snd_internal_driver_Voice *voice);

void FUN_0037fddc(Channel *channel, u32 waveBuffer, u32 userParam, u32 bufferParam)
{
    channel->userParam = userParam;
    nw_snd_internal_CurveLfo_Reset(channel->lfo);
    nw_snd_internal_CurveAdshr_Reset(channel->adshr, DAT_00414a50);
    channel->unk0f8 = 0;
    FUN_0037bff0(channel->voice, waveBuffer, bufferParam);
    nw_snd_internal_driver_Channel_AppendWaveBuffer(channel, waveBuffer, bufferParam);
    nw_snd_internal_driver_Voice_SetPanMode(channel->voice, channel->panMode);
    nw_snd_internal_driver_Voice_SetPanCurve(channel->voice, channel->panCurve);
    nw_snd_internal_driver_Voice_SetInterpolationType(channel->voice, channel->interpolationType);
    nw_snd_internal_driver_Voice_Start(channel->voice);
    channel->started = 1;
}

} /* extern "C" */
