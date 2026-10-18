/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d910` (_code @ 0x26d910, 0x434 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002935ec. */
/* Supplied declaration required: FUN_002937c4. */
/* Supplied declaration required: FUN_002939a4. */
/* Supplied declaration required: FUN_00293a30. */
/* Supplied declaration required: FUN_00293a74. */
/* Supplied declaration required: FUN_00293a84. */
extern int FUN_0029e2cc(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029eb58. */
/* Supplied declaration required: FUN_0029eba8. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029f248. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern int FUN_002c1830(unsigned int, unsigned int);


unsigned int FUN_0026d910(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v5 = DAT_0043dcf0;
  temp_v1 = FUN_002c1830(10,1);
  if (temp_v1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(temp_v5 + 0x17f0) != '\0') {
      return 0;
    }
    temp_v5 = FUN_0029e2cc();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_002c1830(9,1);
    if (temp_v5 == 0) {
      return 0;
    }
    FUN_0029e63c(0);
    FUN_0029e5c8(2);
    FUN_0029e5c8(1);
    FUN_0029e5c8(4);
    FUN_0029e5c8(5);
    FUN_0029e5c8(0x1f);
    FUN_0029e5c8(3);
    FUN_0029e48c();
    FUN_002935ec(0xf,1);
    FUN_002a0f68(1);
    FUN_002bc200(0x100016d);
    return 1;
  }
  temp_v0 = *(unsigned char *)(temp_v5 + 0x42) ^ 1;
  *(unsigned char *)(temp_v5 + 0x42) = temp_v0;
  if (temp_v0 != 0) {
    FUN_002bdac0(temp_v5 + 0x4c8,6,0);
  }
  else {
    FUN_002bdac0(temp_v5 + 0x4c8,4,0);
  }
  FUN_002bc200(0x100016d);
  if (*(int *)(temp_v5 + 0x1c) != 6) {
    if (*(int *)(temp_v5 + 0x1c) == 8) {
      if (*(char *)(temp_v5 + 0x42) != '\0') {
        temp_v2 = FUN_0029eba8();
        temp_v3 = temp_v5 + 0xa6c;
        FUN_0029eb58(temp_v3,temp_v2);
        temp_v1 = FUN_0029f248(temp_v5 + 0xa08);
        if (temp_v1 < 1) {
          FUN_0029edfc(temp_v3,0);
        }
        else {
          temp_v1 = FUN_0029f248(temp_v5 + 0xa08);
          temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
          FUN_0029edfc(temp_v3,temp_v1);
        }
      }
      else {
        temp_v3 = temp_v5 + 0xa6c;
        temp_v4 = FUN_0029f248();
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
        FUN_00293a84();
        temp_v2 = FUN_0029eba8(temp_v3);
        temp_v1 = temp_v5 + 0xa08;
        FUN_0029eb58(temp_v1,temp_v2);
        temp_v4 = FUN_0029f248(temp_v3);
        if (temp_v4 >= 4) {
          if (*(int *)(temp_v5 + 0x30) >= 2) {
            temp_v3 = FUN_0029f248(temp_v3);
            FUN_0029edfc(temp_v1,*(int *)(temp_v5 + 0x2c) * -3 + temp_v3);
          }
          else {
            FUN_0029edfc(temp_v1,3);
          }
        }
        else {
          temp_v2 = FUN_0029f248(temp_v3);
          FUN_0029edfc(temp_v1,temp_v2);
        }
        FUN_00293a74(temp_v1);
      }
    }
  }
  else if (*(char *)(temp_v5 + 0x42) != '\0') {
    temp_v2 = FUN_0029eba8(temp_v5 + 0x940);
    temp_v3 = temp_v5 + 0x9a4;
    FUN_0029eb58(temp_v3,temp_v2);
    temp_v1 = FUN_0029f248(temp_v5 + 0x940);
    temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
    FUN_0029edfc(temp_v3,temp_v1);
  }
  else {
    temp_v3 = temp_v5 + 0x9a4;
    temp_v4 = FUN_0029f248();
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
    FUN_00293a84();
    temp_v2 = FUN_0029eba8(temp_v3);
    FUN_0029eb58(temp_v5 + 0x940,temp_v2);
    temp_v1 = FUN_0029f248(temp_v3);
    if (temp_v1 >= 3) {
      if (*(int *)(temp_v5 + 0x30) >= 2) {
        temp_v1 = FUN_0029f248(temp_v3);
        FUN_0029edfc(temp_v5 + 0x940,*(int *)(temp_v5 + 0x2c) * -3 + temp_v1);
      }
      else {
        FUN_0029edfc(temp_v5 + 0x940,2);
      }
    }
    else {
      temp_v2 = FUN_0029f248(temp_v3);
      FUN_0029edfc(temp_v5 + 0x940,temp_v2);
    }
    temp_v1 = temp_v5 + 0x940;
    FUN_00293a74(temp_v1);
  }
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_00293a30(*(unsigned int *)(temp_v3 + 0x6c8),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_002939a4(*(unsigned int *)(temp_v3 + 0x6c8),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_00293a30(*(unsigned int *)(temp_v3 + 0x6d8),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_002939a4(*(unsigned int *)(temp_v3 + 0x6d8),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(int *)(temp_v5 + 0x1c) != 1) {
    FUN_002937c4();
  }
  return 1;
}
