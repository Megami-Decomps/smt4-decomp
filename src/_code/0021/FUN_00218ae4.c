/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218ae4` (_code @ 0x218ae4, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bf030. */


void FUN_00218ae4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x217c) = 0;
  *(unsigned int *)(param_1 + 0x2180) = 4;
  *(unsigned short *)(param_1 + 0x218e) = 0;
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x218c)) {
    do {
      temp_v1 = param_1 + temp_v0 * 0x8c;
      FUN_002bf030(temp_v1 + 0x20,8);
      FUN_002bf030(temp_v1 + 0x598,8);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x218c));
  }
  return;
}
