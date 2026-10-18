/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021df18` (_code @ 0x21df18, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a48; /* 0x447a48 */
extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00287aec. */


void FUN_0021df18(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  
  temp_v2 = -1;
  temp_v1 = 0;
  temp_v3 = 99999;
  do {
    temp_v0 = DAT_00447a48 + temp_v1 * 0x28;
    if ((*(char *)(temp_v0 + 0x1c) != '\0') && (*(short *)(temp_v0 + 0x32) == 0xf)) {
      temp_v4 = *(float *)(DAT_00447e88 + 0x1c);
      FUN_00287aec();
      if ((int)temp_v4 < temp_v3) {
        temp_v2 = temp_v1;
        temp_v3 = (int)temp_v4;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (temp_v2 != -1) {
    temp_v2 = DAT_00447a48 + temp_v2 * 0x28;
    *(unsigned short *)(temp_v2 + 0x30) = 1;
    *(unsigned char *)(temp_v2 + 0x1d) = 1;
  }
  return;
}
