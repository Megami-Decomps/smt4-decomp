/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003572e8` (_code @ 0x3572e8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00200080; /* 0x200080 */


unsigned int * FUN_003572e8(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = (unsigned int)&DAT_00200080;
    puVar1 = param_1 + 3;
    param_1[2] = 0;
    param_1 = param_1 + 4;
    *puVar1 = 0;
  }
  *param_1 = 0x13000;
  param_1[1] = 0xf0080;
  return param_1 + 2;
}
