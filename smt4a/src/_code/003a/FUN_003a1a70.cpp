/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1a70` (_code @ 0x3a1a70, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int FUN_0019a5a0(int);
int FUN_00222104(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00222104. */


void FUN_003a1a70(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_001800b8();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00222104();
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
