/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c7d4` (_code @ 0x37c7d4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002a3188. */
/* Supplied declaration required: FUN_002b743c. */
/* Supplied declaration required: FUN_002c3424. */


void FUN_0037c7d4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_002c3424(param_1 + 0x6c);
  piVar1 = *(int **)(param_1 + 0x84);
  if (*(int **)(param_1 + 0x84) != (int *)(param_1 + 0x84)) {
    do {
      piVar3 = piVar1 + -0x12;
      piVar2 = (int *)*piVar1;
      FUN_002c3424(piVar1 + -0xf);
      FUN_002b743c(param_1 + 0x80,piVar1);
      if (piVar3 != (int *)0x0) {
        (**(romwright_code **)*piVar3)(piVar3);
        FUN_002a3188(param_1 + 0x8c,piVar3);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x84));
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x38))();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}
