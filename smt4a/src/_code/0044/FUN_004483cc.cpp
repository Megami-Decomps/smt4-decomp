/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004483cc` (_code @ 0x4483cc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00515cec(int, unsigned int [2]);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00515cec. */


void FUN_004483cc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_2;
  FUN_00515cec(*(int *)(param_1 + 8) + 8,temp_v0);
  return;
}

} /* extern "C" */
