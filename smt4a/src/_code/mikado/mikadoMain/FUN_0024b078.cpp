/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b078` (_code @ 0x24b078, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588014; /* 0x588014 */


void FUN_0024b078(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588014 != 0) {
    temp_v0 = *(int *)(DAT_00588014 + 8);
  }
  if (DAT_00588014 == 0 || temp_v0 == 0) {
    return;
  }
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(temp_v0 + 0x20) | 0x80;
  return;
}

} /* extern "C" */
