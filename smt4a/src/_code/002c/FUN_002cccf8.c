/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cccf8` (_code @ 0x2cccf8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002cccf8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x387c);
  if ((((temp_v0 == 0 || temp_v0 == 0x12) || (temp_v0 == 0x13 || temp_v0 == 0x14)) ||
      (temp_v0 == 0x15 || temp_v0 == 0x16)) ||
     (((temp_v0 == 0x17 || temp_v0 == 0x19 || (temp_v0 == 0x1a || temp_v0 == 0x1b)) ||
      (temp_v0 == 6 || temp_v0 == 0x28)))) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
