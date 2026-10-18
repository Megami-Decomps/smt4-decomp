/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6d28` (_code @ 0x2a6d28, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002a6d28(int param_1)

{
  short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(short *)(param_1 + 0xc);
  if (temp_v0 == 0x2201) {
    temp_v1 = 2;
  }
  else if (temp_v0 == 0x2202) {
    temp_v1 = 3;
  }
  else if (temp_v0 == 0x2203) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
