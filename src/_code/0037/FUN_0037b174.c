/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b174` (_code @ 0x37b174, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003e8540. */
/* Supplied declaration required: FUN_003e85a8. */


int * FUN_0037b174(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  *param_1 = 0;
  if ((*param_2 == 0x56415743) && (param_2[2] + 0xfe000000U < 0x10001)) {
    piVar1 = param_2;
    FUN_003e85a8();
    FUN_003e8540();
    if ((piVar1 != (int *)0x0) && (param_2 != (int *)0x0)) {
      param_1[1] = (int)(param_2 + 2);
      *param_1 = (int)(piVar1 + 2);
      return param_1;
    }
  }
  return param_1;
}
