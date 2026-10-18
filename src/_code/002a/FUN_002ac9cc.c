/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac9cc` (_code @ 0x2ac9cc, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002ac9cc. */


int * FUN_002ac9cc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0 [2];
  
  piVar1 = temp_v0;
  param_1 = (int *)*param_1;
  if (*param_1 == -0x7fffffff) {
    temp_v0[0] = param_1[7];
    if (temp_v0[0] != 0) {
      temp_v0[0] = (int)(param_1 + 7) + temp_v0[0];
    }
    else {
      temp_v0[0] = 0;
    }
    FUN_002ac9cc(piVar1);
    return piVar1;
  }
  if (*param_1 != -0x7ffffffe) {
    param_1 = (int *)0x0;
  }
  return param_1;
}
