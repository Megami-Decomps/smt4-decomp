/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b108` (_code @ 0x30b108, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f76ec(unsigned int, int, int);

/* Supplied declaration required: FUN_002f76ec. */
/* Supplied declaration required: FUN_0030b108. */


void FUN_0030b108(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while (param_2 != 0) {
    FUN_0030b108(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    FUN_002f76ec(param_1,param_2,1);
    param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
