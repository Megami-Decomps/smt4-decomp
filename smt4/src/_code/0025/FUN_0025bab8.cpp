/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025bab8` (_code @ 0x25bab8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int nw_ut_FloatColor_ToPicaU32(int);


void FUN_0025bab8(int *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  temp_v0 = *param_1;
  *(unsigned int *)(temp_v0 + 0xdc) = in_s0;
  *(unsigned int *)(temp_v0 + 0xe0) = in_s1;
  *(unsigned int *)(temp_v0 + 0xe4) = in_s2;
  *(unsigned int *)(temp_v0 + 0xe8) = in_s3;
  temp_v1 = nw_ut_FloatColor_ToPicaU32(*param_1 + 0xdc);
  *(unsigned int *)(*param_1 + 0x104) = temp_v1;
  return;
}

} /* extern "C" */
