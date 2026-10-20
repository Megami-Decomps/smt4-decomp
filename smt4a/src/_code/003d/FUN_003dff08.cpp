/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dff08` (_code @ 0x3dff08, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned int FUN_003dff08(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  if (param_1 != 4) {
    if ((param_1 != 5) || (-800 < *(short *)(temp_v0 + 0x60))) {
      return 0;
    }
  }
  else if (*(short *)(temp_v0 + 0x60) < 800) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
