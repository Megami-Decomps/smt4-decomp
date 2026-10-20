/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030acaa` (_code @ 0x30acaa, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9a3c(unsigned int, int, int);

/* Supplied declaration required: FUN_002e9a3c. */
/* Supplied declaration required: FUN_0030acaa. */


void FUN_0030acaa(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while (param_2 != 0) {
    FUN_0030acaa(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    FUN_002e9a3c(param_1,param_2,1);
    param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
