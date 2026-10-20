/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273358` (_code @ 0x273358, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004474f4; /* 0x4474f4 */


void FUN_00273358(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0x208) = param_1;
  *(unsigned char *)(temp_v0 + 0xb0) = 0;
  *(unsigned char *)(temp_v0 + 0xb1) = 0;
  *(unsigned short *)(temp_v0 + 0xb2) = 10;
  *(unsigned short *)(temp_v0 + 0xb4) = 0;
  *(unsigned int *)(temp_v0 + 0xb8) = 0;
  *(unsigned int *)(temp_v0 + 0xbc) = 0;
  *(unsigned int *)(temp_v0 + 0xc0) = 0x3f800000;
  return;
}

} /* extern "C" */
