/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522a08` (_code @ 0x522a08, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a83bc. */


int FUN_00522a08(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  if ((*(unsigned int *)(param_1 + 8) & 0x100) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0xc));
    }
    else {
      in_s0 = *(unsigned int *)(param_1 + 0xc);
    }
    *param_2 = in_s0;
  }
  return ~(*(unsigned int *)(param_1 + 8) & 0xf00) << 8;
}
