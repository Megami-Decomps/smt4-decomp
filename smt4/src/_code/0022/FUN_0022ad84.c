/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ad84` (_code @ 0x22ad84, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00464fac; /* 0x464fac */


void FUN_0022ad84(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_00464fac;
  if (DAT_00464fac != (unsigned int *)0x0) {
    *DAT_00464fac = param_1;
    puVar1[1] = param_2;
  }
  return;
}
