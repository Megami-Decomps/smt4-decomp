/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237764` (_code @ 0x237764, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d3508(void);

/* Supplied declaration required: FUN_003d3508. */


unsigned int FUN_00237764(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  FUN_003d3508();
  *(unsigned int *)
   ((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x18) * 4 + 2) * 4 + 0x618e9c) =
       in_s0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
