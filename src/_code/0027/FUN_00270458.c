/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270458` (_code @ 0x270458, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */

/* Supplied declaration required: FUN_00152af8. */


void FUN_00270458(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    temp_v1 = DAT_0044cd88 + temp_v2 * 0x4c;
    temp_v3 = *(char *)(temp_v1 + 0x9d8) != '\0';
    temp_v0 = '\0';
    if (temp_v3) {
      temp_v0 = *(char *)(temp_v1 + 0xa0c);
    }
    if ((temp_v3 && temp_v0 != '\0') && (*(int *)(temp_v1 + 0xa08) != 0)) {
      FUN_00152af8();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = 0;
  do {
    temp_v1 = DAT_0044cd88 + temp_v2 * 0x4c;
    pcVar3 = (char *)(temp_v1 + 0x58);
    temp_v0 = '\0';
    if (*pcVar3 != '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x84);
    }
    if (*pcVar3 != '\0' && temp_v0 != '\0') {
      temp_v3 = *(char *)(temp_v1 + 0x8c) != '\0';
      if (temp_v3) {
        pcVar3 = *(char **)(temp_v1 + 0x88);
      }
      if (temp_v3 && pcVar3 != (char *)0x0) {
        FUN_00152af8();
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x20);
  temp_v2 = 0;
  do {
    if (*(int *)(DAT_0044cd88 + temp_v2 * 8 + 0x1c) != 0) {
      FUN_00152af8();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  return;
}
