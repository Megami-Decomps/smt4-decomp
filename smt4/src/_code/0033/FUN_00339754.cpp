/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339754` (_code @ 0x339754, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c618(unsigned int, int);
int FUN_0029a014(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0029a014. */


void FUN_00339754(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x4398) != 0) {
    FUN_0029a014(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
    FUN_0028c618(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
    return;
  }
  return;
}

} /* extern "C" */
