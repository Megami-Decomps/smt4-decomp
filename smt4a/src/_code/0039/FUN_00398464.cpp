/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398464` (_code @ 0x398464, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


void FUN_00398464(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00587f28;
  if (DAT_00587f28 != 0) {
    *(unsigned int *)(DAT_00587f28 + 0x6c) = 6;
    *(unsigned int *)(temp_v0 + 0x70) = 0;
    return;
  }
  return;
}

} /* extern "C" */
