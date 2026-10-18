/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325af0` (_code @ 0x325af0, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581270; /* 0x581270 */

/* Supplied declaration required: FUN_00280d2c. */


void FUN_00325af0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = 8;
  do {
    temp_v2 = DAT_00581270 + temp_v1 * 0x2c;
    temp_v3 = *(char *)(temp_v2 + 0x1114) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x1134);
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_00280d2c();
      *(unsigned char *)(temp_v2 + 0x1138) = 0;
    }
    temp_v1 = temp_v1 - 1;
  } while (-1 < temp_v1);
  temp_v1 = 2;
  do {
    temp_v2 = DAT_00581270 + temp_v1 * 0x2c;
    temp_v3 = *(char *)(temp_v2 + 0x12a0) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x12c0);
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_00280d2c();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    temp_v1 = temp_v1 - 1;
  } while (-1 < temp_v1);
  return;
}
