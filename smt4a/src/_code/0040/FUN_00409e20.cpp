/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409e20` (_code @ 0x409e20, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexLoadMainHeap(int, unsigned int);
int resourceApplyNodeFlag(int, unsigned int);
int asdTMTexNodeSetMode(int, unsigned int);

/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: resourceApplyNodeFlag. */
/* Supplied declaration required: asdTMTexNodeSetMode. */


void FUN_00409e20(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_2 & 8) != 0) {
    temp_v0 = 0xe;
    resourceApplyNodeFlag(0xe,param_3);
  }
  else {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 1) == 0) {
        return;
      }
      temp_v0 = 0xe;
      asdTMTexLoadMainHeap(0xe,param_3);
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v0 = 0xe;
    asdTMTexNodeSetMode(0xe,param_3);
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}

} /* extern "C" */
