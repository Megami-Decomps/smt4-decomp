/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024dc1c` (_code @ 0x24dc1c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


unsigned int FUN_0024dc1c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  if (param_1 != 4) {
    if ((param_1 != 5) || (-800 < *(short *)(temp_v0 + 0x74))) {
      return 0;
    }
  }
  else if (*(short *)(temp_v0 + 0x74) < 800) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
