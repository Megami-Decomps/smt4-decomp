/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab00` (_code @ 0x30ab00, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_0030ab00(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0044e190;
  if (param_1 == 0) {
    *(unsigned int *)(DAT_0044e190 + 0x544) = 0xffffffff;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0x400);
  *(unsigned int *)(temp_v0 + 0x40c) = 0;
  *(unsigned int *)(temp_v0 + 0x400) = 0xe;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
  return;
}
