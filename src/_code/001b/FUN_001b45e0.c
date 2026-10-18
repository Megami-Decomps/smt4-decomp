/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b45e0` (_code @ 0x1b45e0, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e70; /* 0x447e70 */

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_001b45e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    if (*(int *)(DAT_00447e70 + temp_v3 * 0x48 + 0x3c) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(DAT_00447e70 + temp_v3 * 0x48 + 0x3c) = 0;
    }
    temp_v0 = DAT_00447e70;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  temp_v1 = 0;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(temp_v0 + temp_v1 * 0x48 + 0x14) = 0;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(temp_v0 + temp_v2 * 0x48 + 0x14) = 0;
  } while (temp_v3 < 0x18);
  return;
}
