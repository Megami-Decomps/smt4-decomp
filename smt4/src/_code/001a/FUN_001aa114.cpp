/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa114` (_code @ 0x1aa114, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297488(void);

/* Supplied declaration required: FUN_00297488. */


unsigned int FUN_001aa114(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  FUN_00297488();
  *(unsigned int *)
   ((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x18) * 4 + 2) * 4 + 0x4c4d44) =
       in_s0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
