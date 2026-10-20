/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfe60` (_code @ 0x3dfe60, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned int FUN_003dfe60(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001801a4();
  if (*(short *)(temp_v0 + 0x60) < -8) {
    temp_v1 = 5;
  }
  else if (*(short *)(temp_v0 + 0x60) < 9) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 4;
  }
  return temp_v1;
}

} /* extern "C" */
