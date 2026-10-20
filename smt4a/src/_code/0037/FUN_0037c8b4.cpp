/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c8b4` (_code @ 0x37c8b4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f590; /* 0x57f590 */


unsigned int FUN_0037c8b4(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x93) = param_2;
  *(unsigned int *)(temp_v0 + 0x80) = param_1;
  *(unsigned int *)(temp_v0 + 0x84) = param_1;
  *(unsigned char *)(temp_v0 + 0x92) = 1;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  return 1;
}

} /* extern "C" */
