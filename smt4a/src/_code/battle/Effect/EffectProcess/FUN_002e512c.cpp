/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e512c` (_code @ 0x2e512c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_effectProcessActive; /* 0x5702f4 */


void FUN_002e512c(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_effectProcessActive;
  temp_v1 = *param_1;
  temp_v2 = param_1[1];
  *(unsigned int *)(g_effectProcessActive + 0x520) = param_1[2];
  *(unsigned int *)(temp_v0 + 0x518) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v2;
  return;
}

} /* extern "C" */
