/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee7f2` (_code @ 0x2ee7f2, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


short * FUN_002ee7f2(short *param_1,short *param_2)

{
  short temp_v0;
  short *psVar2;
  
  for (psVar2 = param_1; *psVar2 != 0; psVar2 = psVar2 + 1) {
  }
  do {
    temp_v0 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = temp_v0;
    psVar2 = psVar2 + 1;
  } while (temp_v0 != 0);
  return param_1;
}
