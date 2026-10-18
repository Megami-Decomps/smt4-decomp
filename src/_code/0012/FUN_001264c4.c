/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001264c4` (_code @ 0x1264c4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001264c4(int *param_1)

{
  unsigned int temp_v0;
  
  if (((char)param_1[0x11] == '\x02') &&
     ((((param_1[0xd] & 0x20U) == 0 || (*(short *)(*param_1 + param_1[2] * 0x20) != -1)) &&
      ((param_1[0xd] & 0x80U) == 0)))) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
