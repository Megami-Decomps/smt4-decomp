/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001015b6` (_code @ 0x1015b6, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_002e2a98(void);


unsigned char FUN_001015b6(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002e2a98();
  return *(unsigned char *)(*piVar1 + param_1) & 1;
}
