/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100b44` (_code @ 0x100b44, 0x1e bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern int *FUN_002c6c40(void);


int FUN_00100b44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002c6c40();
  if (((int)((unsigned int)*(unsigned char *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    return param_1 - 0x20;
  }
  return param_1;
}
