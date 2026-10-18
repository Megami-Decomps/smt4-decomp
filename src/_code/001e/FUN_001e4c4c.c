/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4c4c` (_code @ 0x1e4c4c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


unsigned int FUN_001e4c4c(void)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  piVar2 = (int *)(temp_v0 + 0x1ea0);
  temp_v0 = *piVar2;
  temp_v1 = temp_v0 + 1;
  *piVar2 = temp_v1;
  if (temp_v1 >= 0x1e) {
    *piVar2 = temp_v0 - 0x1d;
  }
  return 0;
}
