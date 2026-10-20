/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_ExpHeapBase_Allocate` (_code @ 0x189b9c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a150c(int, int);
int FUN_001a153c(int, unsigned int);
int nn_fnd_detail_AllocFromHeap(int, unsigned int, int);
int nn_fnd_detail_SetAllocModeForHeap(int, int);

/* Supplied declaration required: FUN_001a150c. */
/* Supplied declaration required: FUN_001a153c. */
/* Supplied declaration required: nn_fnd_detail_AllocFromHeap. */
/* Supplied declaration required: nn_fnd_detail_SetAllocModeForHeap. */


int nn_fnd_ExpHeapBase_Allocate
              (int param_1,unsigned int param_2,int param_3,unsigned char param_4,int param_5,unsigned char param_6)

{
/* irregular: irregular input(s): in_stack_00000005; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_stack_00000005;
  
  FUN_001a150c(param_1 + 0x18,param_4);
  nn_fnd_detail_SetAllocModeForHeap(param_1 + 0x18,param_5);
  FUN_001a153c(param_1 + 0x18,(*(unsigned int *)&param_6));
  temp_v0 = param_1 + 0x18;
  nn_fnd_detail_AllocFromHeap(temp_v0,param_2,param_3);
  if (temp_v0 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return temp_v0;
}

} /* extern "C" */
