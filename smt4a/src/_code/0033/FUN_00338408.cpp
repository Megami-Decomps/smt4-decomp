/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338408` (_code @ 0x338408, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00338408(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  while (temp_v0 != 0) {
    temp_v0 = *(int *)(temp_v0 + 0x40);
    FUN_0019a5a0();
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0019a5a0();
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
