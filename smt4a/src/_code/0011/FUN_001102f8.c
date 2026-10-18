/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001102f8` (_code @ 0x1102f8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0010473c. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_001102f8(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  aeabi_uidivmod(param_3,*(unsigned int *)(param_2 + 8));
  FUN_0010473c(param_1,param_4,temp_v0 + *(int *)(param_2 + 4));
  return;
}
