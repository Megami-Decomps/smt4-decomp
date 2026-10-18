/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023534c` (_code @ 0x23534c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581284; /* 0x581284 */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_004ffb58(int);


void FUN_0023534c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned long long temp_v5;
  
  temp_v2 = 0;
  temp_v5 = 0x3f80000000000000;
  do {
    temp_v3 = DAT_00581284 + temp_v2 * 0x48;
    if (*(char *)(temp_v3 + 0x14) != '\0') {
      temp_v4 = *(int *)(*(int *)(temp_v3 + 0x3c) + 4);
      if (temp_v4 != 0) {
        if (DAT_005f161f == '\0') {
          temp_v0 = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
        }
        else {
          temp_v0 = *(unsigned int *)(temp_v4 + 4) | 3;
        }
        *(unsigned int *)(temp_v4 + 4) = temp_v0;
      }
      if (*(char *)(temp_v3 + 0x15) != '\0') {
        if (*(char *)(temp_v3 + 0x16) != '\0') {
          FUN_003fd76c(temp_v4,temp_v3 + 0x18);
          FUN_003fdb18(temp_v4);
        }
        temp_v1 = FUN_004ffb58(temp_v4);
        if (temp_v1 != *(int *)(temp_v3 + 0x34)) {
          FUN_003fe86c(temp_v4,*(int *)(temp_v3 + 0x34),2);
          *(int *)(temp_v4 + 0x1fc) = (int)((unsigned long long)temp_v5 >> 0x20);
        }
        *(unsigned char *)(temp_v3 + 0x15) = 0;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  return;
}
