/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9b2c` (_code @ 0x2c9b2c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287be4(void);

extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00287be4. */


void FUN_002c9b2c(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 7 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  
  temp_v0 = DAT_00447e88;
  pfVar2 = (float *)(DAT_00447e88 + 0x138);
  *(float *)(DAT_00447e88 + 0x150) = in_s3 - in_s0;
  *(float *)(temp_v0 + 0x154) = in_s4 - in_s1;
  *(float *)(temp_v0 + 0x158) = in_s5 - in_s2;
  *pfVar2 = in_s0;
  *(float *)(temp_v0 + 0x13c) = in_s1;
  *(float *)(temp_v0 + 0x140) = in_s2;
  *(float *)(temp_v0 + 0x144) = in_s3;
  *(float *)(temp_v0 + 0x148) = in_s4;
  *(float *)(temp_v0 + 0x14c) = in_s5;
  *(float *)(temp_v0 + 0x150) = (in_s3 - in_s0) * 0.055555556f;
  *(float *)(temp_v0 + 0x154) = (in_s4 - in_s1) * 0.055555556f;
  *(float *)(temp_v0 + 0x158) = (in_s5 - in_s2) * 0.055555556f;
  FUN_00287be4();
  *(float *)(DAT_00447e88 + 0x50) = in_s0;
  return;
}

} /* extern "C" */
