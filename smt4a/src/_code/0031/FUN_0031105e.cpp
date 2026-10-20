/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031105e` (_code @ 0x31105e, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fea74(unsigned int, unsigned int);
int FUN_002feaa8(int);

extern unsigned int *FUN_002fea6a(int);
/* Supplied declaration required: FUN_002fea74. */
/* Supplied declaration required: FUN_002feaa8. */


void FUN_0031105e(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  while (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = (unsigned int *)FUN_002fea6a(param_2);
    FUN_002fea74(param_1,*puVar1);
    FUN_002feaa8(param_2);
  }
  return;
}

} /* extern "C" */
