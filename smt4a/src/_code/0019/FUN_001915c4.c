/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001915c4` (_code @ 0x1915c4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001915c4(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char temp_v0;
  
  puVar2 = (unsigned int *)*param_1;
  for (; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)*puVar2) {
    temp_v0 = puVar2 <= param_2;
    if (param_2 <= puVar2) {
      temp_v0 = param_3 + param_2 <= puVar2;
    }
    puVar1 = puVar2;
    if (!temp_v0) {
      *param_1 = *puVar2;
      puVar1 = param_1;
    }
    param_1 = puVar1;
  }
  return;
}
