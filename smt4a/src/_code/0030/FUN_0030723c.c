/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030723c` (_code @ 0x30723c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559728; /* 0x559728 */

extern unsigned int *FUN_00300844(unsigned int, unsigned int);


void FUN_0030723c(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00300844(param_1,0);
  puVar1[4] = param_2;
  *puVar1 = (unsigned int)&DAT_00559728;
  return;
}
