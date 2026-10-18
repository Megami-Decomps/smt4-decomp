/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0b38` (_code @ 0x1c0b38, 0x25c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da38; /* 0x43da38 */

/* Supplied declaration required: FUN_00220888. */
/* Supplied declaration required: FUN_002ae2b4. */
/* Supplied declaration required: FUN_002b8794. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002bf9f0. */


unsigned int FUN_001c0b38(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0043da2c;
  temp_v5 = 0;
  temp_v1 = *(int *)(DAT_0043da2c + 0x10);
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      temp_v1 = 0;
      do {
        if (*(char *)(temp_v0 + 0x4c8) != '\x01') {
          FUN_002bf9f0(temp_v0 + temp_v1 * 0x8c + 0x37c);
        }
        else if (*(char *)(temp_v0 + 0x4c6) != '\0') {
          FUN_002b9220(temp_v0 + temp_v1 * 0x8c + 0x37c,0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 2);
      temp_v1 = 0;
      do {
        if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x494) != '\0') &&
           (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
          FUN_002bf9f0(temp_v0 + temp_v1 * 0x8c + 0x34);
        }
        temp_v2 = DAT_0043da2c;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
        *(unsigned int *)(DAT_0043da2c + 0x10) = 2;
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    }
    else if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v1 = 0;
        do {
          FUN_002bf9f0(temp_v0 + temp_v1 * 0x8c + 0x37c);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 2);
        temp_v1 = 0;
        do {
          if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x494) != '\0') &&
             (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
            FUN_002bf9f0(temp_v0 + temp_v1 * 0x8c + 0x34);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
        if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
          *(unsigned int *)(temp_v0 + 0x4b8) = 0;
          *(unsigned short *)(temp_v0 + 0x4bc) = 0;
          FUN_002ae2b4(temp_v0 + 0x4be);
          temp_v2 = DAT_0043da2c;
          *(unsigned int *)(DAT_0043da2c + 0x10) = 0;
          *(unsigned int *)(temp_v2 + 0xc) = 0;
        }
      }
    }
    else {
      FUN_00220888();
    }
  }
  if ((-1 < (int)DAT_0043da38) && (FUN_002b8b78(DAT_0043da38 & 0xff), (int)DAT_0043da38 < 0)) {
    temp_v4 = 0;
    do {
      temp_v3 = *(unsigned int *)(temp_v4 * 4 + 0x43da50);
      if (-1 < (int)temp_v3) {
        FUN_002b8794(temp_v4 & 0xff,temp_v3 & 0xff,*(unsigned int *)(temp_v4 * 4 + 0x43da68) & 0xffff,1);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 6);
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}
