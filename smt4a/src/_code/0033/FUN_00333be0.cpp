/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333be0` (_code @ 0x333be0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f280; /* 0x57f280 */


void FUN_00333be0(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f280;
  *(unsigned int *)(DAT_0057f280 + 0x7ec) = param_1;
  *(unsigned int *)(temp_v0 + 0x7f0) = param_2;
  return;
}

} /* extern "C" */
