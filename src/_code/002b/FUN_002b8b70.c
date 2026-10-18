/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8b70` (_code @ 0x2b8b70, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da38; /* 0x43da38 */

/* Supplied declaration required: FUN_0013851c. */
/* Supplied declaration required: FUN_002ae874. */
/* Supplied declaration required: FUN_002aea28. */
/* Supplied declaration required: FUN_002b85bc. */
/* Supplied declaration required: FUN_002b8794. */


void FUN_002b8b70(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar6;
  unsigned char temp_v6;
  unsigned char temp_v7 [12];
  
  temp_v0 = DAT_0043da2c;
  puVar6 = (unsigned char *)(DAT_0043da2c + 0x4c9);
  if (*(unsigned char *)(DAT_0043da2c + 0x4c9) != 0x90) {
    if (DAT_0043da38 < 0) {
      temp_v1 = 0;
      do {
        if (*(char *)(DAT_0043da2c + temp_v1 + 0x4b8) != '\0') {
          DAT_0043da38 = 0x90;
          return;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
    }
    DAT_0043da38 = -1;
    FUN_002b85bc(0x90);
    temp_v1 = FUN_002aea28(*(unsigned char *)(temp_v0 + 0x4c9));
    temp_v2 = FUN_002aea28(0x90);
    if (temp_v1 != 0 && temp_v2 != 0) {
      *(unsigned char *)(temp_v0 + 0x4ca) = *(unsigned char *)(temp_v0 + 0x4c9);
      *puVar6 = 0x90;
      temp_v3 = 0x102;
      temp_v5 = 0;
      temp_v7[0] = 5;
      temp_v7[1] = 6;
      temp_v7[2] = 4;
      temp_v7[3] = 3;
      temp_v7[4] = 2;
      temp_v7[5] = 1;
      temp_v7[6] = 0;
      temp_v7[7] = 0;
      do {
        temp_v6 = *(short *)(temp_v2 + temp_v5 * 2) != 0;
        if (temp_v6) {
          temp_v3 = (unsigned int)temp_v7[temp_v5];
        }
        if (!temp_v6) {
          temp_v3 = 0x12;
        }
        FUN_002b8794(temp_v5 & 0xff,temp_v3);
        temp_v5 = temp_v5 + 1;
        temp_v3 = temp_v4;
      } while ((int)temp_v5 < 6);
      if (*(char *)(temp_v1 + 0xc) != '\0') {
        if (*(char *)(temp_v2 + 0xc) != '\0') {
          *(unsigned char *)(DAT_0043da2c + 0x4c5) = 0;
          FUN_0013851c();
          return;
        }
        *(unsigned char *)(DAT_0043da2c + 0x4c5) = 1;
        FUN_002ae874();
        return;
      }
      *(unsigned char *)(DAT_0043da2c + 0x4c5) = 1;
      FUN_0013851c();
      return;
    }
  }
  return;
}
