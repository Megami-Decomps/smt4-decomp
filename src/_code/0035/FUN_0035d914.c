/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d914` (_code @ 0x35d914, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00238c44. */
/* Supplied declaration required: FUN_0035c754. */


void FUN_0035d914(unsigned int *param_1,int *param_2,int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  int *piVar4;
  int *temp_v1;
  
  piVar4 = (int *)(param_1 + 1);
  *param_1 = *(unsigned int *)(param_3 + 4);
  param_1[3] = (unsigned int)param_2;
  param_1[5] = (unsigned int)param_2;
  temp_v1 = param_4;
  FUN_00238c44(param_2,2);
  if (param_2 != (int *)0x0) {
    piVar2 = param_2 + 2;
    if (piVar2 != (int *)0x0) {
      param_2[4] = 0;
      *piVar2 = (int)piVar2;
      param_2[5] = 0;
      param_2[3] = (int)piVar2;
    }
    *param_2 = *piVar4;
    param_2[1] = (int)piVar4;
    *piVar4 = (int)param_2;
    *(int **)(*param_2 + 4) = param_2;
    param_2[4] = param_1[5];
    puVar1 = param_1;
    temp_v1 = param_2;
    FUN_0035c754(param_1,param_1 + 4,&temp_v1);
    if (puVar1 == (unsigned int *)0x0) {
      temp_v0 = 0;
      for (puVar1 = (unsigned int *)param_1[2]; puVar1 != param_1 + 1;
          puVar1 = (unsigned int *)puVar1[1]) {
        puVar1[5] = temp_v0;
        temp_v0 = temp_v0 + 1;
      }
    }
  }
  return;
}
