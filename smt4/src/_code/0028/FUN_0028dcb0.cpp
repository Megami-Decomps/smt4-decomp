/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028dcb0` (_code @ 0x28dcb0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044deb8; /* 0x44deb8 */


void FUN_0028dcb0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0044deb8;
  *(unsigned char *)(DAT_0044deb8 + 0x3b) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = param_1;
  return;
}

} /* extern "C" */
