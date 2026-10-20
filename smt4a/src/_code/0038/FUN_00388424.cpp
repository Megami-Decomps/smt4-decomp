/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388424` (_code @ 0x388424, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f56c; /* 0x57f56c */


void FUN_00388424(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x2ac) = param_1;
  *(unsigned char *)(temp_v0 + 0x2b0) = param_2;
  return;
}

} /* extern "C" */
