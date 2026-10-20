/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004acdb4` (_code @ 0x4acdb4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055c95c; /* 0x55c95c */


void FUN_004acdb4(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)*param_1)(param_1,0x24);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[5] = 0xffffffff;
    *puVar1 = (unsigned int)&DAT_0055c95c;
    puVar1[1] = 2;
    puVar1[2] = 6;
    puVar1[3] = (unsigned int)param_1;
    puVar1[4] = param_2;
  }
  return;
}

} /* extern "C" */
