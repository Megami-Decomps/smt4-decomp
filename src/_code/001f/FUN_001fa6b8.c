/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa6b8` (_code @ 0x1fa6b8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a60; /* 0x447a60 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_001fa6b8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    temp_v1 = DAT_00447a60 + temp_v2 * 0x3c;
    pcVar3 = (char *)(temp_v1 + 0x24);
    temp_v0 = '\0';
    if (*pcVar3 != '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x4c);
    }
    if (*pcVar3 != '\0' && temp_v0 != '\0') {
      temp_v3 = *(char *)(temp_v1 + 0x54) != '\0';
      if (temp_v3) {
        pcVar3 = *(char **)(temp_v1 + 0x50);
      }
      if (temp_v3 && pcVar3 != (char *)0x0) {
        FUN_00152bec();
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x10);
  temp_v2 = 0;
  do {
    if (*(int *)(DAT_00447a60 + temp_v2 * 8 + 0x18) != 0) {
      FUN_00152bec();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}
