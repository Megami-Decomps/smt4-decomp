/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d1f4` (_code @ 0x28d1f4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae164. */


int FUN_0028d1f4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  FUN_002ae164();
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      temp_v0 = *(int *)(param_1 + 0x50);
    }
    if (*(char *)(param_1 + 0x54) != '\0') {
      piVar1 = (int *)FUN_002a8764();
      temp_v0 = (int)((unsigned int)*(unsigned char *)(param_1 + 0x54) * *piVar1) / 100;
    }
  }
  return temp_v0;
}
