/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0ef4` (_code @ 0x4a0ef4, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00408184(int, int);
int FUN_00409cd8(int);

extern int *FUN_001ab888(void);
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_00409cd8. */


int FUN_004a0ef4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_001ab888();
  temp_v0 = *piVar1 + param_1;
  *piVar1 = temp_v0;
  if (0 < param_1) {
    FUN_00408184(0,param_1);
    temp_v0 = *piVar1;
  }
  if (temp_v0 < 1) {
    temp_v0 = 0;
  }
  *piVar1 = temp_v0;
  if (temp_v0 >= 1000000000) {
    temp_v0 = 999999999;
  }
  *piVar1 = temp_v0;
  FUN_00409cd8(0x19);
  return *piVar1;
}

} /* extern "C" */
