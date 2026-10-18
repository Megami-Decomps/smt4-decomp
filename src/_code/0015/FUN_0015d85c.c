/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d85c` (_code @ 0x15d85c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0015e2e4. */


void FUN_0015d85c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0 [2];
  
  temp_v0[0] = *(int *)(*param_1 + 0x28);
  if (temp_v0[0] != 0) {
    temp_v0[0] = *param_1 + 0x28 + temp_v0[0];
  }
  else {
    temp_v0[0] = 0;
  }
  if (temp_v0[0] != 0) {
    FUN_0015e2e4(temp_v0);
  }
  return;
}
