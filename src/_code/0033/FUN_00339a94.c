/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339a94` (_code @ 0x339a94, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254c6c. */
/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_002a06c8. */
extern int FUN_002ae16c(unsigned int);
/* Supplied declaration required: FUN_002d5780. */


unsigned int FUN_00339a94(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ae16c(*(unsigned int *)(param_1 + 0x4398));
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x4398) + 8) + 0xc) < 0) {
      FUN_002a06c8(*(int *)(param_1 + 0x4398),1);
      FUN_0025c0f0(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
      FUN_00254c6c(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),1);
      FUN_002d5780(*(unsigned int *)(param_1 + 0x4398));
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
