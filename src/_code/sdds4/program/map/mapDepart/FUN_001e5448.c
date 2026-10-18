/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e5448` (_code @ 0x1e5448, 0x910 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_001e589c; /* 0x1e589c */
extern unsigned char LAB_001e58b0; /* 0x1e58b0 */
extern unsigned char LAB_001e58c4; /* 0x1e58c4 */
extern unsigned char LAB_001e5c48; /* 0x1e5c48 */
extern unsigned char LAB_001e5c60; /* 0x1e5c60 */
extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_004475b8; /* 0x4475b8 */
extern int DAT_004475bc; /* 0x4475bc */
extern int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f9c0; /* 0x49f9c0 */
extern int DAT_0049f9c4; /* 0x49f9c4 */
extern unsigned int DAT_0049fd38; /* 0x49fd38 */
extern unsigned char DAT_0049fd78; /* 0x49fd78 */
extern int DAT_0049fd88; /* 0x49fd88 */
extern short DAT_0049fddc; /* 0x49fddc */
extern short DAT_0049fdde; /* 0x49fdde */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001f8d04. */
/* Supplied declaration required: FUN_0021ddac. */
/* Supplied declaration required: FUN_0025b8a8. */
extern int FUN_0025b920(unsigned int);
/* Supplied declaration required: FUN_002735c8. */
/* Supplied declaration required: FUN_002764a8. */
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_00276c24. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a58. */
/* Supplied declaration required: FUN_0028df0c. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002920e4. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b8b70. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c1de4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c5ab8. */
extern unsigned int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_002dfd94. */
/* Supplied declaration required: FUN_002f3604. */


unsigned int FUN_001e5448(void)

{
/* irregular: 1 goto(s); 23 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar7;
  int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  short temp_v7;
  unsigned int *puVar12;
  unsigned char *puVar13;
  short temp_v8 [16];
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = DAT_004475b8;
  switch(*(unsigned int *)(DAT_004475b8 + 0x18)) {
  case 0:
    FUN_002c5ab8(10,4);
    temp_v4 = FUN_002c1de4(10,4);
    *(int *)(temp_v2 + 0x7c) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x3c) = 1;
    *(unsigned int *)(*(int *)(temp_v2 + 0x7c) + 0x40) = 1;
    *(unsigned int *)(*(int *)(temp_v2 + 0x7c) + 0x38) = 0;
    if (*(int *)(temp_v2 + 0xc) != 0) {
      *(unsigned int *)(temp_v2 + 0x18) = 1;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    else {
      FUN_002976ac(0x21);
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
      switch(DAT_0049f9c0) {
      default:
        *(unsigned int *)(temp_v2 + 0x18) = 0xb;
        return 0;
      case 1:
      case 2:
      case 3:
        temp_v3 = 9;
        break;
      case 4:
        temp_v4 = FUN_002c0ba8(99);
        if (temp_v4 == 0) {
          temp_v3 = 4;
        }
        else {
          temp_v3 = 5;
        }
        break;
      case 5:
        temp_v3 = 7;
      }
      *(unsigned int *)(temp_v2 + 0x18) = temp_v3;
    }
    break;
  case 1:
    temp_v4 = *(int *)(DAT_004475b8 + 0x1c) + 1;
    *(int *)(DAT_004475b8 + 0x1c) = temp_v4;
    if (temp_v4 < 0xb) {
      return 0;
    }
    temp_v4 = 5;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 4:
    if (*(int *)(DAT_004475b8 + 0x1c) != 0) {
      temp_v4 = FUN_0019dfbc(*(unsigned int *)(DAT_004475b8 + 0x60));
      if (temp_v4 == 2) {
        if (*(int *)(temp_v2 + 100) != 0) {
          FUN_002899c4(*(int *)(temp_v2 + 100),1);
        }
        FUN_0028df0c(0);
        FUN_002a755c(*(unsigned int *)(temp_v2 + 0x60));
        FUN_002c4360(*(unsigned int *)(temp_v2 + 0x58));
        FUN_002c4360(*(unsigned int *)(temp_v2 + 0x5c));
        *(unsigned int *)(temp_v2 + 0x60) = 0;
        *(unsigned int *)(temp_v2 + 0x58) = 0;
        temp_v4 = 5;
        *(unsigned int *)(temp_v2 + 0x5c) = 0;
        *(int *)(temp_v2 + 0x18) = temp_v4;
        *(unsigned int *)(temp_v2 + 0x1c) = 0;
        break;
      }
    }
    else {
      FUN_002b8b70();
      temp_v3 = FUN_002c5e2c(&LAB_001e589c);
      *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
      temp_v3 = FUN_002c5e2c(&LAB_001e58b0);
      *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
      temp_v4 = *(int *)(temp_v2 + 0x58);
      FUN_002972f8(temp_v4,temp_v3);
      *(int *)(temp_v2 + 0x60) = temp_v4;
      *(unsigned int *)(temp_v4 + 0x108) = 2;
      temp_v3 = 0x47;
      FUN_00289a58(0x47,&LAB_001e58c4);
      *(unsigned int *)(temp_v2 + 100) = temp_v3;
      temp_v3 = FUN_00291018(*(unsigned int *)(temp_v2 + 0x58),&LAB_001e58c4);
      FUN_002971e4(*(unsigned int *)(temp_v2 + 0x60),temp_v3);
      FUN_002764a8();
    }
    temp_v4 = *(int *)(temp_v2 + 0x1c);
    *(int *)(temp_v2 + 0x1c) = temp_v4 + 1;
    break;
  case 5:
    temp_v4 = *(int *)(DAT_004475b8 + 0x1c) + 1;
    *(int *)(DAT_004475b8 + 0x1c) = temp_v4;
    if (temp_v4 == 1) {
      if (*(int *)(temp_v2 + 0xc) != 0) {
        DAT_0049fd38 = *(unsigned int *)(temp_v2 + 0x14);
        temp_v4 = FUN_0025b920(*(unsigned int *)(temp_v2 + 0x14));
        DAT_0049fd78 = temp_v4 == 0;
        DAT_0049fd88 = 1;
      }
      else {
        temp_v4 = DAT_0049f9c4;
        FUN_0025b8a8();
        FUN_001f8d04((int)*(short *)(temp_v4 + 0x24),&DAT_0049fd38,&DAT_0049fd78,&DAT_0049fd88);
      }
      temp_v8[0] = 0;
      temp_v8[1] = 0;
      temp_v8[2] = 0;
      temp_v8[3] = 0;
      temp_v8[4] = 0;
      temp_v8[5] = 0;
      temp_v8[6] = 0;
      temp_v8[7] = 0;
      temp_v8[8] = 0;
      temp_v8[9] = 0;
      temp_v8[10] = 0;
      temp_v8[0xb] = 0;
      temp_v8[0xc] = 0;
      temp_v8[0xd] = 0;
      temp_v8[0xe] = 0;
      temp_v8[0xf] = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      if (0 < DAT_0049fd88) {
        temp_v4 = DAT_0049fd88;
        psVar7 = temp_v8;
        puVar9 = (unsigned int *)&temp_v9;
        puVar12 = &DAT_0049fd38;
        puVar13 = &DAT_0049fd78;
        do {
          temp_v0 = *puVar13;
          temp_v4 = temp_v4 - 1;
          *psVar7 = (short)*puVar12;
          *(unsigned char *)puVar9 = temp_v0;
          psVar7 = psVar7 + 1;
          puVar9 = (unsigned int *)((int)puVar9 + 1);
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (temp_v4 != 0);
      }
      temp_v6 = 0;
      temp_v5 = 0;
      temp_v4 = temp_v6;
      if (0 < DAT_0049fd88) {
        do {
          psVar7 = temp_v8 + temp_v5;
          temp_v1 = *psVar7;
          temp_v4 = temp_v6;
          if (temp_v1 != 0) {
            temp_v7 = 1;
            if (0 < (DAT_0049fd88 - temp_v5) - 1) {
              puVar13 = (unsigned char *)((int)&temp_v9 + temp_v5);
              temp_v4 = (DAT_0049fd88 - temp_v5) - 1;
              psVar4 = psVar7;
              temp_v7 = 1;
              do {
                puVar13 = puVar13 + 1;
                psVar4 = psVar4 + 1;
                if ((*psVar4 != 0) && (*psVar4 == temp_v1)) {
                  *psVar4 = 0;
                  temp_v7 = temp_v7 + 1;
                  *puVar13 = 0;
                }
                temp_v4 = temp_v4 - 1;
              } while (temp_v4 != 0);
            }
            *(short *)(temp_v6 * 2 + 0x49fd8c) = *psVar7;
            temp_v4 = temp_v6 + 1;
            *(unsigned char *)(temp_v6 + 0x49fdac) = *(unsigned char *)((int)&temp_v9 + temp_v5);
            *(short *)(temp_v6 * 2 + 0x49fdbc) = temp_v7;
          }
          temp_v5 = temp_v5 + 1;
          temp_v6 = temp_v4;
        } while (temp_v5 < DAT_0049fd88);
      }
      DAT_0049fddc = (short)temp_v4;
      temp_v4 = 0;
      if (temp_v4 < DAT_0049fddc) {
        do {
          FUN_002c583c(0);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < DAT_0049fddc);
      }
    }
    if (*(int *)(temp_v2 + 0x1c) == 6) {
      *(unsigned char *)(temp_v2 + 0x3c) = 1;
      if (DAT_0049f91c < 100) {
        FUN_002920e4(0x1000200);
      }
      else {
        FUN_002920e4(0x1000200);
      }
    }
    if (*(int *)(temp_v2 + 0x1c) == 7) {
      if ((*(int *)(temp_v2 + 0xc) == 0) && (*(int *)(DAT_004474f4 + 0xac) == 0)) {
        FUN_002735c8(1);
        goto LAB_001e5928;
      }
    }
    else {
LAB_001e5928:
      if (*(int *)(temp_v2 + 0x1c) == 0xd) {
        *(unsigned char *)(temp_v2 + 0x20) = 1;
        FUN_002764a8();
      }
      if (*(int *)(temp_v2 + 0x1c) == 0x12) {
        *(unsigned char *)(temp_v2 + 0x2d) = 1;
      }
    }
    if ((*(char *)(temp_v2 + 0x20) != '\0') &&
       (temp_v4 = *(int *)(temp_v2 + 0x24) + 1, *(int *)(temp_v2 + 0x24) = temp_v4, temp_v4 >= 0x15)) {
      if (*(int *)(temp_v2 + 0x28) % 0xd == 0) {
        if (DAT_0049fdde < DAT_0049fddc) {
          DAT_0049fdde = DAT_0049fdde + 1;
        }
        else {
          *(unsigned char *)(temp_v2 + 0x2c) = 1;
        }
      }
      *(int *)(temp_v2 + 0x28) = *(int *)(temp_v2 + 0x28) + 1;
    }
    if (((*(char *)(temp_v2 + 0x3c) != '\0') &&
        (temp_v4 = *(int *)(temp_v2 + 0x40) + 1, *(int *)(temp_v2 + 0x40) = temp_v4, temp_v4 >= 7)) &&
       (temp_v4 = *(int *)(temp_v2 + 0x44) + 1, *(int *)(temp_v2 + 0x44) = temp_v4, temp_v4 >= 0x1f)) {
      *(unsigned int *)(temp_v2 + 0x44) = 0;
    }
    if (*(char *)(temp_v2 + 0x2d) != '\0') {
      temp_v4 = *(int *)(temp_v2 + 0x30) + 1;
      *(int *)(temp_v2 + 0x30) = temp_v4;
      if (temp_v4 >= 6) {
        *(int *)(temp_v2 + 0x38) = *(int *)(temp_v2 + 0x38) + 1;
      }
      if (*(char *)(temp_v2 + 0x2c) == '\0') {
        return 0;
      }
      *(unsigned char *)(temp_v2 + 0x34) = 1;
    }
    else if (*(char *)(temp_v2 + 0x2c) == '\0') {
      return 0;
    }
    temp_v4 = FUN_0027f10c();
    if ((temp_v4 != 0) || (temp_v4 = FUN_00276550(), temp_v4 != 0)) {
      FUN_002735c8(0xffffffff);
      *(unsigned char *)(temp_v2 + 0x20) = 0;
      *(unsigned char *)(temp_v2 + 0x2d) = 0;
      *(unsigned char *)(temp_v2 + 0x3c) = 0;
      if (*(int *)(temp_v2 + 0xc) == 0) {
        FUN_002dfd94(*(unsigned int *)(temp_v2 + 0x10));
        FUN_0021ddac(*(unsigned int *)(temp_v2 + 0x10),5,0);
        FUN_0029c0fc(0x13,1);
      }
      temp_v4 = DAT_0049f9c4;
      FUN_0025b8a8();
      FUN_002f3604((int)*(short *)(temp_v4 + 0x24),0);
      *(unsigned int *)(temp_v2 + 0x18) = 6;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    break;
  case 6:
    temp_v4 = *(int *)(DAT_004475b8 + 0x1c);
    *(unsigned int *)(DAT_004475b8 + 0x18) = 0xb;
    *(int *)(temp_v2 + 0x1c) = temp_v4 + 1;
    break;
  case 7:
    FUN_002b8b70();
    temp_v3 = FUN_002c5e2c(&LAB_001e5c48);
    *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
    temp_v3 = FUN_002c5e2c(&LAB_001e5c60);
    *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
    temp_v4 = *(int *)(temp_v2 + 0x58);
    FUN_002972f8(temp_v4,temp_v3);
    *(int *)(temp_v2 + 0x60) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x108) = 3;
    FUN_002971e4(*(unsigned int *)(temp_v2 + 0x60),1);
    FUN_002764a8();
    temp_v4 = *(int *)(temp_v2 + 0x18) + 1;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 8:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)(DAT_004475b8 + 0x60));
    if (temp_v4 != 2) {
      return 0;
    }
    FUN_002a755c(*(unsigned int *)(temp_v2 + 0x60));
    FUN_002c4360(*(unsigned int *)(temp_v2 + 0x58));
    FUN_002c4360(*(unsigned int *)(temp_v2 + 0x5c));
    *(unsigned int *)(temp_v2 + 0x60) = 0;
    *(unsigned int *)(temp_v2 + 0x58) = 0;
    temp_v4 = 0xb;
    *(unsigned int *)(temp_v2 + 0x5c) = 0;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 9:
    if (*(int *)(DAT_004474f4 + 0xac) == 0) {
      FUN_002735c8(1);
    }
    FUN_002b8b70();
    temp_v3 = FUN_002c5e2c(&LAB_001e5c48);
    *(unsigned int *)(temp_v2 + 0x58) = temp_v3;
    temp_v3 = FUN_002c5e2c(&LAB_001e5c60);
    *(unsigned int *)(temp_v2 + 0x5c) = temp_v3;
    temp_v4 = *(int *)(temp_v2 + 0x58);
    FUN_002972f8(temp_v4,temp_v3);
    *(int *)(temp_v2 + 0x60) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x108) = 3;
    if (DAT_0049f91c < 100) {
      temp_v3 = 2;
    }
    else {
      temp_v3 = 3;
    }
    FUN_002971e4(*(unsigned int *)(temp_v2 + 0x60),temp_v3);
    FUN_002764a8();
    *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    break;
  case 10:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)(DAT_004475b8 + 0x60));
    if (temp_v4 == 2) {
      FUN_002a755c(*(unsigned int *)(temp_v2 + 0x60));
      FUN_002c4360(*(unsigned int *)(temp_v2 + 0x58));
      FUN_002c4360(*(unsigned int *)(temp_v2 + 0x5c));
      *(unsigned int *)(temp_v2 + 0x60) = 0;
      *(unsigned int *)(temp_v2 + 0x58) = 0;
      *(unsigned int *)(temp_v2 + 0x5c) = 0;
      temp_v4 = FUN_00297674();
      if (temp_v4 != 0) {
        FUN_002735c8(0xffffffff);
      }
      else {
        FUN_00276c24(0x18,1,0);
        FUN_0029c0fc(0x1b,1);
      }
      *(unsigned int *)(temp_v2 + 0x18) = 0xb;
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    break;
  case 0xb:
    FUN_002a497c(0x21);
    FUN_002aeb2c(10,4);
    DAT_004475bc = (DAT_004475bc + 1) % 3;
    return 0xffffffff;
  }
  return 0;
}
