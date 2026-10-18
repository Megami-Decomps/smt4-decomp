/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00410628` (_code @ 0x410628, 0x700 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char DAT_005297d4; /* 0x5297d4 */
extern unsigned char DAT_00529834; /* 0x529834 */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern int DAT_00573c50; /* 0x573c50 */
extern unsigned int DAT_00573c68; /* 0x573c68 */
extern unsigned int DAT_00573c6c; /* 0x573c6c */
extern unsigned int DAT_0057a4f8; /* 0x57a4f8 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0013c174. */
extern int FUN_0013def0(unsigned int);
extern int FUN_0014aa78(void);
extern int FUN_001633a0(unsigned int);
extern int FUN_00163e84(unsigned int);
extern int FUN_001656a0(unsigned int);
extern int FUN_00187168(void);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0019a5a0. */
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_003ee080. */
/* Supplied declaration required: FUN_003efbac. */
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_004012f0. */
extern int FUN_0040de1c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00411c04. */
/* Supplied declaration required: FUN_00416610. */
/* Supplied declaration required: FUN_0047f98c. */
/* Supplied declaration required: FUN_004f1530. */
/* Supplied declaration required: FUN_004f1c5c. */
/* Supplied declaration required: FUN_004f1edc. */
/* Supplied declaration required: FUN_004f3ee0. */
/* Supplied declaration required: FUN_004f41b0. */
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004feef8. */
/* Supplied declaration required: FUN_004fef70. */
/* Supplied declaration required: FUN_0050d778. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00410628(int param_1)

{
/* irregular: irregular input(s): in_d10, in_d9; 28 native warning(s); review required */
  unsigned int ***pppuVar1;
  unsigned short temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned char *puVar5;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar12;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int ***pppuVar15;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  unsigned long long in_d9;
  unsigned long long in_d10;
  unsigned int ***temp_v12;
  int **temp_v13;
  unsigned int ***temp_v14;
  unsigned int uStack_9c;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int uStack_48;
  
  temp_v16 = FUN_0014aa78();
  switch(*(unsigned int *)(param_1 + 0x10)) {
  case 0:
    temp_v3 = FUN_00163e84(0);
    if (temp_v3 == 0) {
      return;
    }
    temp_v3 = FUN_0013def0(0);
    if (temp_v3 != 0) {
      FUN_003d54f8(0,10);
    }
    break;
  case 1:
    temp_v3 = FUN_00163e84(0);
    if (temp_v3 == 0) {
      return;
    }
    *(unsigned int *)(param_1 + 0x18c) = 0;
    *(unsigned int *)(param_1 + 400) = 0;
    *(unsigned int *)(param_1 + 0x194) = 0;
    *(unsigned int *)(param_1 + 0x198) = 0;
    *(unsigned int *)(param_1 + 0x19c) = 0;
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
    *(unsigned int *)(param_1 + 0x1a8) = 0;
    *(unsigned int *)(param_1 + 0x1ac) = 0;
    *(unsigned int *)(param_1 + 0x1b0) = 0;
    *(unsigned int *)(param_1 + 0x1b4) = 0;
    temp_v6 = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
    FUN_0050d778(param_1 + 0x1bc,1);
    temp_v5 = 0;
    do {
      temp_v0 = temp_v5;
      FUN_003e503c();
      temp_v3 = FUN_00187168();
      if (temp_v3 != 0) {
        temp_v2 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),1);
        temp_v12 = (unsigned int ***)&temp_v14;
        FUN_003f1b3c(temp_v16,temp_v2,5,&temp_v13);
        FUN_004fef70(temp_v6 * 5,0,temp_v6,temp_v13);
        temp_v12 = (unsigned int ***)0x1;
        FUN_004feef8(temp_v6 * 5,0xffffffff,0,temp_v6);
        temp_v3 = param_1 + temp_v6;
        *(unsigned int ****)(param_1 + temp_v6 * 4 + 0x18c) = temp_v14;
        temp_v6 = (unsigned int)(short)((short)temp_v6 + 1);
        *(unsigned char *)(temp_v3 + 0x1bc) = 0;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0xc);
    if ((int)temp_v6 >= 4) {
      puVar3 = (unsigned int *)(temp_v6 << 2);
      FUN_002e3d04();
      FUN_001b4a90();
      temp_v8 = (temp_v6 & 1) != 0;
      puVar8 = puVar3 + -1;
      if (temp_v8) {
        *puVar3 = 0;
        puVar8 = puVar3;
      }
      temp_v5 = (unsigned int)temp_v8;
      for (temp_v3 = (int)temp_v6 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
        puVar8[1] = temp_v5;
        puVar8[2] = temp_v5 + 1;
        puVar8 = puVar8 + 2;
        temp_v5 = temp_v5 + 2;
      }
      FUN_0050d778(&temp_v12,0xffffffff);
      temp_v3 = 0;
      temp_v7 = 0;
      temp_v5 = temp_v6;
      if (0 < (int)temp_v6) {
        do {
          temp_v5 = temp_v5 - 1;
          temp_v1 = FUN_001633a0(temp_v5 & 0xffff);
          (&temp_v12)[temp_v3] = (unsigned int ***)puVar3[temp_v1];
          temp_v3 = temp_v3 + 1;
          if ((int)temp_v5 < 0) break;
          temp_v7 = temp_v7 + 1;
          puVar3[temp_v1] = puVar3[temp_v5];
          puVar3[temp_v5] = 0xffffffff;
        } while (temp_v7 < (int)temp_v6);
      }
      if (0 < (int)temp_v6) {
        pppuVar15 = (unsigned int ***)0x0;
        do {
          pppuVar1 = temp_v12;
          if (temp_v12 != pppuVar15) {
            pppuVar1 = (unsigned int ***)temp_v13;
          }
          if ((temp_v12 != pppuVar15 && pppuVar1 != pppuVar15) && (temp_v14 != pppuVar15)) {
            *(unsigned char *)((int)pppuVar15 + param_1 + 0x1bc) = 1;
          }
          temp_v6 = temp_v6 - 1;
          pppuVar15 = (unsigned int ***)((int)pppuVar15 + 1);
        } while (temp_v6 != 0);
      }
      FUN_002e6490(puVar3);
    }
    *(unsigned int *)(param_1 + 0x1c8) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(unsigned int *)(param_1 + 0x14) = 0;
    return;
  case 2:
    in_d10 = in_d10 & 0xffffffff;
    temp_v3 = 0;
    temp_v7 = *(int *)(DAT_00573c50 + 0x30);
    do {
      if ((*(int *)(temp_v7 + temp_v3 * 0xb0 + 0xa4) != 0) &&
         (*(char *)(param_1 + temp_v3 + 0x1bc) != '\x01')) {
        in_d9 = in_d9 & 0xffffffff;
        temp_v10 = (unsigned long long)*(unsigned int *)(param_1 + temp_v3 * 0x1c + 0x48) << 0x20;
        rt_memcpy_w(&temp_v12,&DAT_005297d4,0x54);
        temp_v8 = 0;
        temp_v1 = 0;
        do {
          pppuVar15 = (&temp_v12)[temp_v1 * 3];
          temp_v9 = (float)(temp_v10 >> 0x20);
          if (((float)pppuVar15 < temp_v9) && (temp_v9 <= (float)(&temp_v13)[temp_v1 * 3])) {
            in_d9 = in_d9 & 0xffffffff;
            temp_v8 = 1;
          }
          temp_v11 = (float)in_d9;
          temp_v4 = temp_v1 + 1;
          if ((float)pppuVar15 < temp_v11) {
            in_d9 = romwright_zext_4_8(pppuVar15);
          }
          if ((float)pppuVar15 < temp_v11) {
            temp_v10 = (unsigned long long)(unsigned int)temp_v9 << 0x20;
          }
          if ((float)in_d10 < (float)(&temp_v13)[temp_v1 * 3]) {
            in_d9 = romwright_zext_4_8((&temp_v12)[temp_v1 * 3]);
            temp_v10 = temp_v10 & 0xffffffff00000000;
          }
          temp_v1 = temp_v4;
        } while (temp_v4 < 7);
        if (!temp_v8) {
          temp_v9 = (float)(temp_v10 >> 0x20);
          if (temp_v9 <= (float)in_d9) {
            in_d9 = in_d9 & 0xffffffff;
          }
          if ((float)in_d10 < temp_v9) {
            in_d9 = in_d9 & 0xffffffff;
          }
        }
        if (*(int *)(param_1 + 0x1c8) < 3) {
          temp_v17 = 0x3f800000;
          temp_v18 = 0x3f59999a;
          uStack_48 = 0x3f19999a;
        }
        FUN_0047f98c(*(unsigned int *)(param_1 + temp_v3 * 4 + 0x18c));
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
        *(unsigned char *)(param_1 + temp_v3 + 0x1bc) = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0xc);
    temp_v7 = FUN_0040de1c(DAT_005712f0,0);
    temp_v3 = temp_v16;
    if (0 < temp_v7) {
      return;
    }
    temp_v7 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = temp_v7;
    if (temp_v7 < 0xe) {
      return;
    }
    puVar12 = (unsigned int *)(temp_v16 + 0x45a8);
    if ((*puVar12 & DAT_00573c68) != 0 || (*(unsigned int *)(temp_v16 + 0x45ac) & DAT_00573c6c) != 0) {
      temp_v7 = FUN_001656a0(9);
      if (temp_v7 != 0) {
        if (*(int *)(param_1 + 0x184) != 0) {
          FUN_0019a5a0();
          *(unsigned int *)(param_1 + 0x184) = 0;
        }
        puVar5 = &DAT_00529834;
        FUN_0013c174(&DAT_00529834,0);
        *(unsigned char **)(param_1 + 0x184) = puVar5;
        FUN_001a6f60();
        temp_v2 = FUN_00192798();
        *(unsigned int *)(param_1 + 0x188) = temp_v2;
        FUN_00411c04(param_1,0);
      }
      temp_v7 = FUN_001656a0(1);
      if (temp_v7 == 0) {
        return;
      }
      temp_v5 = *(unsigned int *)(temp_v3 + 0x45ac);
      temp_v6 = ~DAT_00573c6c;
      *puVar12 = *puVar12 & ~DAT_00573c68;
      *(unsigned int *)(temp_v3 + 0x45ac) = temp_v5 & temp_v6;
      return;
    }
    FUN_00416610(*(unsigned int *)(param_1 + 0x30));
    temp_v13 = (int **)0x6;
    temp_v14 = (unsigned int ***)0x0;
    uStack_9c = 1;
    temp_v15 = 0;
    temp_v12 = (unsigned int ***)0x0;
    temp_v2 = DAT_00573808;
    FUN_004f5238(DAT_00573808,0,0,10);
    *(unsigned int *)(param_1 + 0x2c) = temp_v2;
    temp_v12 = (unsigned int ***)0x0;
    temp_v13 = (int **)0x0;
    temp_v14 = (unsigned int ***)0x0;
    FUN_004fb43c(0,0,0x1000232,1);
    break;
  case 3:
    if (*(int *)(*(int *)(param_1 + 0x2c) + 4) < *(int *)(*(int *)(param_1 + 0x2c) + 8)) {
      return;
    }
    FUN_001f4908(0,0,0xff);
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    FUN_004f3ee0(DAT_00571508,1,0);
    return;
  case 4:
    temp_v3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = temp_v3;
    if (temp_v3 < 7) {
      return;
    }
    FUN_004f1530(DAT_00571508);
    FUN_004012f0(DAT_0057a4f8);
    FUN_004f1c5c(DAT_00571508,0);
    FUN_004f1edc(DAT_00571508);
    temp_v3 = DAT_00571508;
    *(unsigned int *)(DAT_00571508 + 0xc) = *(unsigned int *)(DAT_00571508 + 0x14);
    *(unsigned int *)(temp_v3 + 0x10) = *(unsigned int *)(temp_v3 + 0x18);
    FUN_003ee080(temp_v16);
    if (*(int *)(param_1 + 0x184) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(param_1 + 0x184) = 0;
    }
    FUN_003efbac(temp_v16);
    break;
  case 5:
    temp_v13 = (int **)0x6;
    temp_v14 = (unsigned int ***)0x0;
    uStack_9c = 1;
    temp_v15 = 0;
    temp_v12 = (unsigned int ***)0x1;
    temp_v2 = DAT_00573808;
    FUN_004f5238(DAT_00573808,0,0,10);
    *(unsigned int *)(param_1 + 0x2c) = temp_v2;
    FUN_003d54f8(0);
    FUN_004f41b0(DAT_00571508,0,8);
    break;
  case 6:
    if (*(int *)(*(int *)(param_1 + 0x2c) + 8) <= *(int *)(*(int *)(param_1 + 0x2c) + 4)) {
      *(unsigned int *)(param_1 + 8) = 7;
    }
    return;
  default:
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}
