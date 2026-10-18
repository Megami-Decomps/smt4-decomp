/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d1c4` (_code @ 0x12d1c4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004214f4; /* 0x4214f4 */


void FUN_0012d1c4(unsigned int param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)&DAT_004214f4;
    puVar1[1] = (unsigned int)param_2;
  }
  return;
}
