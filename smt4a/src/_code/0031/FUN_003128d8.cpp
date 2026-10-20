/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003128d8` (_code @ 0x3128d8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);

extern int DAT_00580ca0; /* 0x580ca0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_002b5cb4. */


void FUN_003128d8(void)

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
    temp_v0 = DAT_00580ca0 + temp_v1 * 0x3c;
    if ((*(char *)(temp_v0 + 0x90) != '\0') && (*(short *)(temp_v0 + 0xa6) == 0xf)) {
      temp_v4 = *(float *)(g_lmapScene + 0x1c);
      FUN_002b5cb4();
      if ((int)temp_v4 < temp_v3) {
        temp_v2 = temp_v1;
        temp_v3 = (int)temp_v4;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x23);
  if (temp_v2 != -1) {
    temp_v2 = DAT_00580ca0 + temp_v2 * 0x3c;
    *(unsigned short *)(temp_v2 + 0xa4) = 1;
    *(unsigned char *)(temp_v2 + 0x91) = 1;
  }
  return;
}

} /* extern "C" */
