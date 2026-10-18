/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014da48` (_code @ 0x14da48, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a42e8. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c6a20. */


unsigned int FUN_0014da48(int *param_1,unsigned int *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  FUN_002c38a4(piVar1);
  if (0 < param_1[10]) {
    *param_2 = *(unsigned int *)(*param_1 + param_1[9] * 4);
    FUN_002c6a20(param_1[9] + 1,param_1[8]);
    param_1[9] = temp_v0;
    param_1[10] = param_1[10] - 1;
    if (0 < param_1[0xc]) {
      FUN_002a42e8(param_1 + 3,1);
    }
    FUN_002c3820(piVar1);
    return 1;
  }
  FUN_002c3820(piVar1);
  return 0;
}
