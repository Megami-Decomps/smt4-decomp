/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269da0` (_code @ 0x269da0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd68; /* 0x43dd68 */


void FUN_00269da0(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0043dd68;
  if (DAT_0043dd68 != 0) {
    *(unsigned char *)(DAT_0043dd68 + 0x420) = param_1;
    *(unsigned int *)(temp_v0 + 0x400) = 0;
    *(unsigned int *)(temp_v0 + 0x3fc) = 0;
  }
  return;
}

} /* extern "C" */
