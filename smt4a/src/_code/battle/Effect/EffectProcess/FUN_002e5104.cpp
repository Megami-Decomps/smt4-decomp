/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5104` (_code @ 0x2e5104, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005702f4; /* 0x5702f4 */


void FUN_002e5104(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_005702f4;
  temp_v1 = *param_1;
  temp_v2 = param_1[1];
  *(unsigned int *)(DAT_005702f4 + 0x514) = param_1[2];
  *(unsigned int *)(temp_v0 + 0x50c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x510) = temp_v2;
  return;
}

} /* extern "C" */
