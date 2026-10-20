/* NON_MATCHING: romwright 0.5.0 decompilation of `QuestCenter_GetActiveEntry` (_code @ 0x289038, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044db88; /* 0x44db88 */


int QuestCenter_GetActiveEntry(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0044db88 + 0x4)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_0044db88 + 0x4)) + 0x1c);
  }
  if ((*(int *)((unsigned char *)&DAT_0044db88 + 0x4)) == 0 || temp_v0 == 0) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
