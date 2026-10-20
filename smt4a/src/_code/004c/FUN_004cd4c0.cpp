/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cd4c0` (_code @ 0x4cd4c0, 0x49c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017760c(...);
int FUN_00184310(...);
int FUN_001a9110(...);
int FUN_0023e51c(...);
int FUN_002e3d04(...);
int FUN_002e6490(...);
int FUN_002e6dd4(...);
int FUN_0031f0f4(...);
int FUN_003da99c(...);
int FUN_003daaf8(...);
int FUN_004bcd90(...);
int FUN_004bd3ec(...);
int FUN_004cd340(...);
int SBORROW4(...);

typedef struct fn_004cd4c0_arg0 fn_004cd4c0_arg0;
struct fn_004cd4c0_arg0 {
    unsigned char pad_0x0[0x4];
    short field_0x4; /* +0x4 */
    short field_0x6; /* +0x6 */
    short field_0x8; /* +0x8 */
    short field_0xa; /* +0xa */
    short field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2];
    short field_0x10; /* +0x10 */
    unsigned char pad_0x12[0xe];
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x32];
    undefined2 field_0x60; /* +0x60 */
    ushort field_0x62; /* +0x62 */
    ushort field_0x64; /* +0x64 */
};

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0017760c. */
/* Supplied declaration required: FUN_00184310. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_00203b1c(void);
/* Supplied declaration required: FUN_0023e51c. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_002e6dd4. */
extern int FUN_0031cfd0(unsigned short);
/* Supplied declaration required: FUN_0031f0f4. */
/* Supplied declaration required: FUN_003da99c. */
/* Supplied declaration required: FUN_003daaf8. */
extern int FUN_003e46f4(unsigned int);
extern int FUN_003e4de4(unsigned int);
/* Supplied declaration required: FUN_004bcd90. */
extern int FUN_004bd340(fn_004cd4c0_arg0 *, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004cd340. */


void FUN_004cd4c0(fn_004cd4c0_arg0 *param_1,int param_2)

{
/* irregular: 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  fn_004cd4c0_arg0 *pfVar10;
  int temp_v9;
  unsigned char *pbVar12;
  unsigned short temp_v10;
  unsigned short *puVar14;
  unsigned int temp_v11;
  unsigned int unaff_r6;
  int temp_v12;
  int unaff_r11;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23 [2];
  unsigned char temp_v24 [28];
  
  temp_v1 = param_1->field_0x62;
  temp_v11 = (unsigned int)temp_v1;
  FUN_00184310();
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v19 = (unsigned int)*(unsigned short *)(temp_v11 + 0x18) << 0x10;
  temp_v18 = *(unsigned int *)(temp_v11 + 0x28);
  temp_v19 = romwright_piece_3_1((((unsigned int)(temp_v19) >> 8) & 0xffffffU),*(unsigned char *)(temp_v11 + 0x2c));
  temp_v20 = *(unsigned int *)(temp_v11 + 0x1a);
  temp_v3 = *(unsigned short *)(temp_v11 + 6);
  FUN_003da99c(temp_v3,&temp_v18);
  temp_v21 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v21 + 2)),temp_v3);
  temp_v3 = *(unsigned short *)(temp_v11 + 6);
  FUN_003daaf8(temp_v3,&temp_v18);
  temp_v21 = romwright_piece_2_2(temp_v3,(unsigned short)temp_v21);
  temp_v6 = FUN_003e4de4((unsigned int)temp_v1);
  if (temp_v6 == 0) {
    temp_v2 = 2;
  }
  else {
    temp_v2 = 3;
  }
  temp_v22 = romwright_piece_3_1((((unsigned int)(temp_v22) >> 8) & 0xffffffU),temp_v2);
  temp_v17 = (temp_v22 & 0xffff) | (unaff_r6 & 0xffff0000);
  temp_v16 = temp_v18;
  uStack_6c = temp_v19;
  uStack_68 = temp_v20;
  uStack_64 = temp_v21;
  temp_v18 = FUN_0017760c(param_1);
  temp_v5 = param_1->field_0x10;
  temp_v11 = temp_v17 & 0xff;
  temp_v7 = FUN_00187180(9,4);
  temp_v6 = FUN_00192798();
  temp_v8 = FUN_00192748(temp_v7);
  temp_v12 = 0;
  if (temp_v8 != 0) {
    pbVar12 = (unsigned char *)(temp_v6 + 4);
    do {
      temp_v0 = *pbVar12;
      pbVar12 = pbVar12 + 8;
      if (temp_v0 == temp_v11) {
        temp_v12 = temp_v12 + 1;
      }
      temp_v8 = temp_v8 - 1;
    } while (temp_v8 != 0);
  }
  temp_v23[0] = 0;
  temp_v6 = (temp_v12 + 1) * 8;
  FUN_002e3d04();
  FUN_002e6dd4();
  FUN_0023e51c(temp_v6,temp_v23,temp_v17 & 0xff,(unsigned int)param_1->field_0x64 + param_2);
  temp_v11 = 0;
  do {
    if (temp_v12 + 1U <= temp_v11) break;
    FUN_001a9110(temp_v24 + temp_v11 * 8,temp_v6 + temp_v11 * 8);
    temp_v11 = temp_v11 + 1;
  } while ((int)temp_v11 < 3);
  if (0 < param_2) {
    unaff_r11 = 999;
  }
  temp_v8 = 0;
  if (temp_v8 < param_2) {
    do {
      temp_v11 = FUN_00203b1c();
      if (temp_v11 <= param_1->field_0x64) break;
      temp_v11 = param_1->field_0x64 + 1;
      temp_v10 = temp_v11;
      param_1->field_0x64 = (unsigned short)temp_v11;
      temp_v11 = 0;
      if (temp_v11 < temp_v23[0]) {
        do {
          puVar14 = (unsigned short *)(temp_v6 + temp_v11 * 8);
          temp_v13 = (unsigned int)*puVar14;
          temp_v15 = temp_v10 <= temp_v13;
          temp_v14 = temp_v13 == temp_v10;
          if (!temp_v15 || temp_v14) {
            temp_v13 = (unsigned int)puVar14[1];
            temp_v15 = temp_v13 <= temp_v10;
            temp_v14 = temp_v10 == temp_v13;
          }
          if (!temp_v15 || temp_v14) {
            temp_v12 = 0;
            temp_v11 = (unsigned int)*(unsigned char *)(temp_v6 + temp_v11 * 8 + 7);
            if (temp_v11 != 0) {
              do {
                pfVar10 = param_1;
                FUN_004cd340(param_1,&temp_v16,1);
                switch((unsigned int)pfVar10) {
                case (unsigned int)0x0:
                  param_1->field_0x20 = param_1->field_0x20 + 1;
                  break;
                case (unsigned int)0x1:
                  param_1->field_0x22 = param_1->field_0x22 + 1;
                  break;
                case (unsigned int)0x2:
                  param_1->field_0x24 = param_1->field_0x24 + 1;
                  break;
                case (unsigned int)0x3:
                  param_1->field_0x26 = param_1->field_0x26 + 1;
                  break;
                case (unsigned int)0x4:
                  param_1->field_0x28 = param_1->field_0x28 + 1;
                }
                temp_v12 = temp_v12 + 1;
              } while (temp_v12 < (int)temp_v11);
            }
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < temp_v23[0]);
      }
      if (param_1->field_0x64 < 100) {
        temp_v12 = FUN_003e46f4(7);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)param_1->field_0x4;
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          param_1->field_0x4 = (short)temp_v9 + 1;
          param_1->field_0x20 = param_1->field_0x20 + 1;
        }
        temp_v12 = FUN_003e46f4(8);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)param_1->field_0xa;
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          param_1->field_0xa = (short)temp_v9 + 1;
          param_1->field_0x26 = param_1->field_0x26 + 1;
        }
        temp_v12 = FUN_003e46f4(9);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)param_1->field_0xc;
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          param_1->field_0xc = (short)temp_v9 + 1;
          param_1->field_0x28 = param_1->field_0x28 + 1;
        }
        temp_v12 = FUN_003e46f4(10);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)param_1->field_0x8;
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          param_1->field_0x8 = (short)temp_v9 + 1;
          param_1->field_0x24 = param_1->field_0x24 + 1;
        }
        temp_v12 = FUN_003e46f4(0xb);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)param_1->field_0x6;
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          param_1->field_0x6 = (short)temp_v9 + 1;
          param_1->field_0x22 = param_1->field_0x22 + 1;
        }
      }
      temp_v12 = FUN_0031cfd0(param_1->field_0x62);
      FUN_0031f0f4(param_1->field_0x62,temp_v12 + 0x32);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < param_2);
  }
  FUN_004bcd90(param_1);
  temp_v4 = FUN_0017760c(param_1);
  param_1->field_0x2a = (temp_v4 - (short)temp_v18) + param_1->field_0x2a;
  param_1->field_0x2c = (param_1->field_0x10 - temp_v5) + param_1->field_0x2c;
  temp_v8 = FUN_004bd340(param_1,2);
  param_1->field_0x60 = 0;
  if (temp_v8 != 0) {
    FUN_004bd3ec(param_1,2);
  }
  temp_v8 = FUN_003e46f4(0x83);
  if (temp_v8 != 0) {
    temp_v5 = FUN_0017760c(param_1);
    param_1->field_0x2a = temp_v5;
    param_1->field_0x2c = param_1->field_0x10;
  }
  else {
    temp_v8 = FUN_003e46f4(0x82);
    if (temp_v8 != 0) {
      temp_v8 = FUN_0017760c(param_1);
      param_1->field_0x2a = param_1->field_0x2a + (short)((temp_v8 - param_1->field_0x2a) / 2);
      param_1->field_0x2c =
           param_1->field_0x2c + (short)(((int)param_1->field_0x10 - (int)param_1->field_0x2c) / 2);
    }
  }
  FUN_002e6490(temp_v6);
  return;
}

} /* extern "C" */
