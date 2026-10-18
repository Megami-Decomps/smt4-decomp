/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004134f8` (_code @ 0x4134f8, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 21 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned short sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned char sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned char sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern int FUN_00414484(); /* 0x414484 */
extern unsigned char DAT_00559ba8; /* 0x559ba8 */
extern unsigned char DAT_0055a790; /* 0x55a790 */
extern unsigned char DAT_0055a7d8; /* 0x55a7d8 */
extern unsigned char DAT_0055ac90; /* 0x55ac90 */
extern unsigned char DAT_0055cacc; /* 0x55cacc */

/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: FUN_00103f74. */
/* Supplied declaration required: FUN_0011b704. */
/* Supplied declaration required: FUN_0011bf74. */
/* Supplied declaration required: FUN_0011fdd8. */
extern unsigned int *FUN_002e6dac(int);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e760a. */
extern unsigned int FUN_002fafd8(int, unsigned int);


void FUN_004134f8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  int *piVar8;
  unsigned int temp_v3;
  unsigned int *puVar10;
  unsigned char *temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  unsigned int uStack_64;
  unsigned char **temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned char *temp_v17;
  unsigned char temp_v18;
  unsigned int temp_v19;
  unsigned short temp_v20;
  int temp_v21;
  
  temp_v3 = 0;
  temp_v21 = param_1;
  do {
    temp_v9 = 0;
    temp_v5 = 0;
    temp_v11 = 0xffff;
    temp_v8 = &DAT_0055a790;
    temp_v6 = 0;
    temp_v4 = &DAT_00559ba8;
    temp_v7 = 0;
    temp_v10 = 0;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v17 = &DAT_0055a790;
    temp_v20 = temp_v11;
    FUN_0011fdd8(&temp_v8,&temp_v17);
    temp_v1 = temp_v21;
    temp_v13 = 0;
    uStack_64 = 0;
    temp_v12 = 4;
    piVar8 = (int *)(temp_v21 + 0xac);
    puVar6 = *(unsigned int **)(temp_v21 + 0xb0);
    if (puVar6 != *(unsigned int **)(temp_v21 + 0xb4)) {
      *(unsigned int **)(temp_v21 + 0xb0) = puVar6 + 0xc;
      if (puVar6 != (unsigned int *)0x0) {
        *puVar6 = (unsigned int)&DAT_0055a7d8;
        *(unsigned char *)(puVar6 + 1) = temp_v5;
        puVar6[2] = temp_v6;
        puVar6[3] = temp_v7;
        puVar6[4] = (unsigned int)&DAT_0055ac90;
        *(unsigned char *)(puVar6 + 5) = temp_v9;
        puVar6[6] = temp_v10;
        *(unsigned short *)(puVar6 + 7) = temp_v11;
        puVar6[4] = (unsigned int)&DAT_0055a790;
        *(unsigned char *)(puVar6 + 8) = 4;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        *puVar6 = (unsigned int)&DAT_00559ba8;
      }
    }
    else {
      temp_v14 = &temp_v4;
      temp_v0 = ((int)puVar6 - *piVar8) / 0x30;
      if (temp_v0 < (unsigned int)(((int)*(unsigned int **)(temp_v21 + 0xb4) - *piVar8) / 0x30)) {
        *(unsigned int **)(temp_v21 + 0xb0) = puVar6 + 0xc;
        puVar5 = puVar6;
        if (puVar6 != (unsigned int *)0x0) {
          *(unsigned char *)(puVar6 + 1) = *(unsigned char *)(puVar6 + -0xb);
          puVar6[2] = puVar6[-10];
          puVar6[3] = puVar6[-9];
          *(unsigned char *)(puVar6 + 5) = *(unsigned char *)(puVar6 + -7);
          puVar6[6] = puVar6[-6];
          *(unsigned short *)(puVar6 + 7) = *(unsigned short *)(puVar6 + -5);
          puVar6[4] = (unsigned int)&DAT_0055a790;
          *(unsigned char *)(puVar6 + 8) = *(unsigned char *)(puVar6 + -4);
          puVar6[10] = puVar6[-2];
          puVar6[0xb] = puVar6[-1];
          *puVar6 = (unsigned int)&DAT_00559ba8;
        }
        while (puVar6 != puVar5 + -0xc) {
          FUN_0011bf74();
          puVar5 = puVar5 + -0xc;
        }
        FUN_0011bf74(puVar6,temp_v14);
      }
      else {
        temp_v16 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
        if (temp_v16 < temp_v0 + 0x20) {
          temp_v16 = temp_v0 + 0x20;
        }
        puVar2 = (unsigned int *)FUN_002e6dac(temp_v16 * 0x30);
        puVar10 = puVar2;
        for (puVar5 = (unsigned int *)*piVar8; puVar5 != puVar6; puVar5 = puVar5 + 0xc) {
          if (puVar10 != (unsigned int *)0x0) {
            *puVar10 = (unsigned int)&DAT_0055a7d8;
            *(unsigned char *)(puVar10 + 1) = *(unsigned char *)(puVar5 + 1);
            temp_v2 = puVar5[3];
            puVar10[2] = puVar5[2];
            puVar10[3] = temp_v2;
            puVar10[4] = (unsigned int)&DAT_0055ac90;
            *(unsigned char *)(puVar10 + 5) = *(unsigned char *)(puVar5 + 5);
            puVar10[6] = puVar5[6];
            *(unsigned short *)(puVar10 + 7) = *(unsigned short *)(puVar5 + 7);
            puVar10[4] = (unsigned int)&DAT_0055a790;
            *(unsigned char *)(puVar10 + 8) = *(unsigned char *)(puVar5 + 8);
            temp_v2 = puVar5[0xb];
            puVar10[10] = puVar5[10];
            puVar10[0xb] = temp_v2;
            *puVar10 = (unsigned int)&DAT_00559ba8;
          }
          puVar10 = puVar10 + 0xc;
        }
        puVar5 = puVar2 + (((int)puVar6 - *piVar8) / 0x30) * 0xc;
        if (puVar5 != (unsigned int *)0x0) {
          *puVar5 = (unsigned int)&DAT_0055a7d8;
          *(unsigned char *)(puVar5 + 1) = *(unsigned char *)(temp_v14 + 1);
          puVar5[2] = temp_v6;
          puVar5[3] = temp_v7;
          puVar5[4] = (unsigned int)&DAT_0055ac90;
          *(unsigned char *)(puVar5 + 5) = *(unsigned char *)(temp_v14 + 5);
          puVar5[6] = temp_v10;
          *(unsigned short *)(puVar5 + 7) = *(unsigned short *)(temp_v14 + 7);
          puVar5[4] = (unsigned int)&DAT_0055a790;
          *(unsigned char *)(puVar5 + 8) = *(unsigned char *)(temp_v14 + 8);
          *puVar5 = (unsigned int)&DAT_00559ba8;
          puVar5[10] = temp_v13;
          puVar5[0xb] = uStack_64;
        }
        puVar10 = *(unsigned int **)(temp_v1 + 0xb0);
        puVar5 = puVar2 + (((int)puVar6 - *piVar8) / 0x30) * 0xc;
        for (; puVar6 != puVar10; puVar6 = puVar6 + 0xc) {
          puVar3 = puVar5 + 0xc;
          if (puVar3 != (unsigned int *)0x0) {
            *puVar3 = (unsigned int)&DAT_0055a7d8;
            *(unsigned char *)(puVar5 + 0xd) = *(unsigned char *)(puVar6 + 1);
            temp_v2 = puVar6[3];
            puVar5[0xe] = puVar6[2];
            puVar5[0xf] = temp_v2;
            puVar5[0x10] = (unsigned int)&DAT_0055ac90;
            *(unsigned char *)(puVar5 + 0x11) = *(unsigned char *)(puVar6 + 5);
            puVar5[0x12] = puVar6[6];
            *(unsigned short *)(puVar5 + 0x13) = *(unsigned short *)(puVar6 + 7);
            puVar5[0x10] = (unsigned int)&DAT_0055a790;
            *(unsigned char *)(puVar5 + 0x14) = *(unsigned char *)(puVar6 + 8);
            temp_v2 = puVar6[0xb];
            puVar5[0x16] = puVar6[10];
            puVar5[0x17] = temp_v2;
            *puVar3 = (unsigned int)&DAT_00559ba8;
          }
          puVar5 = puVar3;
        }
        puVar6 = (unsigned int *)*piVar8;
        puVar5 = *(unsigned int **)(temp_v1 + 0xb0);
        temp_v15 = ((int)puVar5 - (int)puVar6) / 0x30;
        for (; puVar6 != puVar5; puVar6 = puVar6 + 0xc) {
          (**(romwright_code **)*puVar6)(puVar6);
        }
        FUN_002e6e14(*piVar8);
        *piVar8 = (int)puVar2;
        *(unsigned int **)(temp_v1 + 0xb0) = puVar2 + temp_v15 * 0xc + 0xc;
        *(unsigned int **)(temp_v1 + 0xb4) = puVar2 + temp_v16 * 0xc;
      }
    }
    temp_v3 = temp_v3 + 1;
    temp_v4 = &DAT_0055a7d8;
  } while (temp_v3 < 100);
  temp_v1 = FUN_002e760a(0x78);
  if (temp_v1 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = FUN_002fafd8(temp_v1,0);
  }
  puVar6 = (unsigned int *)FUN_002e760a(0x14);
  if (puVar6 != (unsigned int *)0x0) {
    puVar6[1] = temp_v21;
    puVar6[2] = (unsigned int)FUN_00414484;
    puVar6[3] = 0;
    *puVar6 = (unsigned int)&DAT_0055cacc;
    puVar6[4] = temp_v2;
    FUN_00103f74(temp_v2,2);
    FUN_00103f54(temp_v2,puVar6,0,1);
  }
  FUN_0011b704(temp_v21 + 4,temp_v2,temp_v21 + 0xac,temp_v21 + 0xb8,temp_v21 + 0xc4);
  return;
}
