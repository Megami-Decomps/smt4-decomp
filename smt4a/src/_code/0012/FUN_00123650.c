/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123650` (_code @ 0x123650, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c4c10; /* 0x5c4c10 */
extern unsigned int DAT_005c4c14; /* 0x5c4c14 */


unsigned int FUN_00123650(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  for (temp_v0 = 0;
      ((temp_v0 < DAT_005c4c14 && (temp_v1 = *(int *)(DAT_005c4c10 + temp_v0 * 4), temp_v1 != 0)) &&
      (temp_v1 != param_1)); temp_v0 = temp_v0 + 1) {
  }
  if (*(int *)(DAT_005c4c10 + temp_v0 * 4) == 0) {
    temp_v0 = DAT_005c4c14;
  }
  return temp_v0;
}
