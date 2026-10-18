/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ccc0` (_code @ 0x25ccc0, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */
extern unsigned int DAT_0057f0d4; /* 0x57f0d4 */

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_001a90e0. */
/* Supplied declaration required: FUN_0031879c. */


unsigned int FUN_0025ccc0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0057f0c8;
  temp_v5 = 0;
  temp_v1 = *(int *)(DAT_0057f0c8 + 0x10);
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      temp_v1 = 0;
      do {
        if (*(char *)(temp_v0 + 0x5e4) != '\x01') {
          FUN_00163aa4(temp_v0 + temp_v1 * 0x8c + 0x37c);
        }
        else if (*(char *)(temp_v0 + 0x5e2) != '\0') {
          FUN_00167458(temp_v0 + temp_v1 * 0x8c + 0x37c,0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
      temp_v1 = 0;
      do {
        if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x5ac) != '\0') &&
           (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
          FUN_00163aa4(temp_v0 + temp_v1 * 0x8c + 0x34);
        }
        temp_v2 = DAT_0057f0c8;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
        *(unsigned int *)(DAT_0057f0c8 + 0x10) = 2;
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    }
    else if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v1 = 0;
        do {
          FUN_00163aa4(temp_v0 + temp_v1 * 0x8c + 0x37c);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v1 = 0;
        do {
          if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x5ac) != '\0') &&
             (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
            FUN_00163aa4(temp_v0 + temp_v1 * 0x8c + 0x34);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
        if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
          *(unsigned int *)(temp_v0 + 0x5d4) = 0;
          *(unsigned short *)(temp_v0 + 0x5d8) = 0;
          FUN_001a90e0(temp_v0 + 0x5da);
          temp_v2 = DAT_0057f0c8;
          *(unsigned int *)(DAT_0057f0c8 + 0x10) = 0;
          *(unsigned int *)(temp_v2 + 0xc) = 0;
        }
      }
    }
    else {
      FUN_0031879c();
    }
  }
  if ((-1 < (int)DAT_0057f0d4) && (FUN_001681cc(DAT_0057f0d4 & 0xffff), (int)DAT_0057f0d4 < 0)) {
    temp_v4 = 0;
    do {
      temp_v3 = *(unsigned int *)(temp_v4 * 4 + 0x57f0d8);
      if (-1 < (int)temp_v3) {
        FUN_00183f58(temp_v4 & 0xff,temp_v3 & 0xff,*(unsigned int *)(temp_v4 * 4 + 0x57f0f0) & 0xffff,1);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 6);
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}
