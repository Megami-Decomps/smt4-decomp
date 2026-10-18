/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139b6c` (_code @ 0x139b6c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005f1850; /* 0x5f1850 */

extern int FUN_00162e8c(void);


void FUN_00139b6c(void)

{
  char temp_v0;
  short temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  
  temp_v2 = FUN_00162e8c();
  DAT_005f1850 = DAT_005f1850 + 1;
  if (DAT_005f1850 >= 0x709) {
    DAT_005f1850 = 0;
    temp_v3 = 0x40;
    pcVar4 = (char *)(temp_v2 + 0xc0c);
    do {
      temp_v0 = *pcVar4;
      if (temp_v0 != '\0' && temp_v0 != -1) {
        *pcVar4 = temp_v0 - '\x01';
      }
      temp_v3 = temp_v3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (temp_v3 != 0);
    temp_v3 = 0;
    temp_v5 = 0x80;
    do {
      temp_v4 = temp_v2 + temp_v3;
      temp_v3 = temp_v3 + 1;
      pcVar4 = (char *)(temp_v4 + 0xc4c);
      temp_v0 = *pcVar4;
      if (temp_v0 != '\0') {
        *pcVar4 = temp_v0 - '\x01';
      }
      temp_v5 = temp_v5 - 1;
    } while (temp_v5 != 0);
    temp_v3 = 0;
    temp_v5 = 0x10;
    do {
      temp_v4 = temp_v2 + temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      temp_v1 = *(short *)(temp_v4 + 0xd90);
      if (0 < temp_v1) {
        *(short *)(temp_v4 + 0xd90) = temp_v1 - 1;
      }
      temp_v5 = temp_v5 - 1;
    } while (temp_v5 != 0);
  }
  temp_v3 = 0;
  temp_v5 = 0x30;
  do {
    temp_v4 = temp_v3 * 4;
    temp_v3 = temp_v3 + 1;
    piVar8 = (int *)(temp_v2 + temp_v4 + 0xe94);
    temp_v4 = *piVar8;
    if (0 < temp_v4) {
      *piVar8 = temp_v4 - 1;
    }
    temp_v5 = temp_v5 - 1;
  } while (temp_v5 != 0);
  return;
}
