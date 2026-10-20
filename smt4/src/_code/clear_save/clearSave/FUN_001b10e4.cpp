/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b10e4` (_code @ 0x1b10e4, 0x5b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017f724(...);
int FUN_001c36d8(...);
int FUN_00285c9c(void);
int FUN_00287728(...);
int FUN_0028975c(...);
int FUN_00296f4c(...);
int FUN_0029c3c0(...);
int FUN_0029ee6c(...);
int FUN_002a03d8(int, int);
int FUN_002b8838(...);
int FUN_002c43b4(...);
int FUN_002c57c8(...);
int FUN_0030aa50(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int *DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_0017f724. */
extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_001c36d8. */
extern int FUN_00215a24(void);
extern int FUN_00282b28(void);
extern int FUN_00282b88(void);
/* Supplied declaration required: FUN_00285c9c. */
/* Supplied declaration required: FUN_00287728. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_0028975c. */
extern unsigned int FUN_00290e9c(void);
/* Supplied declaration required: FUN_00296f4c. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002a8764(void);
extern unsigned int FUN_002a8778(void);
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
extern int FUN_002c08f0(void);
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c57c8. */
/* Supplied declaration required: FUN_0030aa50. */


unsigned int FUN_001b10e4(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_002c08f0();
  switch(*(unsigned int *)(temp_v0 + 0xc)) {
  case 0:
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    FUN_0029c3c0(0,0,0xff);
    FUN_0029c3c0(1,0,0xff);
    break;
  case 1:
    *(unsigned int *)(temp_v0 + 0xc) = 2;
    FUN_002a03d8(0,0x14);
    FUN_002a03d8(1,0x14);
    break;
  case 2:
    temp_v5 = FUN_002896bc();
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 8;
      FUN_002b8838(0xa7);
      FUN_00296f4c(*(unsigned int *)(temp_v0 + 0x8c),1);
    }
    break;
  case 3:
    temp_v5 = FUN_0017f724(temp_v0 + 0x1c,0,8,1,0,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002bfde4(0);
      if (temp_v5 == 0) {
        temp_v5 = FUN_002b8cec(4);
        if ((temp_v5 == 0) && (temp_v5 = FUN_002b8cec(3), temp_v5 == 0)) {
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
        FUN_0029c3c0(0,10,0xff);
        FUN_0029c3c0(1,10,0xff);
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
        temp_v4 = FUN_002a8778();
        *(unsigned int *)(temp_v0 + 0x84) = temp_v4;
        temp_v5 = FUN_002a8764();
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
      FUN_00296f4c(temp_v4,temp_v6);
      return 0;
    }
    temp_v2 = *(unsigned int *)(temp_v0 + 0x1c);
    temp_v4 = FUN_002c0cec(0x3c,0);
    temp_v0 = FUN_002c0cc4();
    temp_v3 = FUN_002c0c74(temp_v4);
    if (temp_v2 >= temp_v3) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + temp_v2 * 0x52;
    }
    FUN_0029ee6c(temp_v0,0x323232ff);
    break;
  case 6:
    temp_v5 = FUN_0019e0c0(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = FUN_002973d8();
    if (temp_v5 == 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 0xb;
      FUN_0029c3c0(0,10,0xff);
      FUN_0029c3c0(1,10,0xff);
      return 0;
    }
    if (temp_v5 != 1) {
      return 0;
    }
    temp_v4 = 2;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 7:
    temp_v5 = FUN_0017f724(temp_v0 + 0x20,0,*(int *)(temp_v0 + 0x84) - 1,1,1,1);
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_002bfde4(1);
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 3;
      return 0;
    }
    temp_v5 = FUN_002bfde4(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v4 = 3;
    *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x20) * 4 + 0x24);
    *(unsigned char *)(temp_v0 + 0x16) = 1;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 8:
    temp_v5 = FUN_0019e0c0(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 == 2) {
      *(unsigned int *)(temp_v0 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
      temp_v5 = FUN_002973d8();
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
      FUN_001c36d8(temp_v0 + 0x10);
      FUN_0028975c(0x556,1);
      FUN_0028975c(0x555,1);
      FUN_0030aa50(2);
      temp_v4 = 9;
      *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
      break;
    }
    temp_v2 = FUN_00290e9c();
    temp_v4 = FUN_002c0cec(0x3c,0);
    temp_v0 = FUN_002c0cc4();
    temp_v3 = FUN_002c0c74(temp_v4);
    if (temp_v2 < temp_v3) {
      temp_v0 = temp_v0 + temp_v2 * 0x52;
      FUN_0029ee6c(temp_v0,0x323232ff);
      break;
    }
    temp_v0 = 0;
    FUN_0029ee6c(temp_v0,0x323232ff);
    break;
  case 9:
    temp_v5 = FUN_00282b88();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_00215a24();
    if (temp_v5 == 0) {
      FUN_00285c9c();
      *(unsigned int *)(temp_v0 + 0xc) = 10;
      FUN_002b8838(0xa7);
      temp_v4 = *(unsigned int *)(temp_v0 + 0x8c);
      temp_v6 = 2;
      FUN_00296f4c(temp_v4,temp_v6);
      return 0;
    }
    FUN_0029c3c0(0,0x14,0xff);
    FUN_0029c3c0(1,0x14,0xff);
    temp_v4 = 0xb;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 10:
    temp_v5 = FUN_0019e0c0(*(unsigned int *)(temp_v0 + 0x8c));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = FUN_002973d8();
    if (temp_v5 == 0) {
      FUN_0029c3c0(0,0x14,0xff);
      FUN_0029c3c0(1,0x14,0xff);
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
    temp_v5 = FUN_00282b28();
    if (temp_v5 == 0) {
      if (*(char *)(temp_v0 + 8) != '\0') {
        FUN_00287728(0);
        FUN_00287728(1);
        FUN_002c43b4(*DAT_0043de80,0);
      }
      else {
        FUN_002c57c8(1,0);
      }
      return 0xffffffff;
    }
  }
  return 0;
}

} /* extern "C" */
