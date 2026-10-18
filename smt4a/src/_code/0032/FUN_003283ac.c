/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003283ac` (_code @ 0x3283ac, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588e5c; /* 0x588e5c */


void FUN_003283ac(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00588e5c;
  *(unsigned char *)(DAT_00588e5c + 0x3b) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = param_1;
  return;
}
