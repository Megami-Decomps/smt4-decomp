/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001add9c` (_code @ 0x1add9c, 0x5ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dddd8(...);
int FUN_001eef8c(...);
int FUN_001f0540(...);
int FUN_001f1bc4(...);
int FUN_002036b8(unsigned int, unsigned int);
int FUN_00215d68(...);
int FUN_00290994(...);
int FUN_002916c0(...);
int FUN_002bed98(...);
int FUN_002beda4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int FUN_002cf814(...);
int FUN_002d96d4(...);

typedef int romwright_code(...);
/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned char LAB_001ae390; /* 0x1ae390 */
extern unsigned char LAB_001ae3a8; /* 0x1ae3a8 */
extern int DAT_0043dd68; /* 0x43dd68 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_001dddd8. */
/* Supplied declaration required: FUN_001eef8c. */
/* Supplied declaration required: FUN_001f0540. */
/* Supplied declaration required: FUN_001f1bc4. */
/* Supplied declaration required: FUN_002036b8. */
/* Supplied declaration required: FUN_00215d68. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_002916c0. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002bed98. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002cf814. */
/* Supplied declaration required: FUN_002d96d4. */


unsigned int FUN_001add9c(void)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int *piVar14;
  unsigned char temp_v13;
  unsigned char temp_v14;
  
  temp_v3 = DAT_0043dd68;
  FUN_002c39a4(g_titleScene);
  temp_v5 = g_titleScene;
  temp_v4 = FUN_002c5d80(1,0);
  piVar14 = (int *)(temp_v5 + 0x124c);
  temp_v11 = *piVar14;
  temp_v12 = piVar14[temp_v11 + 2];
  *piVar14 = temp_v11 + 1;
  piVar14[temp_v11 + 3] = temp_v4;
  if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v12 != temp_v4) {
    (**(romwright_code **)(temp_v5 + 0x1268))();
    *(unsigned char *)(temp_v5 + 0x1264) = 0;
  }
  temp_v5 = *(int *)(temp_v3 + 0x400);
  if (temp_v5 == 0x1f || temp_v5 == 0x20) {
    temp_v5 = *(int *)(temp_v3 + 0x408);
  }
  if ((temp_v5 == 0x24 || temp_v5 == 0xc) || temp_v5 == 0xe) {
    temp_v5 = *(int *)(temp_v3 + 0x404);
  }
  if (temp_v5 == 0x21) {
    temp_v5 = *(int *)(temp_v3 + 0x408);
  }
  switch(temp_v5) {
  case 3:
  case 4:
    temp_v7 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v8 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_002036b8(temp_v7,temp_v8);
    break;
  case 5:
  case 8:
  case 9:
  case 10:
    temp_v13 = *(int *)(temp_v3 + 0x400) == 9;
    if ((!temp_v13) && (*(int *)(temp_v3 + 0x400) == 10)) {
      temp_v13 = 2;
    }
    temp_v4 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v11 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_001dddd8(temp_v4,temp_v11,temp_v13);
    temp_v5 = FUN_002beda4(temp_v3 + 0x254);
    temp_v5 = temp_v5 + temp_v4;
    temp_v4 = FUN_002bed98(temp_v3 + 0x254);
    temp_v4 = temp_v4 + temp_v11;
    temp_v0 = *(short *)(temp_v3 + 0x474);
    temp_v1 = *(short *)(temp_v3 + 0x472);
    temp_v2 = *(short *)(temp_v3 + 0x476);
    temp_v11 = temp_v3 + 0x4e8;
    FUN_00290994(temp_v11,temp_v5,temp_v4,0x24,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,(int)temp_v2,(int)temp_v1,
                 (int)temp_v0,0x79,0);
    break;
  case 6:
    temp_v5 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v11 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_001dddd8(temp_v5,temp_v11,0);
    FUN_001f1bc4(temp_v5,temp_v11);
    temp_v4 = FUN_002beda4(temp_v3 + 0x254);
    temp_v5 = temp_v5 + temp_v4;
    temp_v4 = FUN_002bed98(temp_v3 + 0x254);
    temp_v4 = temp_v4 + temp_v11;
    temp_v1 = *(short *)(temp_v3 + 0x472);
    temp_v0 = *(short *)(temp_v3 + 0x474);
    temp_v2 = *(short *)(temp_v3 + 0x476);
    temp_v11 = temp_v3 + 0x54c;
    FUN_00290994(temp_v11,temp_v5,temp_v4,0x24,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,(int)temp_v2,(int)temp_v1,
                 (int)temp_v0,0x79,0);
    break;
  case 7:
    FUN_002916c0(0xff,&LAB_001ae390);
    break;
  case 0xb:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0xb) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_002d96d4(temp_v8,temp_v6,0,temp_v7);
    break;
  case 0xd:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0xd) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_001eef8c(temp_v8,temp_v6,temp_v7);
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0xf) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v5 = *(int *)(temp_v3 + 0x400);
    temp_v13 = temp_v5 == 0x10;
    if (!temp_v13) {
      if (temp_v5 == 0x11) {
        temp_v13 = 2;
      }
      else if (temp_v5 == 0x12) {
        temp_v13 = 3;
      }
    }
    temp_v8 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bed98(temp_v3 + 0x1c8);
    temp_v5 = *(int *)(temp_v3 + 0x400);
    temp_v14 = temp_v5 == 0x21;
    if (temp_v14) {
      temp_v5 = *(int *)(temp_v3 + 0x40c);
    }
    FUN_001f0540(temp_v8,temp_v6,temp_v13,(temp_v14 && temp_v5 == 0x1b) || *(int *)(temp_v3 + 0x404) == 0x1b,
                 temp_v7,(int)*(char *)(temp_v3 + 0x9431));
    break;
  case 0x19:
    FUN_002916c0(0xff,&LAB_001ae3a8);
    break;
  case 0x1a:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0x1a) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_002d96d4(temp_v8,temp_v6,1,temp_v7);
    break;
  case 0x1b:
    temp_v7 = FUN_002beda4(temp_v3 + 0x1c8);
    temp_v8 = FUN_002bed98(temp_v3 + 0x1c8);
    FUN_00215d68(temp_v7,temp_v8);
  }
  temp_v5 = FUN_002a0d0c();
  temp_v9 = temp_v5 + 0x1c;
  if (*(int *)(temp_v3 + 0x400) == 5 || *(int *)(temp_v3 + 0x400) == 6) {
    temp_v14 = *(char *)(temp_v3 + 0x9450) != '\0';
    if (temp_v14) {
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 0x2f);
    }
    if (temp_v14 && temp_v9 != 0) {
      FUN_002bf288(2,0x24,0x1d9,0,0,0xfb);
      FUN_002bf380(2,0x24,0x13,0,0,0xfb);
      temp_v9 = (*(unsigned char *)(temp_v3 + 0x95f4) + 1) & 0xff;
      temp_v10 = temp_v9 % 0x28;
      *(unsigned char *)(temp_v3 + 0x95f4) = (unsigned char)temp_v10;
      FUN_002cf814(0x1e0,temp_v10,temp_v9 * -0x33333333);
    }
  }
  temp_v3 = g_titleScene;
  piVar14 = (int *)(g_titleScene + 0x124c);
  temp_v5 = *piVar14;
  temp_v4 = piVar14[temp_v5 + 2];
  *piVar14 = temp_v5 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v4 != piVar14[temp_v5 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
