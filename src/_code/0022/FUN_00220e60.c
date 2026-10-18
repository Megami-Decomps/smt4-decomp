/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220e60` (_code @ 0x220e60, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00288948. */
/* Supplied declaration required: FUN_0029bc1c. */
extern int FUN_002a0dd4(void);
/* Supplied declaration required: FUN_002a7604. */


void FUN_00220e60(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_00288948();
  temp_v0 = FUN_002a0dd4();
  if (temp_v0 != 0) {
    FUN_0029bc1c(1);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_002a7604(0);
  }
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00220ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}
