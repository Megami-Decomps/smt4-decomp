/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001523d8` (_code @ 0x1523d8, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bd630(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


int FUN_001523d8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  
  temp_v0 = FUN_002bd630();
  FUN_002c3aa8(temp_v0 + 0x1c4);
  piVar3 = *(int **)(param_1 + 8);
  temp_v0 = 0;
  if (piVar3 != (int *)(param_1 + 8)) {
    do {
      piVar1 = piVar3 + -0x14;
      piVar3 = (int *)*piVar3;
      temp_v0 = temp_v0 + *piVar1;
    } while (piVar3 != (int *)(param_1 + 8));
  }
  temp_v1 = FUN_002bd630();
  FUN_002c3a24(temp_v1 + 0x1c4);
  return temp_v0;
}
