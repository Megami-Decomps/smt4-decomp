/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0fe0` (_code @ 0x1b0fe0, 0x5b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int *DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_0017f624. */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001c35d8. */
extern int FUN_00215928(void);
extern int FUN_00282d98(void);
extern int FUN_00282df8(void);
/* Supplied declaration required: FUN_00285f0c. */
/* Supplied declaration required: FUN_00287990. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002899c4. */
extern unsigned int FUN_00291140(void);
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002a8a08(void);
extern unsigned int FUN_002a8a1c(void);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b902c(unsigned int);
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0ac8(void);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_0030aa1c. */


unsigned int FUN_001b0fe0(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_002c0ac8();
  switch(*(unsigned int *)(temp_v0 + 0xc)) {
  case 0:
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    FUN_0029c660(0,0,0xff);
    FUN_0029c660(1,0,0xff);
    break;
  case 1:
    *(unsigned int *)(temp_v0 + 0xc) = 2;
    FUN_002a0678(0,0x14);
    FUN_002a0678(1,0x14);
    break;
  case 2:
    temp_v5 = FUN_00289924();
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 8;
      FUN_002b8b78(0xa7);
      FUN_002971e4(*(unsigned int *)(temp_v0 + 0x8c),1);
    }
    break;
  case 3:
    temp_v5 = FUN_0017f624(temp_v0 + 0x1c,0,8,1,0,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002bffbc(0);
      if (temp_v5 == 0) {
        temp_v5 = FUN_002b902c(4);
        if ((temp_v5 == 0) && (temp_v5 = FUN_002b902c(3), temp_v5 == 0)) {
          return 0;
        }
        temp_v2 = *(unsigned int *)(temp_v0 + 0x1c);
        if (temp_v2 >= 7) {
          return 0;
        }
        *(unsigned char *)(temp_v2 + temp_v0 + 0x10) = *(char *)(temp_v2 + temp_v0 + 0x10) != '\x01';
        return 0;
      }
      temp_v5 = *(int *)(temp_v0 + 0x1c);
      if (temp_v5 == 7) {
        *(unsigned int *)(temp_v0 + 0xc) = 4;
        FUN_0029c660(0,10,0xff);
        FUN_0029c660(1,10,0xff);
        return 0;
      }
      if (temp_v5 != 8) {
        if (temp_v5 != 6) {
          return 0;
        }
        if (*(char *)(temp_v0 + 0x16) == '\0') {
          return 0;
        }
        *(unsigned int *)(temp_v0 + 0x20) = 0xffffffff;
        *(unsigned int *)(temp_v0 + 0xc) = 7;
        temp_v4 = FUN_002a8a1c();
        *(unsigned int *)(temp_v0 + 0x84) = temp_v4;
        temp_v5 = FUN_002a8a08();
        temp_v1 = 0;
        if (temp_v1 < *(int *)(temp_v0 + 0x84)) {
          do {
            *(int *)(temp_v0 + temp_v1 * 4 + 0x24) = (int)*(char *)(temp_v5 + temp_v1 + 0x90f0);
            if ((int)*(char *)(temp_v5 + temp_v1 + 0x90f0) == *(int *)(temp_v0 + 0x18)) {
              *(int *)(temp_v0 + 0x20) = temp_v1;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < *(int *)(temp_v0 + 0x84));
        }
        temp_v5 = *(int *)(temp_v0 + 0x20);
        if (temp_v5 < 1) {
          temp_v5 = 0;
        }
        *(int *)(temp_v0 + 0x20) = temp_v5;
        *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(temp_v0 + temp_v5 * 4 + 0x24);
        return 0;
      }
      *(unsigned int *)(temp_v0 + 0xc) = 6;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x8c);
      temp_v6 = 0;
      FUN_002971e4(temp_v4,temp_v6);
      return 0;
    }
    temp_v2 = *(unsigned int *)(temp_v0 + 0x1c);
    temp_v4 = FUN_002c0ec4(0x3c,0);
    temp_v0 = FUN_002c0e9c();
    temp_v3 = FUN_002c0e4c(temp_v4);
    if (temp_v2 >= temp_v3) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + temp_v2 * 0x52;
    }
    FUN_0029f10c(temp_v0,0x323232ff);
    break;
  case 6:
    temp_v5 = FUN_0019dfbc(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = FUN_00297674();
    if (temp_v5 == 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 0xb;
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
      return 0;
    }
    if (temp_v5 != 1) {
      return 0;
    }
    temp_v4 = 2;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 7:
    temp_v5 = FUN_0017f624(temp_v0 + 0x20,0,*(int *)(temp_v0 + 0x84) - 1,1,1,1);
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_002bffbc(1);
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 3;
      return 0;
    }
    temp_v5 = FUN_002bffbc(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v4 = 3;
    *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x20) * 4 + 0x24);
    *(unsigned char *)(temp_v0 + 0x16) = 1;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 8:
    temp_v5 = FUN_0019dfbc(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 == 2) {
      *(unsigned int *)(temp_v0 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
      temp_v5 = FUN_00297674();
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          *(unsigned char *)(temp_v0 + 0x17) = 1;
          *(unsigned char *)(temp_v0 + 0x16) = 1;
        }
      }
      else {
        *(unsigned char *)(temp_v0 + 0x11) = 1;
        *(unsigned char *)(temp_v0 + 0x10) = 1;
        *(unsigned char *)(temp_v0 + 0x12) = 1;
        *(unsigned char *)(temp_v0 + 0x14) = 1;
        *(unsigned char *)(temp_v0 + 0x15) = 1;
        *(unsigned char *)(temp_v0 + 0x16) = 1;
      }
      FUN_001c35d8(temp_v0 + 0x10);
      FUN_002899c4(0x556,1);
      FUN_002899c4(0x555,1);
      FUN_0030aa1c(2);
      temp_v4 = 9;
      *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
      break;
    }
    temp_v2 = FUN_00291140();
    temp_v4 = FUN_002c0ec4(0x3c,0);
    temp_v0 = FUN_002c0e9c();
    temp_v3 = FUN_002c0e4c(temp_v4);
    if (temp_v2 < temp_v3) {
      temp_v0 = temp_v0 + temp_v2 * 0x52;
      FUN_0029f10c(temp_v0,0x323232ff);
      break;
    }
    temp_v0 = 0;
    FUN_0029f10c(temp_v0,0x323232ff);
    break;
  case 9:
    temp_v5 = FUN_00282df8();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_00215928();
    if (temp_v5 == 0) {
      FUN_00285f0c();
      *(unsigned int *)(temp_v0 + 0xc) = 10;
      FUN_002b8b78(0xa7);
      temp_v4 = *(unsigned int *)(temp_v0 + 0x8c);
      temp_v6 = 2;
      FUN_002971e4(temp_v4,temp_v6);
      return 0;
    }
    FUN_0029c660(0,0x14,0xff);
    FUN_0029c660(1,0x14,0xff);
    temp_v4 = 0xb;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 10:
    temp_v5 = FUN_0019dfbc(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = FUN_00297674();
    if (temp_v5 == 0) {
      FUN_0029c660(0,0x14,0xff);
      FUN_0029c660(1,0x14,0xff);
      temp_v4 = 0xb;
      *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
      break;
    }
    if (temp_v5 != 1) {
      return 0;
    }
    temp_v4 = 2;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 0xb:
    temp_v5 = FUN_00282d98();
    if (temp_v5 == 0) {
      if (*(char *)(temp_v0 + 8) != '\0') {
        FUN_00287990(0);
        FUN_00287990(1);
        FUN_002c45b8(*DAT_0043de80,0);
      }
      else {
        FUN_002c59b8(1,0);
      }
      return 0xffffffff;
    }
  }
  return 0;
}
