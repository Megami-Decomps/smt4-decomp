/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439020` (_code @ 0x439020, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0380(...);
int FUN_0042ce1c(...);

/* Supplied declaration required: FUN_001a0380. */
/* Supplied declaration required: FUN_0042ce1c. */


void FUN_00439020(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_001a0380("ngword:");
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_0042ce1c(param_1 + 4);
  }
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x19) = 0;
  *(unsigned char *)(param_1 + 0x1a) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned char *)(param_1 + 0x30) = 1;
  return;
}

} /* extern "C" */
