/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d750` (_code @ 0x34d750, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0034d750(int param_1)

{
  char temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c) == 4;
  if ((!(unsigned char)temp_v0) && (*(int *)(param_1 + 0x2c) == 5)) {
    temp_v0 = '\x02';
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(unsigned char *)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 0x1f6) = temp_v0 == '\0';
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 4) + 0x1f6) =
         temp_v0 == '\x01';
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 8) + 0x1f6) =
         temp_v0 == '\x02';
  }
  return;
}
