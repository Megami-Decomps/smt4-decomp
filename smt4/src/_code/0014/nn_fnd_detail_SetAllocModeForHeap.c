/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_detail_SetAllocModeForHeap` (_code @ 0x146dd8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short nn_fnd_detail_SetAllocModeForHeap(int param_1,unsigned short param_2)

{
  unsigned short temp_v0;
  
  temp_v0 = *(unsigned short *)(param_1 + 0x36);
  *(unsigned short *)(param_1 + 0x36) = (param_2 & 1) | (temp_v0 & 0xfffe);
  return temp_v0 & 1;
}
