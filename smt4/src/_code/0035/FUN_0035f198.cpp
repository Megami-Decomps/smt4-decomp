/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f198` (_code @ 0x35f198, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3dfc(...);
int FUN_00357488(...);

/* Supplied declaration required: FUN_002c3dfc. */
/* Supplied declaration required: FUN_00357488. */


void FUN_0035f198(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_002c3dfc("ngword:");
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00357488(param_1 + 4);
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
