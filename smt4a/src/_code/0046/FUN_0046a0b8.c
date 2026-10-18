/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a0b8` (_code @ 0x46a0b8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019ea64. */
extern int FUN_00224880(unsigned int);


void FUN_0046a0b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(**(unsigned int **)(param_1 + 0x2b4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
    FUN_0019ea64(0);
    return;
  }
  return;
}
