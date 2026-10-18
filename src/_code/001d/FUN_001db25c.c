/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db25c` (_code @ 0x1db25c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_001db25c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  temp_v0 = FUN_002bf41c(*param_1);
  if (temp_v0 != 0) {
    FUN_002c45b8(*param_1,0);
    return;
  }
  return;
}
