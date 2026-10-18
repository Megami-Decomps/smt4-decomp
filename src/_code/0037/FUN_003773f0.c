/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003773f0` (_code @ 0x3773f0, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042160c; /* 0x42160c */

extern unsigned int *FUN_0037b6c0(unsigned int, unsigned int);


void FUN_003773f0(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037b6c0(param_1,0);
  *puVar1 = (unsigned int)&DAT_0042160c;
  return;
}
