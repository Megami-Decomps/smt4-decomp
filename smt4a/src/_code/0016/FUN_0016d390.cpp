/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016d390` (_code @ 0x16d390, 0x998 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wordPairCopy(...);

/* stack frame of param_4: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int sp244; /* 0x244: local_244 */
    unsigned int sp254; /* 0x254: local_254 */
    unsigned int sp258; /* 0x258: local_258 */
} param_4_stack;

/* Supplied declaration required: wordPairCopy. */


unsigned int * FUN_0016d390(int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned short *puVar16;
  unsigned int temp_v10;
  unsigned int *puVar18;
  unsigned int temp_v11;
  unsigned short *puVar20;
  unsigned char temp_v12;
  unsigned char temp_v13 [8];
  int uStack_2a8;
  unsigned int temp_v14 [19];
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18 [9];
  unsigned int temp_v19;
  unsigned short *temp_v20;
  int temp_v21;
  unsigned short *temp_v22;
  unsigned int temp_v23;
  int temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  int temp_v29;
  int temp_v30;
  unsigned int *temp_v31;
  int iStack_2c;
  int temp_v32;
  
  temp_v32 = param_4;
  iStack_2c = param_3;
  temp_v31 = param_2;
  temp_v30 = param_1;
  temp_v12 = -1 < *(int *)(param_1 + 4);
  temp_v27 = 0;
  temp_v5 = param_3;
  if (temp_v12) {
    temp_v27 = 1;
    temp_v5 = param_4;
  }
  temp_v27 = (unsigned int)temp_v12;
  temp_v19 = 0;
  temp_v9 = 0;
  temp_v26 = 0;
  temp_v28 = 0;
  temp_v21 = 0;
  temp_v29 = param_1 + param_3 * 4;
  temp_v24 = *(int *)(param_1 + temp_v5 * 4 + 0xc);
  if ((temp_v27 != 0) && ((*(unsigned char *)(temp_v24 + 7) & 1) != 0)) {
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v25 = *(int *)(temp_v29 + 0xc);
    temp_v22 = (unsigned short *)(temp_v24 + *(int *)(temp_v24 + 0x28));
    temp_v20 = (unsigned short *)(temp_v25 + *(int *)(temp_v25 + 0x28));
    temp_v2 = 0;
    if (*(int *)(temp_v24 + 0x2c) != 0) {
      do {
        puVar4 = temp_v22 + temp_v2 * 4;
        if (((*puVar4 < 9) && (*puVar4 != 7)) && (temp_v5 = *(int *)(temp_v25 + 0x2c), temp_v5 != 0))
        {
          temp_v7 = 0;
          puVar16 = temp_v20 + temp_v2 * 4;
          temp_v23 = 1 << (temp_v2 & 0xff);
          puVar3 = temp_v20;
          do {
            temp_v3 = temp_v21;
            if (((*puVar16 < 9) && (*puVar16 != 7)) && (*puVar4 == *puVar3)) {
              temp_v11 = temp_v11 | (1 << (temp_v7 & 0xff));
              *(unsigned short *)(temp_v14 + (temp_v21 * 2 - 1)) = *puVar4;
              *(short *)((int)temp_v14 + (temp_v3 * 4 - 1) * 2) = (short)temp_v3;
              temp_v10 = temp_v10 | temp_v23;
              temp_v21 = temp_v21 + 1;
              *(unsigned short *)(temp_v14 + temp_v3 * 2) = puVar4[2];
            }
            temp_v5 = temp_v5 - 1;
            puVar3 = puVar3 + 4;
            temp_v7 = temp_v7 + 1;
          } while (temp_v5 != 0);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(unsigned int *)(temp_v24 + 0x2c));
    }
    temp_v5 = *(int *)(temp_v24 + 0x2c);
    if (temp_v5 != 0) {
      temp_v2 = 0;
      puVar3 = temp_v22 + 2;
      puVar4 = temp_v22;
      do {
        temp_v3 = temp_v21;
        if ((((temp_v10 & (1 << (temp_v2 & 0xff))) == 0) && (temp_v0 = *puVar4, temp_v0 < 9)) &&
           (temp_v0 != 7)) {
          temp_v1 = temp_v21 * 2;
          temp_v21 = temp_v21 + 1;
          *(unsigned short *)(temp_v14 + (temp_v1 - 1)) = temp_v0;
          *(short *)((int)temp_v14 + (temp_v3 * 4 - 1) * 2) = (short)temp_v3;
          *(unsigned short *)(temp_v14 + temp_v3 * 2) = *puVar3;
        }
        temp_v5 = temp_v5 - 1;
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
        temp_v2 = temp_v2 + 1;
      } while (temp_v5 != 0);
    }
    temp_v5 = *(int *)(temp_v25 + 0x2c);
    if (temp_v5 != 0) {
      temp_v2 = 0;
      puVar3 = temp_v20 + 2;
      puVar4 = temp_v20;
      do {
        temp_v3 = temp_v21;
        if ((((temp_v11 & (1 << (temp_v2 & 0xff))) == 0) && (temp_v0 = *puVar4, temp_v0 < 9)) &&
           (temp_v0 != 7)) {
          temp_v1 = temp_v21 * 2;
          temp_v21 = temp_v21 + 1;
          *(unsigned short *)(temp_v14 + (temp_v1 - 1)) = temp_v0;
          *(short *)((int)temp_v14 + (temp_v3 * 4 - 1) * 2) = (short)temp_v3;
          *(unsigned short *)(temp_v14 + temp_v3 * 2) = *puVar3;
        }
        temp_v5 = temp_v5 - 1;
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
        temp_v2 = temp_v2 + 1;
      } while (temp_v5 != 0);
    }
  }
  else {
    temp_v5 = temp_v24 + *(int *)(temp_v24 + 0x28);
    if (*(unsigned int *)(temp_v24 + 0x2c) != 0) {
      puVar5 = (unsigned int *)temp_v13;
      temp_v3 = temp_v5 - 8;
      if ((*(unsigned int *)(temp_v24 + 0x2c) & 1) != 0) {
        wordPairCopy(&uStack_2a8,temp_v5);
        puVar5 = (unsigned int *)&uStack_2a8;
        temp_v3 = temp_v5;
      }
      for (temp_v2 = *(unsigned int *)(temp_v24 + 0x2c) >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        wordPairCopy((unsigned char *)((int)puVar5 + 8),temp_v3 + 8);
        puVar5 = (unsigned int *)((int)puVar5 + 0x10);
        temp_v3 = temp_v3 + 0x10;
        wordPairCopy();
      }
    }
    temp_v21 = *(int *)(temp_v24 + 0x2c);
  }
  temp_v2 = 0;
  do {
    temp_v5 = 0;
    temp_v18[temp_v2 + 1] = 0x1f1f1f1f;
    if (0 < temp_v21) {
      do {
        temp_v10 = temp_v14[temp_v5 * 2];
        temp_v11 = temp_v14[temp_v5 * 2 - 1];
        temp_v0 = *(unsigned short *)((int)temp_v14 + (temp_v5 * 4 - 1) * 2);
        temp_v7 = 0;
        for (temp_v6 = 0; (temp_v0 == temp_v2 && ((int)temp_v6 < 4)); temp_v6 = temp_v6 + 1) {
          temp_v4 = temp_v7;
          if (((unsigned int)(unsigned short)temp_v10 & (1 << (temp_v6 & 0xff))) != 0) {
            temp_v8 = 0x1f;
            switch((short)temp_v11) {
            case 0:
              temp_v4 = temp_v7 + 1;
              temp_v8 = temp_v7;
              if (temp_v4 == 2) {
                temp_v9 = temp_v9 | 1;
              }
              break;
            case 1:
              temp_v9 = temp_v9 | 0x1000000;
              temp_v8 = temp_v7 + 4;
              temp_v4 = temp_v7 + 1;
              break;
            case 2:
              temp_v9 = temp_v9 | 2;
              temp_v8 = temp_v7 + 8;
              temp_v4 = temp_v7 + 1;
              break;
            case 3:
              if (temp_v7 < 2) {
                temp_v8 = temp_v7 + 0xc;
                temp_v4 = temp_v7 + 1;
              }
              temp_v9 = temp_v9 | 0x100;
              temp_v26 = 1;
              break;
            case 4:
              temp_v9 = temp_v9 | 0x10000;
              temp_v26 = 1;
              temp_v8 = 0x10;
              break;
            case 5:
              if (temp_v7 < 2) {
                temp_v8 = temp_v7 + 0xe;
                temp_v7 = temp_v7 + 1;
              }
              temp_v9 = temp_v9 | 0x200;
              temp_v26 = 1;
              temp_v4 = temp_v7;
              break;
            case 6:
              if (temp_v7 < 2) {
                temp_v8 = temp_v7 + 0x16;
                temp_v7 = temp_v7 + 1;
              }
              temp_v9 = temp_v9 | 0x400;
              temp_v26 = 1;
              temp_v4 = temp_v7;
              break;
            case 8:
              if (temp_v7 < 3) {
                temp_v8 = temp_v7 + 0x12;
                temp_v7 = temp_v7 + 1;
              }
              temp_v9 = temp_v9 | 0x1000000;
              temp_v4 = temp_v7;
            }
            temp_v18[temp_v2 + 1] =
                 (temp_v8 << ((temp_v6 << 3) & 0xff)) |
                 (temp_v18[temp_v2 + 1] & ~(0xff << ((temp_v6 << 3) & 0xff)));
          }
          temp_v7 = temp_v4;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v21);
      if (temp_v18[temp_v2 + 1] != 0x1f1f1f1f) {
        temp_v19 = temp_v19 + 1;
        temp_v28 = temp_v28 | (1 << (temp_v2 & 0xff));
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 7);
  if (temp_v27 != 0) {
    temp_v2 = 0;
    temp_v5 = *(int *)(temp_v29 + 0xc);
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v3 = *(int *)(temp_v5 + 0x28);
    temp_v16 = *(unsigned int *)(temp_v5 + 0x2c);
    do {
      temp_v10 = 0;
      temp_v14[temp_v2 - 1] = 0x1f1f1f1f;
      if (temp_v16 != 0) {
        do {
          puVar20 = (unsigned short *)(temp_v3 + temp_v5 + temp_v10 * 8);
          temp_v0 = puVar20[1];
          temp_v11 = 0;
          for (temp_v7 = 0; (temp_v0 == temp_v2 && ((int)temp_v7 < 4)); temp_v7 = temp_v7 + 1) {
            temp_v6 = temp_v11;
            if (((unsigned int)(unsigned short)puVar20[2] & (1 << (temp_v7 & 0xff))) != 0) {
              temp_v4 = 0x1f;
              switch(*puVar20) {
              case 0:
                temp_v6 = temp_v11 + 1;
                temp_v4 = temp_v11;
                break;
              case 1:
                temp_v4 = temp_v11 + 4;
                temp_v6 = temp_v11 + 1;
                break;
              case 2:
                temp_v4 = temp_v11 + 8;
                temp_v6 = temp_v11 + 1;
                break;
              case 3:
                if (temp_v11 < 2) {
                  temp_v4 = temp_v11 + 0xc;
                  temp_v6 = temp_v11 + 1;
                }
                break;
              case 4:
                temp_v4 = 0x10;
                break;
              case 5:
                if (temp_v11 < 2) {
                  temp_v4 = temp_v11 + 0xe;
                  temp_v6 = temp_v11 + 1;
                }
                break;
              case 6:
                if (temp_v11 < 2) {
                  temp_v4 = temp_v11 + 0x16;
                  temp_v6 = temp_v11 + 1;
                }
                break;
              case 8:
                if (temp_v11 < 3) {
                  temp_v4 = temp_v11 + 0x12;
                  temp_v6 = temp_v11 + 1;
                }
                break;
              case 9:
                temp_v4 = 0xff;
              }
              temp_v14[temp_v2 - 1] =
                   (temp_v4 << ((temp_v7 << 3) & 0xff)) |
                   (temp_v14[temp_v2 - 1] & ~(0xff << ((temp_v7 << 3) & 0xff)));
            }
            temp_v11 = temp_v6;
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < temp_v16);
        if (temp_v14[temp_v2 - 1] != 0x1f1f1f1f) {
          temp_v15 = temp_v15 + 1;
          temp_v17 = temp_v17 | (1 << (temp_v2 & 0xff));
        }
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x10);
    temp_v30 = temp_v30 + temp_v32 * 4;
    temp_v2 = (unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x14);
    if (temp_v2 != 1) {
      *temp_v31 = 0;
    }
    else {
      *temp_v31 = 0x80000000;
    }
    temp_v31[1] = 0xa0229;
    temp_v31[2] = 0;
    temp_v31[3] = 0x30253;
    if (temp_v2 == 0) {
      temp_v10 = 0;
    }
    else {
      temp_v10 = 0x100;
    }
    temp_v11 = temp_v15 - 1;
    temp_v31[4] = temp_v10 | temp_v11 | 0x8000000;
    temp_v31[5] = 0xb0289;
    temp_v31[6] = *(unsigned int *)(*(int *)(temp_v30 + 0xc) + 8) | 0x7fff0000;
    temp_v31[7] = 0xf028a;
    temp_v31[8] = temp_v28;
    temp_v31[9] = 0xf028d;
    temp_v31[10] = *(unsigned int *)(*(int *)(temp_v29 + 0xc) + 8) | 0x7fff0000;
    temp_v31[0xb] = 0xf02ba;
    temp_v31[0xc] = temp_v17;
    temp_v31[0xd] = 0xf02bd;
    temp_v31[0xe] = temp_v11;
    temp_v31[0xf] = 0xf0251;
    temp_v31[0x10] = 0x76543210;
    temp_v31[0x11] = 0xf028b;
    temp_v31[0x12] = 0xfedcba98;
    puVar6 = temp_v31 + 0x14;
    temp_v31[0x13] = 0xf028c;
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        temp_v2 = ((unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x17) * 0x100 - 0x100) |
                ((unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x15) << 0x10) | 0x1000002 |
                (temp_v15 * 0x1000 - 0x1000U);
      }
    }
    else {
      temp_v10 = (unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x16);
      if (temp_v10 != 0) {
        *puVar6 = temp_v10 - 1;
        puVar6 = temp_v31 + 0x16;
        temp_v31[0x15] = 0x10254;
      }
    }
    *puVar6 = temp_v2;
    puVar6[1] = 0xf0252;
    puVar7 = puVar6 + 3;
    puVar6[2] = temp_v11;
    *puVar7 = 0xf024a;
  }
  else {
    *temp_v31 = 0;
    temp_v31[1] = 0x80229;
    temp_v31[2] = 0;
    temp_v31[3] = 0x10253;
    temp_v31[4] = 0xa0000000;
    temp_v31[5] = 0xb0289;
    temp_v31[6] = *(unsigned int *)(*(int *)(temp_v29 + 0xc) + 8) | 0x7fff0000;
    temp_v31[7] = 0xf02ba;
    temp_v31[8] = temp_v28;
    temp_v31[9] = 0xf02bd;
    temp_v31[10] = temp_v19 - 1;
    temp_v31[0xb] = 0xf0251;
    temp_v31[0xc] = 0;
    temp_v31[0xd] = 0xf0252;
    temp_v31[0xe] = temp_v19 - 1;
    temp_v31[0xf] = 0xf024a;
    puVar7 = temp_v31 + 0xf;
  }
  temp_v5 = 0;
  puVar7[1] = temp_v19 - 1;
  puVar7[2] = 0x1025e;
  temp_v3 = 3;
  puVar7[3] = temp_v19;
  puVar7[4] = 0xf004f;
  puVar7 = puVar7 + 5;
  puVar6 = temp_v18;
  do {
    temp_v2 = puVar6[2];
    if (temp_v18[1] != 0x1f1f1f1f) {
      temp_v10 = temp_v5 + 0x50;
      puVar18 = puVar7 + 1;
      *puVar7 = temp_v18[1];
      temp_v5 = temp_v5 + 1;
      puVar7 = puVar7 + 2;
      *puVar18 = temp_v10 | 0xf0000;
    }
    temp_v18[1] = puVar6[3];
    if (temp_v2 != 0x1f1f1f1f) {
      temp_v10 = temp_v5 + 0x50;
      puVar18 = puVar7 + 1;
      *puVar7 = temp_v2;
      temp_v5 = temp_v5 + 1;
      puVar7 = puVar7 + 2;
      *puVar18 = temp_v10 | 0xf0000;
    }
    temp_v3 = temp_v3 - 1;
    puVar6 = puVar6 + 2;
  } while (temp_v3 != 0);
  if (temp_v18[7] != 0x1f1f1f1f) {
    temp_v2 = temp_v5 + 0x50;
    puVar6 = puVar7 + 1;
    *puVar7 = temp_v18[7];
    temp_v5 = temp_v5 + 1;
    puVar7 = puVar7 + 2;
    *puVar6 = temp_v2 | 0xf0000;
  }
  temp_v2 = 7 - temp_v5;
  if (0 < (int)temp_v2) {
    temp_v12 = (temp_v2 & 1) != 0;
    puVar6 = puVar7 + -2;
    puVar18 = temp_v18 + temp_v5;
    if (temp_v12) {
      *puVar7 = temp_v18[temp_v5 + 1];
      puVar7[1] = (temp_v5 + 0x50U) | 0xf0000;
      puVar6 = puVar7;
      puVar18 = temp_v18 + temp_v5 + 1;
    }
    temp_v10 = (unsigned int)temp_v12;
    for (temp_v3 = (int)temp_v2 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      puVar6[2] = puVar18[1];
      puVar6[3] = (temp_v5 + temp_v10 + 0x50) | 0xf0000;
      puVar18 = puVar18 + 2;
      puVar6[4] = *puVar18;
      puVar6[5] = (temp_v5 + temp_v10 + 0x51) | 0xf0000;
      temp_v10 = temp_v10 + 2;
      puVar6 = puVar6 + 4;
    }
    puVar7 = puVar7 + temp_v5 * -2 + 0xe;
  }
  *puVar7 = temp_v26;
  puVar7[1] = 0xf0064;
  puVar7[2] = temp_v9;
  puVar6 = puVar7 + 4;
  puVar7[3] = 0xf006f;
  if (temp_v27 != 0) {
    *puVar6 = 0;
    puVar7[5] = 0x8025e;
    puVar6 = puVar7 + 6;
  }
  return puVar6;
}

} /* extern "C" */
