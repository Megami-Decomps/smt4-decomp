/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e33e4` (_code @ 0x1e33e4, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e40; /* 0x447e40 */

/* Supplied declaration required: FUN_00287aec. */


void FUN_001e33e4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = 0;
  temp_v1 = DAT_00447e40 + *(int *)(DAT_00447e40 + 0x2840) * 0x284;
  if (0 < *(int *)(temp_v1 + 0x280)) {
    temp_v6 = 0.0f;
    temp_v7 = 1.0f;
    do {
      puVar1 = (unsigned int *)(temp_v1 + temp_v0 * 0x28);
      if (temp_v0 != 0) {
        *puVar1 = *puVar1 | 1;
        temp_v2 = (float)puVar1[1];
        FUN_00287aec();
        if (temp_v2 < temp_v6) {
          temp_v2 = -temp_v2;
        }
        temp_v3 = (float)puVar1[-9] - (float)puVar1[1];
        temp_v4 = (float)puVar1[-8] - (float)puVar1[2];
        temp_v5 = (float)puVar1[-7] - (float)puVar1[3];
        if (temp_v2 != temp_v6) {
          temp_v2 = temp_v7 / temp_v2;
          temp_v3 = temp_v3 * temp_v2;
          temp_v4 = temp_v4 * temp_v2;
          temp_v5 = temp_v5 * temp_v2;
        }
        puVar1[4] = (unsigned int)temp_v3;
        puVar1[5] = (unsigned int)temp_v4;
        puVar1[6] = (unsigned int)temp_v5;
      }
      else {
        *puVar1 = *puVar1 | 0xfffffffe;
        puVar1[4] = (unsigned int)temp_v6;
        puVar1[5] = (unsigned int)temp_v6;
        puVar1[6] = (unsigned int)temp_v6;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(temp_v1 + 0x280));
  }
  *(int *)(DAT_00447e40 + 0x2840) = *(int *)(DAT_00447e40 + 0x2840) + 1;
  return;
}
