/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00366a3c` (_code @ 0x366a3c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00236834. */


void FUN_00366a3c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_2;
  FUN_00236834(*(int *)(param_1 + 8) + 8,temp_v0);
  return;
}
