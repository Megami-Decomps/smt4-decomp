/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312c90` (_code @ 0x312c90, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581270; /* 0x581270 */

/* Supplied declaration required: FUN_001f4998. */


void FUN_00312c90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 8;
  do {
    temp_v3 = DAT_00581270 + temp_v2 * 0x2c;
    if (*(char *)(temp_v3 + 0x1114) != '\0') {
      *(char *)(temp_v3 + 0x1114) = '\0';
      if (*(int *)(temp_v3 + 0x1134) != 0) {
        FUN_001f4998();
        *(unsigned int *)(temp_v3 + 0x1134) = 0;
      }
    }
    temp_v2 = temp_v2 - 1;
  } while (-1 < temp_v2);
  temp_v2 = 2;
  do {
    temp_v3 = DAT_00581270 + temp_v2 * 0x2c;
    if (*(char *)(temp_v3 + 0x12a0) != '\0') {
      *(char *)(temp_v3 + 0x12a0) = '\0';
      if (*(int *)(temp_v3 + 0x12c0) != 0) {
        FUN_001f4998();
        *(unsigned int *)(temp_v3 + 0x12c0) = 0;
      }
    }
    temp_v3 = DAT_00581270;
    temp_v2 = temp_v2 - 1;
  } while (-1 < temp_v2);
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(temp_v3 + temp_v0 * 0x44 + 0x14) = 0;
    temp_v0 = temp_v0 + 2;
    *(unsigned char *)(temp_v3 + temp_v1 * 0x44 + 0x14) = 0;
  } while (temp_v2 < 0x40);
  return;
}
