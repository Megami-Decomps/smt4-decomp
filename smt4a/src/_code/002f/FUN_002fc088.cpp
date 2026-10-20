/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc088` (_code @ 0x2fc088, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_uidivmod(int, unsigned int);

/* Supplied declaration required: aeabi_uidivmod. */


void FUN_002fc088(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  aeabi_uidivmod(*(int *)(param_1 + 0x14) + param_2,*(unsigned int *)(param_1 + 0x1c));
  *(unsigned int *)(param_1 + 0x14) = temp_v0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_2;
  return;
}

} /* extern "C" */
