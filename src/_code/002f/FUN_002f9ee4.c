/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9ee4` (_code @ 0x2f9ee4, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0025721c(unsigned int);
/* Supplied declaration required: FUN_0025722c. */
/* Supplied declaration required: FUN_0025733c. */
/* Supplied declaration required: FUN_00257390. */


void FUN_002f9ee4(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_2 + 0xd0) != 0) {
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_00257390();
    }
    temp_v0 = *(unsigned int *)(param_2 + 0xd0);
    FUN_0025722c();
    *(unsigned int *)(param_1 + 0xd0) = temp_v0;
  }
  else if (*(int *)(param_2 + 0xcc) != 0) {
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_0025733c();
    }
    temp_v0 = FUN_0025721c(*(unsigned int *)(param_2 + 0xcc));
    *(unsigned int *)(param_1 + 0xcc) = temp_v0;
    return;
  }
  return;
}
