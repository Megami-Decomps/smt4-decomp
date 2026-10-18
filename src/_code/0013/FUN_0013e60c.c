/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e60c` (_code @ 0x13e60c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004211f4; /* 0x4211f4 */


void FUN_0013e60c(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x10,4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar1 + 2) = 0;
    *puVar1 = (unsigned int)&DAT_004211f4;
    puVar1[3] = param_2;
  }
  return;
}
