/* NON_MATCHING: romwright 0.5.0 decompilation of `QuestCenter_GetActiveEntry` (_code @ 0x3de0bc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588c2c; /* 0x588c2c */


int QuestCenter_GetActiveEntry(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_00588c2c + 0x4)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_00588c2c + 0x4)) + 0x1c);
  }
  if ((*(int *)((unsigned char *)&DAT_00588c2c + 0x4)) == 0 || temp_v0 == 0) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
