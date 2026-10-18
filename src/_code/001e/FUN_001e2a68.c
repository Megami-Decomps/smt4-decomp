/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2a68` (_code @ 0x1e2a68, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a60; /* 0x447a60 */

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_001e2a68(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = 0;
  do {
    temp_v2 = DAT_00447a60 + temp_v1 * 0x3c;
    temp_v3 = *(char *)(temp_v2 + 0x24) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 0x4c);
    }
    temp_v4 = temp_v0 != 0;
    if (temp_v3 && temp_v4) {
      temp_v0 = *(unsigned int *)(temp_v2 + 0x50);
    }
    if ((temp_v3 && temp_v4) && temp_v0 != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(temp_v2 + 0x50) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  temp_v1 = 0;
  do {
    if (*(int *)(DAT_00447a60 + temp_v1 * 8 + 0x18) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(DAT_00447a60 + temp_v1 * 8 + 0x18) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return;
}
