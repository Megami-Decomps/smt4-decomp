/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fddc` (_code @ 0x37fddc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0037bff0. */
/* Supplied declaration required: nw_snd_internal_CurveAdshr_Reset. */
/* Supplied declaration required: nw_snd_internal_CurveLfo_Reset. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_AppendWaveBuffer. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetInterpolationType. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanCurve. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanMode. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Start. */


void FUN_0037fddc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x120) = param_3;
  nw_snd_internal_CurveLfo_Reset(param_1 + 0xac);
  nw_snd_internal_CurveAdshr_Reset(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0xf8) = 0;
  FUN_0037bff0(*(unsigned int *)(param_1 + 0x134),param_2,param_4);
  nw_snd_internal_driver_Channel_AppendWaveBuffer(param_1,param_2,param_4);
  nw_snd_internal_driver_Voice_SetPanMode
            (*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x124));
  nw_snd_internal_driver_Voice_SetPanCurve
            (*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x125));
  nw_snd_internal_driver_Voice_SetInterpolationType
            (*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x129));
  nw_snd_internal_driver_Voice_Start(*(unsigned int *)(param_1 + 0x134));
  *(unsigned char *)(param_1 + 0xc6) = 1;
  return;
}
