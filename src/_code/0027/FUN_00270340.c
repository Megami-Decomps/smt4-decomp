/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270340` (_code @ 0x270340, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_00270340(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = 0;
  do {
    temp_v2 = DAT_0044cd88 + temp_v1 * 0x4c;
    if (*(char *)(temp_v2 + 0x9d8) != '\0') {
      FUN_002a7aa0(*(unsigned int *)(temp_v2 + 0xa08));
      *(unsigned int *)(temp_v2 + 0xa08) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  do {
    temp_v2 = DAT_0044cd88 + temp_v1 * 0x4c;
    temp_v3 = *(char *)(temp_v2 + 0x58) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 0x84);
    }
    temp_v4 = temp_v0 != 0;
    if (temp_v3 && temp_v4) {
      temp_v0 = *(unsigned int *)(temp_v2 + 0x88);
    }
    if ((temp_v3 && temp_v4) && temp_v0 != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(temp_v2 + 0x88) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v1 = 0;
  do {
    if (*(int *)(DAT_0044cd88 + temp_v1 * 8 + 0x1c) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(DAT_0044cd88 + temp_v1 * 8 + 0x1c) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  return;
}
