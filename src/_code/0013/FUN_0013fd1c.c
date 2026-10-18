/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013fd1c` (_code @ 0x13fd1c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0014ae40. */
/* Supplied declaration required: FUN_0014b1d8. */


int * FUN_0013fd1c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = &temp_v0;
  temp_v0 = *(int *)(*param_1 + 0x28);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x28 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  FUN_0014b1d8(piVar1);
  if (((~*(unsigned int *)(param_4 + 0x18) & 1) == 0) &&
     (FUN_0014ae40(param_1,param_4), param_1 == (int *)0x0)) {
    piVar1 = (int *)((unsigned int)piVar1 | 8);
  }
  return piVar1;
}
