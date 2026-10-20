/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cb24` (_code @ 0x31cb24, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3bc; /* 0x57f3bc */


void FUN_0031cb24(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f3bc;
  if (DAT_0057f3bc != 0) {
    *(unsigned int *)(DAT_0057f3bc + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 4;
    *(unsigned int *)(temp_v0 + 0x10) = 0x3f000000;
    *(unsigned char *)(temp_v0 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
