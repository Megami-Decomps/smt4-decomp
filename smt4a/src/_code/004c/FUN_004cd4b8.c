/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cd4b8` (_code @ 0x4cd4b8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004cd340. */


void FUN_004cd4b8(int param_1,int param_2)

{
/* irregular: 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *pbVar11;
  unsigned short temp_v10;
  unsigned short *puVar13;
  unsigned int temp_v11;
  unsigned int unaff_r6;
  int temp_v12;
  int unaff_r11;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  int uStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int temp_v16 [2];
  unsigned char temp_v17 [28];
  
  if (param_2 < 1) {
    return;
  }
  temp_v1 = *(unsigned short *)(param_1 + 0x62);
  temp_v11 = (unsigned int)temp_v1;
  FUN_00184310();
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_58 = (unsigned int)*(unsigned short *)(temp_v11 + 0x18) << 0x10;
  uStack_5c = *(unsigned int *)(temp_v11 + 0x28);
  iStack_58 = romwright_piece_3_1((((unsigned int)(iStack_58) >> 8) & 0xffffffU),*(unsigned char *)(temp_v11 + 0x2c));
  uStack_54 = *(unsigned int *)(temp_v11 + 0x1a);
  temp_v5 = *(unsigned short *)(temp_v11 + 6);
  FUN_003da99c(temp_v5,&uStack_5c);
  uStack_50 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_50 + 2)),temp_v5);
  temp_v5 = *(unsigned short *)(temp_v11 + 6);
  FUN_003daaf8(temp_v5,&uStack_5c);
  uStack_50 = romwright_piece_2_2(temp_v5,(unsigned short)uStack_50);
  temp_v6 = FUN_003e4de4((unsigned int)temp_v1);
  if (temp_v6 == 0) {
    temp_v3 = 2;
  }
  else {
    temp_v3 = 3;
  }
  uStack_4c = romwright_piece_3_1((((unsigned int)(uStack_4c) >> 8) & 0xffffffU),temp_v3);
  uStack_60 = (uStack_4c & 0xffff) | (unaff_r6 & 0xffff0000);
  uStack_70 = uStack_5c;
  uStack_6c = iStack_58;
  uStack_68 = uStack_54;
  uStack_64 = uStack_50;
  uStack_5c = FUN_0017760c(param_1);
  temp_v2 = *(short *)(param_1 + 0x10);
  temp_v11 = uStack_60 & 0xff;
  temp_v7 = FUN_00187180(9,4);
  temp_v6 = FUN_00192798();
  temp_v8 = FUN_00192748(temp_v7);
  temp_v12 = 0;
  if (temp_v8 != 0) {
    pbVar11 = (unsigned char *)(temp_v6 + 4);
    do {
      temp_v0 = *pbVar11;
      pbVar11 = pbVar11 + 8;
      if (temp_v0 == temp_v11) {
        temp_v12 = temp_v12 + 1;
      }
      temp_v8 = temp_v8 - 1;
    } while (temp_v8 != 0);
  }
  temp_v16[0] = 0;
  temp_v6 = (temp_v12 + 1) * 8;
  FUN_002e3d04();
  FUN_002e6dd4();
  FUN_0023e51c(temp_v6,temp_v16,uStack_60 & 0xff,(unsigned int)*(unsigned short *)(param_1 + 100) + param_2);
  temp_v11 = 0;
  do {
    if (temp_v12 + 1U <= temp_v11) break;
    FUN_001a9110(temp_v17 + temp_v11 * 8,temp_v6 + temp_v11 * 8);
    temp_v11 = temp_v11 + 1;
  } while ((int)temp_v11 < 3);
  if (0 < param_2) {
    unaff_r11 = 999;
  }
  temp_v8 = 0;
  if (temp_v8 < param_2) {
    do {
      temp_v11 = FUN_00203b1c();
      if (temp_v11 <= *(unsigned short *)(param_1 + 100)) break;
      temp_v11 = *(unsigned short *)(param_1 + 100) + 1;
      temp_v10 = temp_v11;
      *(short *)(param_1 + 100) = (short)temp_v11;
      temp_v11 = 0;
      if (temp_v11 < temp_v16[0]) {
        do {
          puVar13 = (unsigned short *)(temp_v6 + temp_v11 * 8);
          temp_v13 = (unsigned int)*puVar13;
          temp_v15 = temp_v10 <= temp_v13;
          temp_v14 = temp_v13 == temp_v10;
          if (!temp_v15 || temp_v14) {
            temp_v13 = (unsigned int)puVar13[1];
            temp_v15 = temp_v13 <= temp_v10;
            temp_v14 = temp_v10 == temp_v13;
          }
          if (!temp_v15 || temp_v14) {
            temp_v12 = 0;
            temp_v11 = (unsigned int)*(unsigned char *)(temp_v6 + temp_v11 * 8 + 7);
            if (temp_v11 != 0) {
              do {
                temp_v9 = param_1;
                FUN_004cd340(param_1,&uStack_70,1);
                switch(temp_v9) {
                case 0:
                  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
                  break;
                case 1:
                  *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
                  break;
                case 2:
                  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
                  break;
                case 3:
                  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
                  break;
                case 4:
                  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
                }
                temp_v12 = temp_v12 + 1;
              } while (temp_v12 < (int)temp_v11);
            }
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < temp_v16[0]);
      }
      if (*(unsigned short *)(param_1 + 100) < 100) {
        temp_v12 = FUN_003e46f4(7);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)*(short *)(param_1 + 4);
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          *(short *)(param_1 + 4) = (short)temp_v9 + 1;
          *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        }
        temp_v12 = FUN_003e46f4(8);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)*(short *)(param_1 + 10);
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          *(short *)(param_1 + 10) = (short)temp_v9 + 1;
          *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
        }
        temp_v12 = FUN_003e46f4(9);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)*(short *)(param_1 + 0xc);
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          *(short *)(param_1 + 0xc) = (short)temp_v9 + 1;
          *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
        }
        temp_v12 = FUN_003e46f4(10);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)*(short *)(param_1 + 8);
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          *(short *)(param_1 + 8) = (short)temp_v9 + 1;
          *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        }
        temp_v12 = FUN_003e46f4(0xb);
        temp_v14 = temp_v12 != 0;
        temp_v12 = 0;
        temp_v9 = 0;
        if (temp_v14) {
          temp_v9 = (int)*(short *)(param_1 + 6);
          temp_v12 = unaff_r11 - temp_v9;
        }
        if ((temp_v14 && unaff_r11 != temp_v9) && temp_v12 < 0 == (temp_v14 && SBORROW4(unaff_r11,temp_v9)))
        {
          *(short *)(param_1 + 6) = (short)temp_v9 + 1;
          *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
        }
      }
      temp_v12 = FUN_0031cfd0(*(unsigned short *)(param_1 + 0x62));
      FUN_0031f0f4(*(unsigned short *)(param_1 + 0x62),temp_v12 + 0x32);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < param_2);
  }
  FUN_004bcd90(param_1);
  temp_v4 = FUN_0017760c(param_1);
  *(short *)(param_1 + 0x2a) = (temp_v4 - (short)uStack_5c) + *(short *)(param_1 + 0x2a);
  *(short *)(param_1 + 0x2c) = (*(short *)(param_1 + 0x10) - temp_v2) + *(short *)(param_1 + 0x2c);
  temp_v8 = FUN_004bd340(param_1,2);
  *(unsigned short *)(param_1 + 0x60) = 0;
  if (temp_v8 != 0) {
    FUN_004bd3ec(param_1,2);
  }
  temp_v8 = FUN_003e46f4(0x83);
  if (temp_v8 != 0) {
    temp_v5 = FUN_0017760c(param_1);
    *(unsigned short *)(param_1 + 0x2a) = temp_v5;
    *(unsigned short *)(param_1 + 0x2c) = *(unsigned short *)(param_1 + 0x10);
  }
  else {
    temp_v8 = FUN_003e46f4(0x82);
    if (temp_v8 != 0) {
      temp_v8 = FUN_0017760c(param_1);
      *(short *)(param_1 + 0x2a) =
           *(short *)(param_1 + 0x2a) + (short)((temp_v8 - *(short *)(param_1 + 0x2a)) / 2);
      *(short *)(param_1 + 0x2c) =
           *(short *)(param_1 + 0x2c) +
           (short)(((int)*(short *)(param_1 + 0x10) - (int)*(short *)(param_1 + 0x2c)) / 2);
    }
  }
  FUN_002e6490(temp_v6);
  return;
}
