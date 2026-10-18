/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001002c2` (_code @ 0x1002c2, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001002c2(int param_1)

{
  if ((((((param_1 - 9U >= 5) && (param_1 != 0x20)) && (param_1 != 0xa0)) &&
       ((param_1 != 0x1680 && (param_1 != 0x180e)))) &&
      ((param_1 - 0x2000U >= 11 && ((param_1 != 0x2028 && (param_1 != 0x2029)))))) &&
     ((param_1 != 0x202f && ((param_1 != 0x205f && (param_1 != 0x3000)))))) {
    return 0;
  }
  return 1;
}
