/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f248` (_code @ 0x24f248, 0x204 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004474f4; /* 0x4474f4 */
extern unsigned int DAT_00447a78; /* 0x447a78 */
extern int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Supplied declaration required: FUN_002920e4. */
/* Supplied declaration required: FUN_003e108c. */


unsigned int FUN_0024f248(unsigned char param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = DAT_00447a78;
  *(unsigned char *)(DAT_00447a78 + 0x17) = param_1;
  temp_v5 = DAT_00447a78 + param_2 * 0x194;
  temp_v1 = DAT_00447a78;
  if (param_2 != -1) {
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v5 + 0x1d0);
  }
  if ((param_2 != -1 && temp_v1 != 0) && (DAT_004474f4[0x2b] != *(int *)(temp_v5 + 0x1f0))) {
    *(unsigned char *)(temp_v0 + 0x17) = 0;
  }
  if (*(char *)(temp_v0 + 0x17) == '\0') {
    temp_v5 = 0;
    temp_v4 = 0x80;
    do {
      temp_v6 = temp_v0 + temp_v5 * 0x194;
      temp_v7 = *(char *)(temp_v6 + 0x1d0) != '\0';
      temp_v3 = 0;
      if (temp_v7) {
        temp_v3 = *(int *)(temp_v6 + 0x1e4);
      }
      if ((((temp_v7 && temp_v3 != 0x1d) && (temp_v3 != 0x26 && temp_v3 != 0x1e)) &&
          (temp_v3 != 0x1f && temp_v3 != 0x25)) &&
         ((temp_v3 = *(int *)(temp_v6 + 0x1d4), temp_v3 == 8 || temp_v3 == 10 ||
          ((temp_v3 == 0xc || temp_v3 == 0xe) || temp_v3 == 0x10)))) {
        *(unsigned int *)(temp_v6 + 0x1d4) = 6;
      }
      temp_v4 = temp_v4 - 1;
      temp_v5 = temp_v5 + 1;
    } while (temp_v4 != 0);
    return 1;
  }
  if (param_2 == -1) {
    return 0;
  }
  if (*(char *)(temp_v5 + 0x1d0) == '\0') {
    return 1;
  }
  if (*(int *)(temp_v5 + 0x1d4) != 6) {
    return 1;
  }
  if (*(int *)(temp_v5 + 0x1e4) >= 0x22) {
    *(unsigned int *)(temp_v5 + 0x1d4) = 7;
    if (DAT_0049f934 != '\0') {
      *(unsigned short *)(temp_v5 + 0x1fc) = 0;
      return 1;
    }
    FUN_003e108c(temp_v5 + 0x22c);
    FUN_002920e4(0x10001ff);
  }
  else {
    temp_v4 = *(int *)(temp_v5 + 0x1f0);
    if (temp_v4 == -1) {
      *(unsigned int *)(temp_v5 + 0x1d4) = 9;
      FUN_002920e4(0x10001ff);
    }
    else {
      if (temp_v4 == -2) {
        temp_v2 = 0xb;
        *(unsigned int *)(temp_v5 + 0x1d4) = temp_v2;
      }
      else {
        if (temp_v4 == -3) {
          temp_v2 = 0xd;
          *(unsigned int *)(temp_v5 + 0x1d4) = temp_v2;
          FUN_002920e4(0x10001ff);
          *(unsigned short *)(temp_v5 + 0x1fc) = 0;
          return 1;
        }
        if (*(int *)(temp_v5 + 0x35c) == 0) {
          *(unsigned int *)(temp_v5 + 0x1d4) = 0xf;
          if (DAT_0049f934 != '\0') {
            *(unsigned short *)(temp_v5 + 0x1fc) = 0;
            return 1;
          }
          FUN_002920e4(0x10001ff);
          *(unsigned short *)(temp_v5 + 0x1fc) = 0;
          return 1;
        }
        *(unsigned int *)(temp_v5 + 0x1d4) = 7;
        if ((DAT_0049f934 != '\0') && (*DAT_004474f4 == 0)) {
          *(unsigned short *)(temp_v5 + 0x1fc) = 0;
          return 1;
        }
        if (DAT_0049f91c >= 100) {
          FUN_003e108c(temp_v5 + 0x22c);
          FUN_002920e4(0x10001ff);
          *(unsigned short *)(temp_v5 + 0x1fc) = 0;
          return 1;
        }
      }
      FUN_002920e4(0x10001ff);
    }
  }
  *(unsigned short *)(temp_v5 + 0x1fc) = 0;
  return 1;
}
