/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003771e0` (_code @ 0x3771e0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004219c4; /* 0x4219c4 */

extern unsigned int *FUN_0037b4b0(unsigned int, unsigned int);


void FUN_003771e0(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037b4b0(param_1,0);
  *puVar1 = (unsigned int)&DAT_004219c4;
  return;
}
