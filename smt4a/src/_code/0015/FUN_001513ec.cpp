/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001513ec` (_code @ 0x1513ec, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */


void FUN_001513ec(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0x50) = param_2;
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0xc)) = param_3 & 0xffffff00;
  *(unsigned int *)(param_1 + 0x58) = in_s0;
  return;
}

} /* extern "C" */
