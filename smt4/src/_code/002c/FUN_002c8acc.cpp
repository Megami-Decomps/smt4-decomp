/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8acc` (_code @ 0x2c8acc, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);

extern int DAT_00447e10; /* 0x447e10 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_002c8acc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = 8;
  do {
    temp_v2 = DAT_00447e10 + temp_v1 * 0x2c;
    temp_v3 = *(char *)(temp_v2 + 0x1114) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x1134);
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_00152bec();
      *(unsigned char *)(temp_v2 + 0x1138) = 0;
    }
    temp_v1 = temp_v1 - 1;
  } while (-1 < temp_v1);
  temp_v1 = 2;
  do {
    temp_v2 = DAT_00447e10 + temp_v1 * 0x2c;
    temp_v3 = *(char *)(temp_v2 + 0x12a0) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x12c0);
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_00152bec();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    temp_v1 = temp_v1 - 1;
  } while (-1 < temp_v1);
  return;
}

} /* extern "C" */
