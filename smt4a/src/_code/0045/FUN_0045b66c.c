/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b66c` (_code @ 0x45b66c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0046135c. */


void FUN_0045b66c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    temp_v0 = 0;
    do {
      FUN_0046135c(param_1 + temp_v0 * 0x10 + 8,param_1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)(param_1 + 0x59) = 1;
    *(unsigned char *)(param_1 + 0x58) = 0;
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x48) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 0x54) = 0;
  }
  return;
}
