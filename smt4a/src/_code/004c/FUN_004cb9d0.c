/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cb9d0` (_code @ 0x4cb9d0, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_0050dda4. */


void FUN_004cb9d0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v1 = DAT_00571508;
  if ((*(unsigned int *)(param_1 + 0x50) & 0x200000) != 0) {
    *(unsigned int *)(param_1 + 0x40) = 0x3f800000;
  }
  else {
    temp_v0 = *(char *)(param_1 + 0x3c);
    temp_v3 = 0.1f;
    temp_v4 = *(float *)(DAT_00571508 + 0x588);
    temp_v2 = *(float *)(DAT_00571508 + 0x5c0) * 0.5f * 0.0055555557f * 3.1415927f;
    FUN_0050dda4();
    temp_v4 = temp_v4 / (120.0f / temp_v2);
    temp_v2 = temp_v4;
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        temp_v2 = temp_v3;
        if (temp_v0 == '\x02') {
          temp_v2 = *(float *)(temp_v1 + 0x5b0);
          temp_v2 = (temp_v4 / temp_v2) * (temp_v2 - -20.0f);
        }
      }
      else {
        temp_v2 = *(float *)(temp_v1 + 0x5b0);
        temp_v2 = (temp_v4 / temp_v2) * (temp_v2 - 15.0f);
      }
    }
    *(float *)(param_1 + 0x40) = temp_v2;
  }
  return;
}
