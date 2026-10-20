/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e566c` (_code @ 0x3e566c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fdb18(void);

/* Supplied declaration required: FUN_003fdb18. */


void FUN_003e566c(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_003fdb18();
    *(unsigned int *)(param_1 + 0xc) = in_s0;
    *(unsigned int *)(param_1 + 0x10) = in_s1;
    *(unsigned int *)(param_1 + 0x14) = in_s2;
  }
  temp_v2 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v2 * 0x5c + 0x24);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      FUN_003fdb18();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  return;
}

} /* extern "C" */
