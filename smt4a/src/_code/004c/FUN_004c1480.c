/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c1480` (_code @ 0x4c1480, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004c1480(unsigned int param_1)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  if (((((param_1 & 2) == 0 && (param_1 & 0x20) == 0) &&
       ((param_1 & 0x40) == 0 && (param_1 & 0x80) == 0)) &&
      ((param_1 & 0x100) == 0 && (param_1 & 0x200) == 0)) &&
     ((param_1 & 0x400) == 0 && (param_1 & 8) == 0)) {
    temp_v0 = (param_1 & 0x800) == 0;
    temp_v1 = (param_1 & 0x1000) == 0;
    temp_v2 = temp_v0 && temp_v1;
    if (temp_v0 && temp_v1) {
      param_1 = param_1 & 0x2000;
      temp_v2 = param_1 == 0;
    }
    if (temp_v2) {
      return param_1;
    }
  }
  return 1;
}
