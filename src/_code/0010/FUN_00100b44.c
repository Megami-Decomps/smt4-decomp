/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100b44` (_code @ 0x100b44, 0x1e bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_002c6a50(void);


int FUN_00100b44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002c6a50();
  if (((int)((unsigned int)*(unsigned char *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    return param_1 - 0x20;
  }
  return param_1;
}
