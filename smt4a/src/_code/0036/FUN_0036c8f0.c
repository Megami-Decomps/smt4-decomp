/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c8f0` (_code @ 0x36c8f0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0036c8f0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_00237210(*(unsigned int *)(param_1 + temp_v0 * 4));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  FUN_0019a5a0(param_1);
  return;
}
