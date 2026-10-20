/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de890` (_code @ 0x2de890, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588010; /* 0x588010 */


unsigned char FUN_002de890(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_00588010 + 0x4)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_00588010 + 0x4)) + 8);
  }
  if ((*(int *)((unsigned char *)&DAT_00588010 + 0x4)) != 0 && temp_v0 != 0) {
    return *(int *)(temp_v0 + 0x28) != 7;
  }
  return 1;
}

} /* extern "C" */
