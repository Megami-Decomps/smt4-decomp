/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b564` (_code @ 0x10b564, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558cf4; /* 0x558cf4 */

extern int FUN_002e7168(unsigned int *, unsigned int);


void FUN_0010b564(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558cf4;
  temp_v0 = FUN_002e7168(param_1 + 1,0x20000000);
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned char *)(temp_v0 + 0x30) = 2;
  return;
}
