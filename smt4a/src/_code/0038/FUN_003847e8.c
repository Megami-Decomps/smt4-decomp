/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003847e8` (_code @ 0x3847e8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


unsigned int FUN_003847e8(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00162e8c();
  if (*(char *)(temp_v1 + 3) != '\x01') {
    if (param_1 == 0x18) {
      return 2;
    }
  }
  else if (*(char *)(temp_v0 + 0xe71) != '\x03') {
    return 1;
  }
  return 0;
}
