/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029957c` (_code @ 0x29957c, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_002946f4. */


void FUN_0029957c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_002946f4(*(unsigned int *)(DAT_0044e144 + 0x1e80),2,7);
      }
      temp_v0 = DAT_0044e144;
      *(unsigned int *)(DAT_0044e144 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x12dc) = 6;
      return;
    }
    temp_v1 = *(unsigned int *)(DAT_0044e144 + 0x1e80);
    temp_v2 = 1;
  }
  else {
    temp_v1 = *(unsigned int *)(DAT_0044e144 + 0x1e80);
    temp_v2 = 0;
  }
  FUN_002946f4(temp_v1,temp_v2,7);
  temp_v0 = DAT_0044e144;
  *(unsigned int *)(DAT_0044e144 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x12dc) = 6;
  return;
}
