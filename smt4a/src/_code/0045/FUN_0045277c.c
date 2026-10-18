/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045277c` (_code @ 0x45277c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001c0544. */


void FUN_0045277c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1 [2];
  
  temp_v1[0] = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    temp_v1[0] = temp_v0 + param_1 + 8;
  }
  if (temp_v1[0] != 0) {
    FUN_001c0544(temp_v1);
  }
  return;
}
