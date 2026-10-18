/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9b28` (_code @ 0x3e9b28, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002626e0(void);


unsigned int FUN_003e9b28(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002626e0();
  if ((temp_v0 == 0) || (*(int *)(param_1 + 0xf0) < 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
