/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330b7c` (_code @ 0x330b7c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_00330b7c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4));
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    *(unsigned short *)(temp_v0 + temp_v1 * 0x50 + 0x5faa) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x500);
  return;
}

} /* extern "C" */
