/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003defe0` (_code @ 0x3defe0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_0041860c. */


void FUN_003defe0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_001ad9b4();
  if (temp_v0 != 0) {
    FUN_0041860c(param_1);
    return;
  }
  return;
}
