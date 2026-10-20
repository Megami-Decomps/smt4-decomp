/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211c90` (_code @ 0x211c90, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeTreeReleaseItemClearOwner(unsigned int);
int nodeTreeReleaseItem(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: nodeTreeReleaseItemClearOwner. */
/* Supplied declaration required: nodeTreeReleaseItem. */


void FUN_00211c90(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r6;
  
  if (param_1 != 0) {
    unaff_r6 = 0;
  }
  temp_v0 = 0;
  if (param_1 == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x24) = unaff_r6;
  do {
    nodeTreeReleaseItemClearOwner(*(unsigned int *)(param_1 + temp_v0 * 4 + 0x264));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  *(unsigned int *)(param_1 + 0x24) = unaff_r6;
  *(unsigned int *)(param_1 + 0x28) = unaff_r6;
  *(unsigned int *)(param_1 + 0x2c) = unaff_r6;
  *(unsigned int *)(param_1 + 0x30) = unaff_r6;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  if (*(unsigned int **)(param_1 + 0x254) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x254) = unaff_r6;
  }
  nodeTreeReleaseItem(param_1);
  return;
}

} /* extern "C" */
