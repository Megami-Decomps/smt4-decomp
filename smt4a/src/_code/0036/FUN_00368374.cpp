/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368374` (_code @ 0x368374, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


void FUN_00368374(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x1d0) = param_1;
  *(unsigned int *)(temp_v0 + 0x1d4) = 0;
  return;
}

} /* extern "C" */
