/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bd0e8` (_code @ 0x3bd0e8, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003bd0e8(unsigned int param_1)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  if ((((param_1 & 2) == 0 && (param_1 & 0x20) == 0) &&
      ((param_1 & 0x40) == 0 && (param_1 & 0x80) == 0)) &&
     ((param_1 & 0x100) == 0 && (param_1 & 0x200) == 0)) {
    temp_v0 = (param_1 & 0x400) == 0;
    temp_v1 = (param_1 & 4) == 0;
    temp_v2 = temp_v0 && temp_v1;
    if (temp_v0 && temp_v1) {
      param_1 = param_1 & 8;
      temp_v2 = param_1 == 0;
    }
    if (temp_v2) {
      return param_1;
    }
  }
  return 1;
}
