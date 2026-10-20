/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf570` (_code @ 0x2cf570, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd24; /* 0x43dd24 */


void FUN_002cf570(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0043dd24;
  *(unsigned int *)(DAT_0043dd24 + 0x7ec) = param_1;
  *(unsigned int *)(temp_v0 + 0x7f0) = param_2;
  return;
}

} /* extern "C" */
