/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad8cc` (_code @ 0x3ad8cc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char FUN_002c615c(int);


unsigned char FUN_003ad8cc(int param_1)

{
  unsigned char temp_v0;
  
  temp_v0 = FUN_002c615c(param_1 * 100);
  if (temp_v0 != 0) {
    if (temp_v0 >= 101) {
      temp_v0 = 100;
    }
    return temp_v0;
  }
  return 0 < param_1;
}
