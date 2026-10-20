/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295c08` (_code @ 0x295c08, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029be5c(int, int);

/* Supplied declaration required: FUN_0029be5c. */
extern int *FUN_002a8764(void);


void FUN_00295c08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_002a8764();
  *piVar1 = *piVar1 + param_1;
  if (0 < param_1) {
    FUN_0029be5c(0,param_1);
  }
  temp_v0 = *piVar1;
  if (temp_v0 < 1) {
    temp_v0 = 0;
  }
  *piVar1 = temp_v0;
  if (temp_v0 >= 1000000000) {
    temp_v0 = 999999999;
  }
  *piVar1 = temp_v0;
  return;
}

} /* extern "C" */
