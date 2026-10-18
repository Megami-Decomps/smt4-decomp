/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001adc98` (_code @ 0x1adc98, 0x5ec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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

extern unsigned char LAB_001ae28c; /* 0x1ae28c */
extern unsigned char LAB_001ae2a4; /* 0x1ae2a4 */
extern int DAT_0043dd68; /* 0x43dd68 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001ddcd0. */
/* Supplied declaration required: FUN_001eeea0. */
/* Supplied declaration required: FUN_001f0454. */
/* Supplied declaration required: FUN_001f1ad8. */
/* Supplied declaration required: FUN_00203554. */
/* Supplied declaration required: FUN_00215c6c. */
/* Supplied declaration required: FUN_00290c38. */
/* Supplied declaration required: FUN_00291964. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002cf768. */
/* Supplied declaration required: FUN_002d966c. */


unsigned int FUN_001adc98(void)

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
  FUN_002c3ba8(DAT_0044ea00);
  temp_v5 = DAT_0044ea00;
  temp_v4 = FUN_002c5f7c(1,0);
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
    temp_v7 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v8 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_00203554(temp_v7,temp_v8);
    break;
  case 5:
  case 8:
  case 9:
  case 10:
    temp_v13 = *(int *)(temp_v3 + 0x400) == 9;
    if ((!temp_v13) && (*(int *)(temp_v3 + 0x400) == 10)) {
      temp_v13 = 2;
    }
    temp_v4 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v11 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_001ddcd0(temp_v4,temp_v11,temp_v13);
    temp_v5 = FUN_002bef7c(temp_v3 + 0x254);
    temp_v5 = temp_v5 + temp_v4;
    temp_v4 = FUN_002bef70(temp_v3 + 0x254);
    temp_v4 = temp_v4 + temp_v11;
    temp_v0 = *(short *)(temp_v3 + 0x474);
    temp_v1 = *(short *)(temp_v3 + 0x472);
    temp_v2 = *(short *)(temp_v3 + 0x476);
    temp_v11 = temp_v3 + 0x4e8;
    FUN_00290c38(temp_v11,temp_v5,temp_v4,0x24,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,(int)temp_v2,(int)temp_v1,
                 (int)temp_v0,0x79,0);
    break;
  case 6:
    temp_v5 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v11 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_001ddcd0(temp_v5,temp_v11,0);
    FUN_001f1ad8(temp_v5,temp_v11);
    temp_v4 = FUN_002bef7c(temp_v3 + 0x254);
    temp_v5 = temp_v5 + temp_v4;
    temp_v4 = FUN_002bef70(temp_v3 + 0x254);
    temp_v4 = temp_v4 + temp_v11;
    temp_v1 = *(short *)(temp_v3 + 0x472);
    temp_v0 = *(short *)(temp_v3 + 0x474);
    temp_v2 = *(short *)(temp_v3 + 0x476);
    temp_v11 = temp_v3 + 0x54c;
    FUN_00290c38(temp_v11,temp_v5,temp_v4,0x24,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,(int)temp_v2,(int)temp_v1,
                 (int)temp_v0,0x79,0);
    break;
  case 7:
    FUN_00291964(0xff,&LAB_001ae28c);
    break;
  case 0xb:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0xb) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_002d966c(temp_v8,temp_v6,0,temp_v7);
    break;
  case 0xd:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0xd) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_001eeea0(temp_v8,temp_v6,temp_v7);
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
    temp_v8 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bef70(temp_v3 + 0x1c8);
    temp_v5 = *(int *)(temp_v3 + 0x400);
    temp_v14 = temp_v5 == 0x21;
    if (temp_v14) {
      temp_v5 = *(int *)(temp_v3 + 0x40c);
    }
    FUN_001f0454(temp_v8,temp_v6,temp_v13,(temp_v14 && temp_v5 == 0x1b) || *(int *)(temp_v3 + 0x404) == 0x1b,
                 temp_v7,(int)*(char *)(temp_v3 + 0x9431));
    break;
  case 0x19:
    FUN_00291964(0xff,&LAB_001ae2a4);
    break;
  case 0x1a:
    temp_v7 = 0;
    if ((*(int *)(temp_v3 + 0x400) == 0x1a) && (*(char *)(temp_v3 + 0x252) != '\0')) {
      temp_v7 = 1;
    }
    temp_v8 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v6 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_002d966c(temp_v8,temp_v6,1,temp_v7);
    break;
  case 0x1b:
    temp_v7 = FUN_002bef7c(temp_v3 + 0x1c8);
    temp_v8 = FUN_002bef70(temp_v3 + 0x1c8);
    FUN_00215c6c(temp_v7,temp_v8);
  }
  temp_v5 = FUN_002a0fac();
  temp_v9 = temp_v5 + 0x1c;
  if (*(int *)(temp_v3 + 0x400) == 5 || *(int *)(temp_v3 + 0x400) == 6) {
    temp_v14 = *(char *)(temp_v3 + 0x9450) != '\0';
    if (temp_v14) {
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 0x2f);
    }
    if (temp_v14 && temp_v9 != 0) {
      FUN_002bf460(2,0x24,0x1d9,0,0,0xfb);
      FUN_002bf558(2,0x24,0x13,0,0,0xfb);
      temp_v9 = (*(unsigned char *)(temp_v3 + 0x95f4) + 1) & 0xff;
      temp_v10 = temp_v9 % 0x28;
      *(unsigned char *)(temp_v3 + 0x95f4) = (unsigned char)temp_v10;
      FUN_002cf768(0x1e0,temp_v10,temp_v9 * -0x33333333);
    }
  }
  temp_v3 = DAT_0044ea00;
  piVar14 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v5 = *piVar14;
  temp_v4 = piVar14[temp_v5 + 2];
  *piVar14 = temp_v5 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v4 != piVar14[temp_v5 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return 0;
}
