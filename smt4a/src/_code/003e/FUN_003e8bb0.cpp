/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8bb0` (_code @ 0x3e8bb0, 0xcd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00192550(void);
int FUN_00192608(void);
int FUN_001aba54(void);

/* stack frame of param_3: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

extern unsigned char uRam0000002d; /* 0x2d */
extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */

#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_001aba54. */


void FUN_003e8bb0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int unaff_r9;
  unsigned int unaff_r11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  temp_v15 = unaff_r9 & 0xffffff00;
  temp_v18 = 0;
  temp_v19 = unaff_r11 & 0xff00;
  temp_v20 = 0;
  temp_v10 = 0;
  temp_v13 = 0;
  temp_v14 = 100;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v8 = 0;
  temp_v17 = 0;
  temp_v9 = 0;
  temp_v16 = 0;
  switch(*(unsigned short *)((int)param_3 + 0x322)) {
  case 1:
    temp_v5 = *param_3;
    temp_v6 = param_3[1];
    if (!((DAT_00573980 & temp_v5) == 0 && (DAT_00573984 & temp_v6) == 0)) {
      if ((short)param_3[0xc9] != 1) {
        if ((short)param_3[0xc9] == 2) {
          temp_v18 = (unsigned int)*(unsigned short *)(param_3[0xfe] + 2);
          temp_v5 = temp_v18;
          FUN_00192608();
          temp_v0 = *(unsigned char *)(temp_v5 + 0x29);
          temp_v1 = *(unsigned char *)(temp_v5 + 0x7c);
          temp_v15 = temp_v15 | *(unsigned char *)(temp_v5 + 0x28) >> 4;
          temp_v8 = (*(unsigned char *)(temp_v5 + 0x28) & 0xf) << 0x18;
          temp_v6 = (unsigned int)*(unsigned short *)(param_3[0xfe] + 4);
          FUN_00192608();
          if (temp_v6 != 0) {
            temp_v2 = *(unsigned char *)(temp_v6 + 0x2a);
            temp_v7 = *(unsigned int *)(temp_v6 + 0x24);
            temp_v14 = ((*(unsigned int *)(temp_v5 + 0x24) & 0xffff03ff) +
                       (*(unsigned int *)(temp_v6 + 0x24) & 0xffff03ff)) * 0x10000;
            temp_v12 = (unsigned int)*(unsigned char *)(temp_v6 + 0x3c) | ((unsigned int)*(unsigned char *)(temp_v5 + 0x3d) << 0x10) |
                       ((unsigned int)*(unsigned char *)(temp_v5 + 0x3e) << 0x18);
            temp_v9 = ((unsigned int)*(unsigned char *)(temp_v6 + 0x2c) << 0x10) |
                       ((unsigned int)*(unsigned char *)(temp_v6 + 0x2b) << 8) | (unsigned int)*(unsigned char *)(temp_v5 + 0x3f);
            temp_v3 = *(unsigned char *)(temp_v6 + 0x2d);
          }
          else {
            temp_v7 = *(unsigned int *)(temp_v5 + 0x24);
            temp_v2 = *(unsigned char *)(temp_v5 + 0x2a);
            temp_v14 = (temp_v7 & 0xffff03ff) << 0x10;
            temp_v12 = ((unsigned int)*(unsigned char *)(temp_v5 + 0x3d) << 0x10) | (unsigned int)*(unsigned char *)(temp_v5 + 0x3c) |
                       ((unsigned int)*(unsigned char *)(temp_v5 + 0x3e) << 0x18);
            temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 0x3f) |
                       ((unsigned int)*(unsigned char *)(temp_v5 + 0x2b) << 8) |
                       ((unsigned int)*(unsigned char *)(temp_v5 + 0x2c) << 0x10);
            temp_v3 = uRam0000002d;
          }
          temp_v11 = (unsigned int)romwright_piece_1_1(temp_v1,temp_v3);
          temp_v10 = (unsigned int)temp_v0 | ((temp_v7 >> 0x14) << 0x10);
          temp_v14 = temp_v14 | 100;
          temp_v13 = (unsigned int)temp_v2 << 0x10;
        }
      }
      else {
        temp_v18 = (unsigned int)*(unsigned short *)param_3[0xfe];
        temp_v5 = temp_v18;
        FUN_00192608();
        temp_v13 = (unsigned int)*(unsigned char *)(temp_v5 + 0x2a) << 0x10;
        temp_v8 = (*(unsigned char *)(temp_v5 + 0x28) & 0xf) << 0x18;
        temp_v14 = ((*(unsigned int *)(temp_v5 + 0x24) & 0xffff03ff) << 0x10) | 100;
        temp_v15 = *(unsigned char *)(temp_v5 + 0x28) >> 4 | temp_v15;
        temp_v11 = (unsigned int)romwright_piece_1_1(*(unsigned char *)(temp_v5 + 0x7c),*(unsigned char *)(temp_v5 + 0x2d));
        temp_v10 = (unsigned int)*(unsigned char *)(temp_v5 + 0x29) | ((*(unsigned int *)(temp_v5 + 0x24) >> 0x14) << 0x10);
        temp_v12 = (unsigned int)*(unsigned char *)(temp_v5 + 0x3c) | ((unsigned int)*(unsigned char *)(temp_v5 + 0x3d) << 0x10) |
                   ((unsigned int)*(unsigned char *)(temp_v5 + 0x3e) << 0x18);
        temp_v9 = ((unsigned int)*(unsigned char *)(temp_v5 + 0x2b) << 8) | ((unsigned int)*(unsigned char *)(temp_v5 + 0x2c) << 0x10) |
                   (unsigned int)*(unsigned char *)(temp_v5 + 0x3f);
        if (*(unsigned char *)(temp_v5 + 0x7d) != 0) {
          temp_v20 = (unsigned int)*(unsigned char *)(temp_v5 + 0x7d);
        }
      }
    }
    else if ((DAT_00573988 & temp_v5) == 0 && (DAT_0057398c & temp_v6) == 0) {
      if (!((DAT_00573990 & temp_v5) == 0 && (DAT_00573994 & temp_v6) == 0)) {
        temp_v5 = param_3[0x101];
        temp_v1 = *(unsigned char *)(temp_v5 + 0x1e);
        temp_v13 = (unsigned int)*(unsigned char *)(temp_v5 + 0x1a) << 0x10;
        temp_v14 = ((unsigned int)*(unsigned short *)(temp_v5 + 0x22) << 0x10) | 100;
        temp_v8 = (*(unsigned char *)(temp_v5 + 0x18) & 7) << 0x18;
        temp_v10 = (unsigned int)romwright_piece_1_2(*(unsigned char *)(param_3[0x101] + 0x19),
                                  *(unsigned short *)(temp_v5 + 0x16) >> 0xc);
        temp_v15 = temp_v15 | ((*(unsigned char *)(temp_v5 + 0x18) & 0x3f) >> 3);
        temp_v9 = ((unsigned int)*(unsigned char *)(temp_v5 + 0x1b) << 8) | ((unsigned int)*(unsigned char *)(temp_v5 + 0x1c) << 0x10);
        temp_v5 = (unsigned int)*(unsigned short *)((int)param_3 + 0x166);
        FUN_00184310();
        temp_v11 = (unsigned int)romwright_piece_1_1(*(unsigned char *)(temp_v5 + 0x13),temp_v1);
      }
      else if (((temp_v5 & DAT_00573998) != 0 || (temp_v6 & DAT_0057399c) != 0) && (param_3[0x100] != 0)
              ) goto LAB_003e9284;
    }
    else {
LAB_003e9284:
      temp_v8 = (unsigned int)*(unsigned short *)((int)param_3 + 0x166);
      FUN_00184310();
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 10);
      temp_v14 = ((unsigned int)*(unsigned short *)(temp_v8 + 0x16) << 0x10) | 100;
      temp_v13 = (unsigned int)*(unsigned char *)(temp_v8 + 0xd) << 0x10;
      temp_v10 = ((unsigned int)*(unsigned char *)(temp_v8 + 0xc) << 0x10) | ((temp_v5 & 0x1f) >> 1);
      temp_v15 = ((temp_v5 & 0x7ff) >> 8) | temp_v15;
      temp_v11 = (unsigned int)romwright_piece_1_1(*(unsigned char *)(temp_v8 + 0x13),*(unsigned char *)(temp_v8 + 0x11));
      temp_v9 = ((unsigned int)*(unsigned char *)(temp_v8 + 0xe) << 8) | ((unsigned int)*(unsigned char *)(temp_v8 + 0xf) << 0x10);
      temp_v8 = ((temp_v5 & 0xff) >> 5) << 0x18;
    }
    break;
  case 2:
  case 3:
    temp_v5 = (unsigned int)(short)param_3[0xc9];
LAB_003e9384:
    temp_v11 = temp_v5 << 0x10;
    temp_v6 = temp_v5;
    FUN_001aba54();
    if (temp_v6 != 0) {
      temp_v8 = *(unsigned int *)(temp_v6 + 0x28);
      temp_v11 = temp_v11 | *(unsigned char *)(temp_v6 + 0x31);
      temp_v15 = temp_v15 | ((temp_v8 & 0xffffff) >> 0x14);
      temp_v13 = (unsigned int)*(unsigned char *)(temp_v6 + 0x23) | ((unsigned int)*(unsigned char *)(temp_v6 + 0x2e) << 0x10);
      temp_v10 = ((temp_v8 & 0x1ff) >> 5) | (((temp_v8 & 0xffff) >> 0xb) << 0x10);
      temp_v12 = ((*(unsigned int *)(temp_v6 + 0x28) & 0x7fffffff) >> 0x18) |
                 ((unsigned int)*(unsigned char *)(temp_v6 + 0x48) << 0x10) | ((unsigned int)*(unsigned char *)(temp_v6 + 0x49) << 0x18);
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v6 + 0x4a) |
                 ((unsigned int)*(unsigned char *)(temp_v6 + 0x2f) << 8) | ((unsigned int)*(unsigned char *)(temp_v6 + 0x30) << 0x10) |
                 ((*(unsigned int *)(temp_v6 + 0x3c) & 0x7f) << 0x18);
      temp_v8 = ((unsigned int)*(unsigned char *)(temp_v6 + 0x46) << 8) | ((unsigned int)*(unsigned char *)(temp_v6 + 0x47) << 0x10) |
              (((temp_v8 & 0xfffff) >> 0x10) << 0x18);
      if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x18000000) != 0) {
        temp_v20 = (*(unsigned int *)(temp_v6 + 0x3c) & 0x1fffffff) >> 0x1b;
      }
      switch(*(unsigned short *)(temp_v6 + 0x86)) {
      case 4:
        temp_v16 = 1;
        break;
      case 5:
        temp_v16 = 0x100;
        break;
      case 6:
        temp_v16 = 0x10000;
        break;
      case 7:
        temp_v16 = 0x1000000;
        break;
      case 8:
        temp_v19 = temp_v19 | 1;
      }
      temp_v19 = temp_v19 | ((unsigned int)*(unsigned short *)(temp_v6 + 0x50) << 0x10);
      temp_v17 = (unsigned int)romwright_piece_1_2(*(unsigned char *)(temp_v6 + 0x39) >> 7,*(unsigned short *)(temp_v6 + 0x52)) |
                 (((*(unsigned int *)(temp_v6 + 0x3c) & 0x40000000) >> 0x1e) << 0x18);
    }
    else if (temp_v5 == 0xffff) {
      temp_v8 = 0x1000000;
      temp_v15 = temp_v15 | 1;
    }
    break;
  case 8:
    temp_v4 = (int)(short)param_3[0xc9];
    temp_v18 = temp_v4 << 0x10;
    FUN_00192550();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x32);
    if (temp_v5 != 0) goto LAB_003e9384;
    if ((*(unsigned char *)(temp_v4 + 0x3a) & 0x80) == 0) {
      temp_v10 = 2;
    }
    else {
      temp_v10 = 3;
    }
    temp_v13 = 3;
    temp_v9 = (*(unsigned char *)(temp_v4 + 0x3a) & 0x7f) << 0x18;
    temp_v8 = 0x1000000;
    temp_v15 = temp_v15 | 1;
    break;
  case 9:
  case 10:
  case 0xb:
    temp_v8 = 0x1000000;
    temp_v15 = temp_v15 | 1;
    temp_v11 = 0xffff0000;
  }
  temp_v5 = temp_v10 & 0xffff;
  if (!(temp_v5 == 1 || temp_v5 == 3)) {
    if (temp_v5 != 5) {
      if (temp_v5 == 6) {
        temp_v8 = temp_v8 | 1;
      }
    }
    else {
      temp_v8 = temp_v8 | 2;
    }
  }
  else {
    temp_v8 = temp_v8 | 1;
  }
  temp_v5 = *param_3;
  temp_v6 = param_3[1];
  if ((DAT_00573980 & temp_v5) != 0 || (DAT_00573984 & temp_v6) != 0) {
    temp_v14 = (temp_v14 & 0xffff0000) | 100;
  }
  else if ((DAT_00573988 & temp_v5) == 0 && (DAT_0057398c & temp_v6) == 0) {
    if ((DAT_00573990 & temp_v5) != 0 || (DAT_00573994 & temp_v6) != 0) {
      temp_v14 = (unsigned int)*(unsigned short *)(param_3[0x101] + 0x20) | (temp_v14 & 0xffff0000);
    }
    else if ((!((temp_v5 & DAT_00573998) == 0 && (temp_v6 & DAT_0057399c) == 0)) &&
            (param_3[0x100] != 0)) {
      temp_v5 = (unsigned int)*(unsigned short *)((int)param_3 + 0x166);
      FUN_00184310();
      temp_v14 = (unsigned int)*(unsigned short *)(temp_v5 + 0x14) | (temp_v14 & 0xffff0000);
    }
  }
  else {
    temp_v5 = (unsigned int)*(unsigned short *)((int)param_3 + 0x166);
    FUN_00184310();
    temp_v14 = (unsigned int)*(unsigned short *)(temp_v5 + 0x14) | (temp_v14 & 0xffff0000);
  }
  *param_1 = temp_v10;
  param_1[1] = temp_v13;
  param_1[2] = temp_v14;
  param_1[3] = temp_v12;
  param_1[4] = temp_v9;
  param_1[5] = temp_v11;
  param_1[6] = temp_v18;
  param_1[7] = temp_v8;
  param_1[8] = temp_v15;
  param_1[9] = temp_v20;
  param_1[10] = temp_v16;
  param_1[0xb] = temp_v19;
  param_1[0xc] = temp_v17;
  return;
}

} /* extern "C" */
