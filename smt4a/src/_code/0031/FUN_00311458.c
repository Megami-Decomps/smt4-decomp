/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311458` (_code @ 0x311458, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559514; /* 0x559514 */

extern unsigned int *FUN_00117a90(int, unsigned int);


void FUN_00311458(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (unsigned int *)FUN_00117a90(param_2,param_3);
    *puVar1 = (unsigned int)&DAT_00559514;
  }
  return;
}
