/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376888` (_code @ 0x376888, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);
int FUN_00222104(void);
int FUN_00222434(void);
int FUN_002ce8d8(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_00222434. */
/* Supplied declaration required: FUN_002ce8d8. */


void FUN_00376888(int param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_00222434();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00222104();
  }
  FUN_002ce8d8(*(unsigned int *)(param_1 + 0x13c));
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
