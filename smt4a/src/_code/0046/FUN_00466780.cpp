/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466780` (_code @ 0x466780, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00461a54(unsigned int, unsigned int, unsigned int);
int FUN_00466518(int, unsigned int, unsigned int);
int FUN_00466bd4(int);
int nw_snd_internal_CurveAdshr_Reset(int);
int nw_snd_internal_driver_Voice_SetInterpolationType(unsigned int, int);
int nw_snd_internal_driver_Voice_Start(unsigned int);

/* Supplied declaration required: FUN_00461a54. */
/* Supplied declaration required: FUN_00466518. */
/* Supplied declaration required: FUN_00466bd4. */
/* Supplied declaration required: nw_snd_internal_CurveAdshr_Reset. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetInterpolationType. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Start. */


void FUN_00466780(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 400) = param_3;
  do {
    FUN_00466bd4(param_1 + temp_v0 * 0x20 + 0xb4);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  nw_snd_internal_CurveAdshr_Reset(param_1 + 0x98);
  *(unsigned int *)(param_1 + 0x16c) = 0;
  FUN_00461a54(*(unsigned int *)(param_1 + 0x1a8),param_2,param_4);
  FUN_00466518(param_1,param_2,param_4);
  nw_snd_internal_driver_Voice_SetInterpolationType
            (*(unsigned int *)(param_1 + 0x1a8),*(unsigned char *)(param_1 + 0x197));
  nw_snd_internal_driver_Voice_Start(*(unsigned int *)(param_1 + 0x1a8));
  *(unsigned char *)(param_1 + 0x139) = 1;
  return;
}

} /* extern "C" */
