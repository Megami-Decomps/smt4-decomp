/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7888` (_code @ 0x2e7888, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


short * FUN_002e7888(short *param_1,short *param_2)

{
  short temp_v0;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    temp_v0 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = temp_v0;
    psVar2 = psVar2 + 1;
  } while (temp_v0 != 0);
  return param_1;
}
