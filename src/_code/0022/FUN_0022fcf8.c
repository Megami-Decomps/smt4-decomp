/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fcf8` (_code @ 0x22fcf8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002923d0. */
/* Supplied declaration required: FUN_0029f10c. */


void FUN_0022fcf8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x860);
  temp_v0 = param_1 + temp_v1 * 0x74;
  if (0 < *(int *)(temp_v0 + 0x888)) {
    temp_v0 = FUN_002337a0(temp_v0 + 0x880);
    FUN_002923d0(*(unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v0 * 4));
    return;
  }
  FUN_0029f10c(0,0x323232ff);
  return;
}
