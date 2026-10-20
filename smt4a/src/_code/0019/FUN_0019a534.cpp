/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a534` (_code @ 0x19a534, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_005b4030; /* 0x5b4030 */


void FUN_0019a534(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *DAT_005b4030;
  for (temp_v2 = temp_v1; temp_v0 = temp_v1, temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 4)) {
  }
  for (; temp_v2 = temp_v1, temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
  }
  for (; temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 4)) {
  }
  for (; temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 4)) {
  }
  return;
}

} /* extern "C" */
