/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024de30` (_code @ 0x24de30, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


unsigned int FUN_0024de30(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
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
