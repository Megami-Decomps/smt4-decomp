/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003599e8` (_code @ 0x3599e8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


void FUN_003599e8(unsigned int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f0c8;
  *(unsigned int *)(DAT_0057f0c8 + 0x670) = param_1;
  *(unsigned char *)(temp_v0 + 0x674) = param_2;
  *(unsigned char *)(temp_v0 + 0x675) = param_3;
  *(unsigned char *)(temp_v0 + 0x676) = param_4;
  return;
}

} /* extern "C" */
