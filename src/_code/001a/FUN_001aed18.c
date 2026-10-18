/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aed18` (_code @ 0x1aed18, 0x8fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_3_stack;

extern unsigned char LAB_001af104; /* 0x1af104 */
extern unsigned char LAB_001af638; /* 0x1af638 */
extern int DAT_0043da90; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028f694. */
/* Supplied declaration required: FUN_0028f870. */
extern int FUN_002987d8(unsigned int, unsigned int);
extern int FUN_00298848(unsigned int, int);
extern unsigned int FUN_0029a924(unsigned int);
extern unsigned int FUN_0029a9d4(unsigned int, unsigned int);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002b6dd8. */
extern int FUN_002bce00(unsigned int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_001aed18(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [140];
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int iStack_30;
  int iStack_2c;
  int temp_v15;
  
  temp_v5 = DAT_0043da90;
  temp_v11 = DAT_0043da90 + 0x1dc;
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v15 = param_3;
  FUN_002bf380(2,0x1d,0,param_1,param_2,0x65);
  FUN_002bf288(2,0x1d,0x439,param_1,param_2,0x6a);
  temp_v7 = 0;
  do {
    temp_v1 = FUN_0029efc0(temp_v11);
    temp_v2 = FUN_0029ee54(temp_v11);
    if (temp_v2 <= temp_v1 + temp_v7) break;
    temp_v1 = FUN_0029efc0(temp_v11);
    temp_v9 = *(unsigned int *)(temp_v5 + (temp_v1 + temp_v7) * 8 + 0xe3c);
    temp_v1 = FUN_0029efc0(temp_v11);
    temp_v8 = *(unsigned int *)(temp_v5 + (temp_v1 + temp_v7) * 8 + 0xe40);
    temp_v13 = temp_v8 >> 0x1f;
    temp_v1 = FUN_002bf4f8(0x1d,temp_v7 + 0x40d);
    FUN_002bf288(2,0x1d,0x43a,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_002bf288(2,0x1d,0x43b,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_002bf288(2,0x1d,0x43c,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6a)
    ;
    FUN_002bf288(2,0x1d,0x43d,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0x6f)
    ;
    temp_v2 = FUN_002bf4f8(0x1d,0x440);
    temp_v12 = FUN_002bce00(temp_v9);
    if (temp_v12 != 0) {
      temp_v14 = 0xff;
      temp_v3 = FUN_0029efc0(temp_v11);
      temp_v3 = FUN_00298848(temp_v9,(int)(short)*(unsigned int *)(temp_v5 + (temp_v3 + temp_v7) * 8 + 0xe40));
      if ((temp_v3 != 0) && (temp_v3 = FUN_002987d8(temp_v8,temp_v9), temp_v3 != 0)) {
        temp_v3 = FUN_0029efc0(temp_v11);
        if (*(int *)(temp_v5 + (temp_v3 + temp_v7) * 8 + 0xe40) < 0) {
          temp_v3 = FUN_002b63ac();
          if ((*(unsigned short *)(temp_v3 + 0x72) & 2) != 0) {
            temp_v14 = 0x5a5a5aff;
          }
        }
        else {
          temp_v3 = FUN_002a8740();
          if (((temp_v3 == 0) || (temp_v0 = *(unsigned short *)(temp_v3 + 0x44), (temp_v0 & 2) != 0)) ||
             ((temp_v0 & 0x400) != 0 || (temp_v0 & 4) != 0)) {
            temp_v14 = 0x5a5a5aff;
          }
        }
      }
      else {
        temp_v14 = 0x5a5a5aff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v14,temp_v12,(int)*(short *)(temp_v2 + 8));
    }
    temp_v2 = FUN_002bf4f8(0x1d,0x444);
    if ((int)temp_v8 < 0) {
      temp_v4 = FUN_0029a9d4(temp_v9,1);
      FUN_002be624(temp_v10,&LAB_001af104,temp_v4);
    }
    else {
      temp_v4 = FUN_0029a924(temp_v9);
      FUN_002be624(temp_v10,&LAB_001af104,temp_v4);
    }
    FUN_002bdf94(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,4,0x6f,
                 temp_v10);
    temp_v2 = FUN_002bf4f8(0x1d,0x43f);
    FUN_002b6c34((int)(short)temp_v9,
                 (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x6f,temp_v13,0
                );
    temp_v2 = FUN_002bf4f8(0x1d,0x43e);
    if ((int)temp_v8 < 0) {
      FUN_002be304(*(unsigned int *)(temp_v5 + temp_v8 * 4 + 0x255c));
      temp_v6 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10);
      temp_v1 = (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8);
      temp_v2 = -1;
      FUN_002b6758(temp_v2,temp_v1 + param_1,temp_v6 + param_2,0x6f,0);
    }
    else {
      temp_v3 = FUN_002a8740(temp_v8);
      if (temp_v3 != 0) {
        FUN_002be304(*(unsigned int *)(temp_v5 + temp_v8 * 4 + 0x255c));
        temp_v6 = (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10);
        temp_v1 = (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8);
        temp_v2 = (int)*(short *)(temp_v3 + 0x46);
        FUN_002b6758(temp_v2,temp_v1 + param_1,temp_v6 + param_2,0x6f,0);
      }
    }
    FUN_002bed3c();
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0xb);
  FUN_0028f870(temp_v11,param_1,param_2,1);
  if ((temp_v15 != 0) && (temp_v7 = FUN_0029ee54(temp_v5 + 0x1dc), temp_v7 >= 1)) {
    temp_v7 = FUN_0029efc0(temp_v11);
    temp_v1 = FUN_0029efa8(temp_v11);
    temp_v9 = *(unsigned int *)(temp_v5 + (temp_v1 + temp_v7) * 8 + 0xe3c);
    temp_v7 = FUN_0029efc0(temp_v11);
    temp_v1 = FUN_0029efa8(temp_v11);
    temp_v8 = *(unsigned int *)(temp_v5 + (temp_v1 + temp_v7) * 8 + 0xe40);
    temp_v13 = temp_v8 >> 0x1f;
    temp_v7 = FUN_0029efa8(temp_v11);
    temp_v7 = FUN_002bf4f8(0x1d,temp_v7 + 0x42e);
    temp_v1 = FUN_0029efa8(temp_v11);
    FUN_0028f694(*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,
                 (int)*(short *)(temp_v5 + temp_v1 * 2 + 0xe0c));
    temp_v1 = FUN_002bf4f8(0x1d,0x449);
    temp_v12 = FUN_002bce00(temp_v9);
    if (temp_v12 != 0) {
      temp_v4 = 0xffffffff;
      temp_v2 = FUN_0029efc0(temp_v11);
      temp_v3 = FUN_0029efa8(temp_v11);
      temp_v2 = FUN_00298848(temp_v9,(int)(short)*(unsigned int *)(temp_v5 + (temp_v3 + temp_v2) * 8 + 0xe40));
      if ((temp_v2 != 0) && (temp_v2 = FUN_002987d8(temp_v8,temp_v9), temp_v2 != 0)) {
        temp_v2 = FUN_0029efc0(temp_v11);
        temp_v3 = FUN_0029efa8(temp_v11);
        if (*(int *)(temp_v5 + (temp_v3 + temp_v2) * 8 + 0xe40) < 0) {
          temp_v2 = FUN_002b63ac();
          if ((*(unsigned short *)(temp_v2 + 0x72) & 2) != 0) {
            temp_v4 = 0x5a5a5aff;
          }
        }
        else {
          temp_v2 = FUN_002a8740();
          if (((temp_v2 == 0) || (temp_v0 = *(unsigned short *)(temp_v2 + 0x44), (temp_v0 & 2) != 0)) ||
             ((temp_v0 & 0x400) != 0 || (temp_v0 & 4) != 0)) {
            temp_v4 = 0x5a5a5aff;
          }
        }
      }
      else {
        temp_v4 = 0x5a5a5aff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,temp_v4,temp_v12,(int)*(short *)(temp_v1 + 8));
    }
    FUN_002bf288(2,0x1d,0x446,*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,0x83)
    ;
    temp_v1 = FUN_002bf4f8(0x1d,0x44d);
    if ((int)temp_v8 < 0) {
      temp_v4 = FUN_0029a9d4(temp_v9,1);
      FUN_002be624(temp_v10,&LAB_001af104,temp_v4);
    }
    else {
      temp_v4 = FUN_0029a924(temp_v9);
      FUN_002be624(temp_v10,&LAB_001af104,temp_v4);
    }
    FUN_002bdf94(0,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10) + param_2,1,4,0x83,
                 temp_v10);
    FUN_002bf288(2,0x1d,0x445,*(short *)(temp_v7 + 8) + param_1,*(short *)(temp_v7 + 10) + param_2,0x83)
    ;
    temp_v1 = FUN_002bf4f8(0x1d,0x448);
    FUN_002b6c34((int)(short)temp_v9,
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v7 + 8) + param_1,
                 (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0x88,temp_v13,0
                );
    temp_v1 = FUN_002bf4f8(0x1d,0x447);
    if ((int)temp_v8 < 0) {
      FUN_002be304(*(unsigned int *)(temp_v5 + temp_v8 * 4 + 0x255c));
      temp_v3 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10);
      temp_v7 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8);
      temp_v2 = -1;
      FUN_002b6758(temp_v2,temp_v7 + param_1,temp_v3 + param_2,0x88,0);
    }
    else {
      temp_v2 = FUN_002a8740(temp_v8);
      if (temp_v2 != 0) {
        FUN_002be304(*(unsigned int *)(temp_v5 + temp_v8 * 4 + 0x255c));
        temp_v3 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v7 + 10);
        temp_v2 = (int)*(short *)(temp_v2 + 0x46);
        temp_v7 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v1 + 8);
        FUN_002b6758(temp_v2,temp_v7 + param_1,temp_v3 + param_2,0x88,0);
      }
    }
    FUN_002bed3c();
  }
  temp_v5 = FUN_0029ee54(temp_v5 + 0x1dc);
  if (temp_v5 < 1) {
    FUN_002bf380(2,0x1a,0x1b,param_1,param_2,0xdd);
    temp_v5 = FUN_002bf4f8(0x1a,0x544);
    FUN_002be624(temp_v10,&LAB_001af638);
    puVar7 = temp_v10;
    FUN_002b6dd8(puVar7,2);
    VectorSignedToFloat(param_1 + (int)*(short *)(temp_v5 + 8) +
                                  ((int)**(short **)(temp_v5 + 0xc) - (int)puVar7) / 2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v5 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v10);
  }
  return;
}
