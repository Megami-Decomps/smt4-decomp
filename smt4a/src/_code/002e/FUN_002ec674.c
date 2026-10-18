/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec674` (_code @ 0x2ec674, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002fc046(int);


unsigned int FUN_002ec674(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002fc046(param_1 + 0xc);
  if (temp_v0 != 0) {
    return 0;
  }
  return *(unsigned int *)(param_1 + 0xc);
}
