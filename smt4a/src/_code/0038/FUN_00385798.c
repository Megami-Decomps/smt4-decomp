/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385798` (_code @ 0x385798, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581288; /* 0x581288 */


void FUN_00385798(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x238) = param_1;
  *(unsigned char *)(temp_v0 + 0x23c) = 1;
  return;
}
