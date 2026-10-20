/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcc18` (_code @ 0x3bcc18, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);

extern int *FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae164. */


int FUN_003bcc18(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  FUN_002ae164();
  if ((param_1 != 0) && ((*(unsigned int *)(param_1 + 0x38) & 0x7f0000) != 0)) {
    piVar1 = (int *)FUN_002a8764();
    temp_v0 = (int)(*piVar1 * (100 - ((*(unsigned int *)(param_1 + 0x38) & 0x7fffff) >> 0x10))) / 100;
  }
  return temp_v0;
}

} /* extern "C" */
