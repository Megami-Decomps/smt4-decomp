/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1568` (_code @ 0x2c1568, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_asdCamera; /* 0x44ea58 */


void FUN_002c1568(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)((*(int *)((unsigned char *)&g_asdCamera + 0x4)) + temp_v0 * 4) == 0) {
      *(unsigned int *)((*(int *)((unsigned char *)&g_asdCamera + 0x4)) + temp_v0 * 4) = param_1;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}

} /* extern "C" */
