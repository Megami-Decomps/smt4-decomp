/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338e10` (_code @ 0x338e10, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00240660. */


void FUN_00338e10(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1fc0) + param_2 * 0x288 + 8);
  if (-1 < temp_v0) {
    FUN_00240660(0,0,*(int *)(param_1 + 0x1e98) + temp_v0 * 0x114,8,5);
  }
  return;
}
