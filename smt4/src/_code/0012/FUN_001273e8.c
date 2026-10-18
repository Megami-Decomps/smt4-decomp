/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001273e8` (_code @ 0x1273e8, 0x984 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int sp244; /* 0x244: local_244 */
    unsigned int sp254; /* 0x254: local_254 */
    unsigned int sp258; /* 0x258: local_258 */
} param_4_stack;

/* Supplied declaration required: FUN_002ad8b4. */


unsigned int * FUN_001273e8(int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned short **ppuVar10;
  unsigned int temp_v6;
  unsigned short *puVar12;
  unsigned short *puVar13;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned short *puVar18;
  unsigned char temp_v11;
  unsigned char temp_v12 [8];
  unsigned short temp_v13 [8];
  unsigned int temp_v14 [16];
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned short *temp_v19;
  unsigned short *temp_v20;
  unsigned short *temp_v21 [6];
  unsigned int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  int temp_v29;
  int temp_v30;
  unsigned int *temp_v31;
  int iStack_2c;
  int temp_v32;
  
  temp_v32 = param_4;
  iStack_2c = param_3;
  temp_v31 = param_2;
  temp_v30 = param_1;
  temp_v11 = -1 < *(int *)(param_1 + 4);
  temp_v26 = 0;
  temp_v2 = param_3;
  if (temp_v11) {
    temp_v26 = 1;
    temp_v2 = param_4;
  }
  temp_v26 = (unsigned int)temp_v11;
  temp_v18 = 0;
  temp_v6 = 0;
  temp_v25 = 0;
  temp_v27 = 0;
  temp_v7 = 0;
  temp_v28 = param_1 + param_3 * 4;
  temp_v23 = *(int *)(param_1 + temp_v2 * 4 + 0xc);
  if ((temp_v26 != 0) && (*(char *)(temp_v23 + 7) != '\0')) {
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v29 = *(int *)(temp_v28 + 0xc);
    temp_v19 = (unsigned short *)(temp_v23 + *(int *)(temp_v23 + 0x28));
    temp_v20 = (unsigned short *)(temp_v29 + *(int *)(temp_v29 + 0x28));
    temp_v1 = 0;
    if (*(int *)(temp_v23 + 0x2c) != 0) {
      do {
        puVar18 = temp_v19 + temp_v1 * 4;
        if (((*puVar18 < 9) && (*puVar18 != 7)) && (temp_v2 = *(int *)(temp_v29 + 0x2c), temp_v2 != 0))
        {
          temp_v4 = 0;
          puVar12 = temp_v20 + temp_v1 * 4;
          temp_v24 = 1 << (temp_v1 & 0xff);
          puVar2 = temp_v20;
          temp_v8 = temp_v7;
          do {
            temp_v7 = temp_v8;
            if (((*puVar12 < 9) && (*puVar12 != 7)) && (*puVar18 == *puVar2)) {
              temp_v13[temp_v8 * 4] = *puVar18;
              temp_v13[temp_v8 * 4 + 1] = (unsigned short)temp_v8;
              temp_v7 = temp_v8 + 1;
              temp_v10 = temp_v10 | (1 << (temp_v4 & 0xff));
              temp_v9 = temp_v9 | temp_v24;
              temp_v13[temp_v8 * 4 + 2] = puVar18[2];
            }
            temp_v2 = temp_v2 - 1;
            puVar2 = puVar2 + 4;
            temp_v4 = temp_v4 + 1;
            temp_v8 = temp_v7;
          } while (temp_v2 != 0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(unsigned int *)(temp_v23 + 0x2c));
    }
    temp_v2 = *(int *)(temp_v23 + 0x2c);
    if (temp_v2 != 0) {
      temp_v1 = 0;
      puVar2 = temp_v19 + 2;
      puVar18 = temp_v19;
      temp_v8 = temp_v7;
      do {
        temp_v7 = temp_v8;
        if ((((temp_v9 & (1 << (temp_v1 & 0xff))) == 0) && (temp_v0 = *puVar18, temp_v0 < 9)) &&
           (temp_v0 != 7)) {
          temp_v13[temp_v8 * 4] = temp_v0;
          temp_v13[temp_v8 * 4 + 1] = (unsigned short)temp_v8;
          temp_v7 = temp_v8 + 1;
          temp_v13[temp_v8 * 4 + 2] = *puVar2;
        }
        temp_v2 = temp_v2 - 1;
        puVar18 = puVar18 + 4;
        puVar2 = puVar2 + 4;
        temp_v1 = temp_v1 + 1;
        temp_v8 = temp_v7;
      } while (temp_v2 != 0);
    }
    temp_v2 = *(int *)(temp_v29 + 0x2c);
    if (temp_v2 != 0) {
      temp_v1 = 0;
      puVar2 = temp_v20 + 2;
      puVar18 = temp_v20;
      temp_v8 = temp_v7;
      do {
        temp_v7 = temp_v8;
        if ((((temp_v10 & (1 << (temp_v1 & 0xff))) == 0) && (temp_v0 = *puVar18, temp_v0 < 9)) &&
           (temp_v0 != 7)) {
          temp_v13[temp_v8 * 4] = temp_v0;
          temp_v13[temp_v8 * 4 + 1] = (unsigned short)temp_v8;
          temp_v7 = temp_v8 + 1;
          temp_v13[temp_v8 * 4 + 2] = *puVar2;
        }
        temp_v2 = temp_v2 - 1;
        puVar18 = puVar18 + 4;
        puVar2 = puVar2 + 4;
        temp_v1 = temp_v1 + 1;
        temp_v8 = temp_v7;
      } while (temp_v2 != 0);
    }
  }
  else {
    temp_v2 = *(int *)(temp_v23 + 0x28) + temp_v23;
    if (*(unsigned int *)(temp_v23 + 0x2c) != 0) {
      puVar18 = (unsigned short *)temp_v12;
      temp_v7 = temp_v2 - 8;
      if ((*(unsigned int *)(temp_v23 + 0x2c) & 1) != 0) {
        FUN_002ad8b4(temp_v13,temp_v2);
        puVar18 = temp_v13;
        temp_v7 = temp_v2;
      }
      for (temp_v1 = *(unsigned int *)(temp_v23 + 0x2c) >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        FUN_002ad8b4((unsigned char *)((int)puVar18 + 8),temp_v7 + 8);
        puVar18 = (unsigned short *)((int)puVar18 + 0x10);
        temp_v7 = temp_v7 + 0x10;
        FUN_002ad8b4();
      }
    }
    temp_v7 = *(int *)(temp_v23 + 0x2c);
  }
  temp_v1 = 0;
  do {
    temp_v2 = 0;
    temp_v21[temp_v1] = (unsigned short *)0x1f1f1f1f;
    if (0 < temp_v7) {
      do {
        temp_v0 = temp_v13[temp_v2 * 4 + 1];
        temp_v9 = 0;
        for (temp_v10 = 0; (temp_v0 == temp_v1 && ((int)temp_v10 < 4)); temp_v10 = temp_v10 + 1) {
          temp_v4 = temp_v9;
          if (((unsigned int)temp_v13[temp_v2 * 4 + 2] & (1 << (temp_v10 & 0xff))) != 0) {
            temp_v5 = 0x1f;
            switch(temp_v13[temp_v2 * 4]) {
            case 0:
              temp_v4 = temp_v9 + 1;
              temp_v5 = temp_v9;
              if (temp_v4 == 2) {
                temp_v6 = temp_v6 | 1;
              }
              break;
            case 1:
              temp_v6 = temp_v6 | 0x1000000;
              temp_v5 = temp_v9 + 4;
              temp_v4 = temp_v9 + 1;
              break;
            case 2:
              temp_v6 = temp_v6 | 2;
              temp_v5 = temp_v9 + 8;
              temp_v4 = temp_v9 + 1;
              break;
            case 3:
              if (temp_v9 < 2) {
                temp_v5 = temp_v9 + 0xc;
                temp_v4 = temp_v9 + 1;
              }
              temp_v6 = temp_v6 | 0x100;
              temp_v25 = 1;
              break;
            case 4:
              temp_v6 = temp_v6 | 0x10000;
              temp_v25 = 1;
              temp_v5 = 0x10;
              break;
            case 5:
              if (temp_v9 < 2) {
                temp_v5 = temp_v9 + 0xe;
                temp_v9 = temp_v9 + 1;
              }
              temp_v6 = temp_v6 | 0x200;
              temp_v25 = 1;
              temp_v4 = temp_v9;
              break;
            case 6:
              if (temp_v9 < 2) {
                temp_v5 = temp_v9 + 0x16;
                temp_v9 = temp_v9 + 1;
              }
              temp_v6 = temp_v6 | 0x400;
              temp_v25 = 1;
              temp_v4 = temp_v9;
              break;
            case 8:
              if (temp_v9 < 3) {
                temp_v5 = temp_v9 + 0x12;
                temp_v9 = temp_v9 + 1;
              }
              temp_v6 = temp_v6 | 0x1000000;
              temp_v4 = temp_v9;
            }
            temp_v21[temp_v1] =
                 (unsigned short *)
                 ((temp_v5 << ((temp_v10 << 3) & 0xff)) |
                 ((unsigned int)temp_v21[temp_v1] & ~(0xff << ((temp_v10 << 3) & 0xff))));
          }
          temp_v9 = temp_v4;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v7);
      if (temp_v21[temp_v1] != (unsigned short *)0x1f1f1f1f) {
        temp_v18 = temp_v18 + 1;
        temp_v27 = temp_v27 | (1 << (temp_v1 & 0xff));
      }
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 7);
  if (temp_v26 != 0) {
    temp_v1 = 0;
    temp_v2 = *(int *)(temp_v28 + 0xc);
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v7 = *(int *)(temp_v2 + 0x28);
    temp_v16 = *(unsigned int *)(temp_v2 + 0x2c);
    do {
      temp_v9 = 0;
      temp_v14[temp_v1] = 0x1f1f1f1f;
      if (temp_v16 != 0) {
        do {
          puVar13 = (unsigned short *)(temp_v7 + temp_v2 + temp_v9 * 8);
          temp_v0 = puVar13[1];
          temp_v10 = 0;
          for (temp_v4 = 0; (temp_v0 == temp_v1 && ((int)temp_v4 < 4)); temp_v4 = temp_v4 + 1) {
            temp_v5 = temp_v10;
            if (((unsigned int)(unsigned short)puVar13[2] & (1 << (temp_v4 & 0xff))) != 0) {
              temp_v3 = 0x1f;
              switch(*puVar13) {
              case 0:
                temp_v5 = temp_v10 + 1;
                temp_v3 = temp_v10;
                break;
              case 1:
                temp_v3 = temp_v10 + 4;
                temp_v5 = temp_v10 + 1;
                break;
              case 2:
                temp_v3 = temp_v10 + 8;
                temp_v5 = temp_v10 + 1;
                break;
              case 3:
                if (temp_v10 < 2) {
                  temp_v3 = temp_v10 + 0xc;
                  temp_v5 = temp_v10 + 1;
                }
                break;
              case 4:
                temp_v3 = 0x10;
                break;
              case 5:
                if (temp_v10 < 2) {
                  temp_v3 = temp_v10 + 0xe;
                  temp_v5 = temp_v10 + 1;
                }
                break;
              case 6:
                if (temp_v10 < 2) {
                  temp_v3 = temp_v10 + 0x16;
                  temp_v5 = temp_v10 + 1;
                }
                break;
              case 8:
                if (temp_v10 < 3) {
                  temp_v3 = temp_v10 + 0x12;
                  temp_v5 = temp_v10 + 1;
                }
                break;
              case 9:
                temp_v3 = 0xff;
              }
              temp_v14[temp_v1] =
                   (temp_v3 << ((temp_v4 << 3) & 0xff)) |
                   (temp_v14[temp_v1] & ~(0xff << ((temp_v4 << 3) & 0xff)));
            }
            temp_v10 = temp_v5;
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < temp_v16);
        if (temp_v14[temp_v1] != 0x1f1f1f1f) {
          temp_v15 = temp_v15 + 1;
          temp_v17 = temp_v17 | (1 << (temp_v1 & 0xff));
        }
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < 0x10);
    temp_v30 = temp_v30 + temp_v32 * 4;
    temp_v1 = (unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x14);
    if (temp_v1 != 1) {
      *temp_v31 = 0;
    }
    else {
      *temp_v31 = 0x80000000;
    }
    temp_v31[1] = 0xa0229;
    temp_v31[2] = 0;
    temp_v31[3] = 0x30253;
    if (temp_v1 == 0) {
      temp_v9 = 0;
    }
    else {
      temp_v9 = 0x100;
    }
    temp_v10 = temp_v15 - 1;
    temp_v31[4] = temp_v9 | temp_v10 | 0x8000000;
    temp_v31[5] = 0xb0289;
    temp_v31[6] = *(unsigned int *)(*(int *)(temp_v30 + 0xc) + 8) | 0x7fff0000;
    temp_v31[7] = 0xf028a;
    temp_v31[8] = temp_v27;
    temp_v31[9] = 0xf028d;
    temp_v31[10] = *(unsigned int *)(*(int *)(temp_v28 + 0xc) + 8) | 0x7fff0000;
    temp_v31[0xb] = 0xf02ba;
    temp_v31[0xc] = temp_v17;
    temp_v31[0xd] = 0xf02bd;
    temp_v31[0xe] = temp_v10;
    temp_v31[0xf] = 0xf0251;
    temp_v31[0x10] = 0x76543210;
    temp_v31[0x11] = 0xf028b;
    temp_v31[0x12] = 0xfedcba98;
    puVar3 = temp_v31 + 0x14;
    temp_v31[0x13] = 0xf028c;
    if (temp_v1 != 1) {
      if (temp_v1 == 2) {
        temp_v1 = ((unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x15) << 0x10) | 0x1000002 |
                (temp_v15 * 0x1000 - 0x1000U) |
                ((unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x17) * 0x100 - 0x100);
      }
    }
    else {
      temp_v9 = (unsigned int)*(unsigned char *)(*(int *)(temp_v30 + 0xc) + 0x17);
      if (temp_v9 != 0) {
        *puVar3 = temp_v9 - 1;
        puVar3 = temp_v31 + 0x16;
        temp_v31[0x15] = 0x10254;
      }
    }
    *puVar3 = temp_v1;
    puVar3[1] = 0xf0252;
    puVar4 = puVar3 + 3;
    puVar3[2] = temp_v10;
    *puVar4 = 0xf024a;
  }
  else {
    *temp_v31 = 0;
    temp_v31[1] = 0x80229;
    temp_v31[2] = 0;
    temp_v31[3] = 0x10253;
    temp_v31[4] = 0xa0000000;
    temp_v31[5] = 0xb0289;
    temp_v31[6] = *(unsigned int *)(*(int *)(temp_v28 + 0xc) + 8) | 0x7fff0000;
    temp_v31[7] = 0xf02ba;
    temp_v31[8] = temp_v27;
    temp_v31[9] = 0xf02bd;
    temp_v31[10] = temp_v18 - 1;
    temp_v31[0xb] = 0xf0251;
    temp_v31[0xc] = 0;
    temp_v31[0xd] = 0xf0252;
    temp_v31[0xe] = temp_v18 - 1;
    temp_v31[0xf] = 0xf024a;
    puVar4 = temp_v31 + 0xf;
  }
  puVar4[1] = temp_v18 - 1;
  temp_v2 = 0;
  puVar4[2] = 0x1025e;
  temp_v7 = 3;
  puVar4[3] = temp_v18;
  puVar4[4] = 0xf004f;
  puVar4 = puVar4 + 5;
  ppuVar10 = &temp_v20;
  do {
    puVar18 = ppuVar10[2];
    if (temp_v21[0] != (unsigned short *)0x1f1f1f1f) {
      temp_v1 = temp_v2 + 0x50;
      puVar3 = puVar4 + 1;
      *puVar4 = (unsigned int)temp_v21[0];
      temp_v2 = temp_v2 + 1;
      puVar4 = puVar4 + 2;
      *puVar3 = temp_v1 | 0xf0000;
    }
    temp_v21[0] = ppuVar10[3];
    if (puVar18 != (unsigned short *)0x1f1f1f1f) {
      temp_v1 = temp_v2 + 0x50;
      puVar3 = puVar4 + 1;
      *puVar4 = (unsigned int)puVar18;
      temp_v2 = temp_v2 + 1;
      puVar4 = puVar4 + 2;
      *puVar3 = temp_v1 | 0xf0000;
    }
    temp_v7 = temp_v7 - 1;
    ppuVar10 = ppuVar10 + 2;
  } while (temp_v7 != 0);
  if (temp_v22 != 0x1f1f1f1f) {
    temp_v1 = temp_v2 + 0x50;
    puVar3 = puVar4 + 1;
    *puVar4 = temp_v22;
    temp_v2 = temp_v2 + 1;
    puVar4 = puVar4 + 2;
    *puVar3 = temp_v1 | 0xf0000;
  }
  temp_v1 = 7 - temp_v2;
  if (0 < (int)temp_v1) {
    temp_v11 = (temp_v1 & 1) != 0;
    puVar3 = puVar4 + -2;
    ppuVar10 = temp_v21 + (temp_v2 - 1);
    if (temp_v11) {
      *puVar4 = (unsigned int)temp_v21[temp_v2];
      puVar4[1] = (temp_v2 + 0x50U) | 0xf0000;
      puVar3 = puVar4;
      ppuVar10 = temp_v21 + temp_v2;
    }
    temp_v9 = (unsigned int)temp_v11;
    for (temp_v7 = (int)temp_v1 >> 1; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
      puVar3[2] = (unsigned int)ppuVar10[1];
      puVar3[3] = (temp_v2 + temp_v9 + 0x50) | 0xf0000;
      ppuVar10 = ppuVar10 + 2;
      puVar3[4] = (unsigned int)*ppuVar10;
      puVar3[5] = (temp_v2 + temp_v9 + 0x51) | 0xf0000;
      temp_v9 = temp_v9 + 2;
      puVar3 = puVar3 + 4;
    }
    puVar4 = puVar4 + temp_v2 * -2 + 0xe;
  }
  *puVar4 = temp_v25;
  puVar4[1] = 0xf0064;
  puVar4[2] = temp_v6;
  puVar3 = puVar4 + 4;
  puVar4[3] = 0xf006f;
  if (temp_v26 != 0) {
    *puVar3 = 0;
    puVar4[5] = 0x8025e;
    puVar3 = puVar4 + 6;
  }
  return puVar3;
}
