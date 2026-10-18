/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267bd0` (_code @ 0x267bd0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f578; /* 0x57f578 */


int FUN_00267bd0(void)

{
  int temp_v0;
  
  if (*(int *)(DAT_0057f578 + 8) != 0) {
    temp_v0 = (int)*(char *)(DAT_0057f578 + 0x10);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
