/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004527a8` (_code @ 0x4527a8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c0544(int [2]);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001c0544. */


void FUN_004527a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0 [2];
  
  temp_v0[0] = *(int *)(param_1 + 8);
  if (temp_v0[0] != 0) {
    temp_v0[0] = param_1 + 8 + temp_v0[0];
  }
  else {
    temp_v0[0] = 0;
  }
  if (temp_v0[0] != 0) {
    FUN_001c0544(temp_v0);
  }
  return;
}

} /* extern "C" */
