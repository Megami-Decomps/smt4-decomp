/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5810` (_code @ 0x3e5810, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_003e5810(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1 = param_1 + param_2 * 0x5c;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x1c) = 2;
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    FUN_001aea28(DAT_0056fcc0);
    return;
  }
  return;
}

} /* extern "C" */
