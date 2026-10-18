/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d6a4` (_code @ 0x26d6a4, 0x434 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00293348. */
/* Supplied declaration required: FUN_00293520. */
/* Supplied declaration required: FUN_00293700. */
/* Supplied declaration required: FUN_0029378c. */
/* Supplied declaration required: FUN_002937d0. */
/* Supplied declaration required: FUN_002937e0. */
extern int FUN_0029e02c(void);
/* Supplied declaration required: FUN_0029e1ec. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: FUN_0029e908. */
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002c1658. */


unsigned int FUN_0026d6a4(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v5 = DAT_0043dcf0;
  temp_v1 = 10;
  FUN_002c1658(10,1);
  if (temp_v1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(temp_v5 + 0x17f0) != '\0') {
      return 0;
    }
    temp_v5 = FUN_0029e02c();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = 9;
    FUN_002c1658(9,1);
    if (temp_v5 == 0) {
      return 0;
    }
    FUN_0029e39c(0);
    FUN_0029e328(2);
    FUN_0029e328(1);
    FUN_0029e328(4);
    FUN_0029e328(5);
    FUN_0029e328(0x1f);
    FUN_0029e328(3);
    FUN_0029e1ec();
    FUN_00293348(0xf,1);
    FUN_002a0cc8(1);
    FUN_002bc01c(0x100016d);
    return 1;
  }
  temp_v0 = *(unsigned char *)(temp_v5 + 0x42) ^ 1;
  *(unsigned char *)(temp_v5 + 0x42) = temp_v0;
  if (temp_v0 != 0) {
    FUN_002bd8e8(temp_v5 + 0x4c8,6,0);
  }
  else {
    FUN_002bd8e8(temp_v5 + 0x4c8,4,0);
  }
  FUN_002bc01c(0x100016d);
  if (*(int *)(temp_v5 + 0x1c) != 6) {
    if (*(int *)(temp_v5 + 0x1c) == 8) {
      if (*(char *)(temp_v5 + 0x42) != '\0') {
        temp_v2 = FUN_0029e908();
        temp_v3 = temp_v5 + 0xa6c;
        FUN_0029e8b8(temp_v3,temp_v2);
        temp_v1 = FUN_0029efa8(temp_v5 + 0xa08);
        if (temp_v1 < 1) {
          FUN_0029eb5c(temp_v3,0);
        }
        else {
          temp_v1 = FUN_0029efa8(temp_v5 + 0xa08);
          temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
          FUN_0029eb5c(temp_v3,temp_v1);
        }
      }
      else {
        temp_v3 = temp_v5 + 0xa6c;
        temp_v4 = FUN_0029efa8();
        temp_v7 = SBORROW4(temp_v4,4);
        temp_v1 = temp_v4 - 4;
        temp_v6 = temp_v4 == 4;
        if (temp_v4 >= 4) {
          temp_v4 = *(int *)(temp_v5 + 0x30);
          temp_v7 = SBORROW4(temp_v4,1);
          temp_v1 = temp_v4 - 1;
          temp_v6 = temp_v4 == 1;
        }
        if (temp_v6 || temp_v1 < 0 != temp_v7) {
          *(unsigned int *)(temp_v5 + 0x2c) = 0;
        }
        else {
          *(unsigned int *)(temp_v5 + 0x2c) = 1;
        }
        FUN_002937e0();
        temp_v2 = FUN_0029e908(temp_v3);
        temp_v1 = temp_v5 + 0xa08;
        FUN_0029e8b8(temp_v1,temp_v2);
        temp_v4 = FUN_0029efa8(temp_v3);
        if (temp_v4 >= 4) {
          if (*(int *)(temp_v5 + 0x30) >= 2) {
            temp_v3 = FUN_0029efa8(temp_v3);
            FUN_0029eb5c(temp_v1,*(int *)(temp_v5 + 0x2c) * -3 + temp_v3);
          }
          else {
            FUN_0029eb5c(temp_v1,3);
          }
        }
        else {
          temp_v2 = FUN_0029efa8(temp_v3);
          FUN_0029eb5c(temp_v1,temp_v2);
        }
        FUN_002937d0(temp_v1);
      }
    }
  }
  else if (*(char *)(temp_v5 + 0x42) != '\0') {
    temp_v2 = FUN_0029e908(temp_v5 + 0x940);
    temp_v3 = temp_v5 + 0x9a4;
    FUN_0029e8b8(temp_v3,temp_v2);
    temp_v1 = FUN_0029efa8(temp_v5 + 0x940);
    temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
    FUN_0029eb5c(temp_v3,temp_v1);
  }
  else {
    temp_v3 = temp_v5 + 0x9a4;
    temp_v4 = FUN_0029efa8();
    temp_v7 = SBORROW4(temp_v4,3);
    temp_v1 = temp_v4 - 3;
    temp_v6 = temp_v4 == 3;
    if (temp_v4 >= 3) {
      temp_v4 = *(int *)(temp_v5 + 0x30);
      temp_v7 = SBORROW4(temp_v4,1);
      temp_v1 = temp_v4 - 1;
      temp_v6 = temp_v4 == 1;
    }
    if (temp_v6 || temp_v1 < 0 != temp_v7) {
      *(unsigned int *)(temp_v5 + 0x2c) = 0;
    }
    else {
      *(unsigned int *)(temp_v5 + 0x2c) = 1;
    }
    FUN_002937e0();
    temp_v2 = FUN_0029e908(temp_v3);
    FUN_0029e8b8(temp_v5 + 0x940,temp_v2);
    temp_v1 = FUN_0029efa8(temp_v3);
    if (temp_v1 >= 3) {
      if (*(int *)(temp_v5 + 0x30) >= 2) {
        temp_v1 = FUN_0029efa8(temp_v3);
        FUN_0029eb5c(temp_v5 + 0x940,*(int *)(temp_v5 + 0x2c) * -3 + temp_v1);
      }
      else {
        FUN_0029eb5c(temp_v5 + 0x940,2);
      }
    }
    else {
      temp_v2 = FUN_0029efa8(temp_v3);
      FUN_0029eb5c(temp_v5 + 0x940,temp_v2);
    }
    temp_v1 = temp_v5 + 0x940;
    FUN_002937d0(temp_v1);
  }
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_0029378c(*(unsigned int *)(temp_v3 + 0x6c8),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_00293700(*(unsigned int *)(temp_v3 + 0x6c8),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_0029378c(*(unsigned int *)(temp_v3 + 0x6d8),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_00293700(*(unsigned int *)(temp_v3 + 0x6d8),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(int *)(temp_v5 + 0x1c) != 1) {
    FUN_00293520();
  }
  return 1;
}
