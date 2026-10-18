/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045a6a4` (_code @ 0x45a6a4, 0x450 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 6 slot(s), 15 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned char sp104; /* 0x104: local_104 */
    unsigned int sp160; /* 0x160: local_160 */
} param_3_stack;

extern unsigned char LAB_0045b30c; /* 0x45b30c */
extern int FUN_0045b510(); /* 0x45b510 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00158bf8. */
/* Supplied declaration required: FUN_0015fcec. */
/* Supplied declaration required: FUN_0016d1f4. */
/* Supplied declaration required: FUN_00177cdc. */
/* Supplied declaration required: FUN_00192de4. */
extern unsigned char *FUN_001a04e0(unsigned char *, unsigned int);
extern unsigned int FUN_001a1e28(void);
/* Supplied declaration required: FUN_001b14dc. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_0042c4cc(unsigned char *);
extern unsigned char *FUN_0042cbd8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0045b170. */
/* Supplied declaration required: FUN_00500cac. */
/* Supplied declaration required: FUN_00500d38. */
extern unsigned char *FUN_00500df8(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00500e74. */
/* Supplied declaration required: FUN_00500ee4. */
/* Supplied declaration required: FUN_00500f3c. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_0045a6a4(int *param_1,unsigned int *param_2,int *param_3)

{
/* irregular: irregular input(s): in_d8; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned char *puVar8;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char *puVar12;
  unsigned int *puVar13;
  unsigned long long in_d8;
  unsigned int temp_v8 [4];
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [24];
  unsigned char temp_v11 [8];
  unsigned char temp_v12 [28];
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [32];
  unsigned char temp_v15 [8];
  unsigned char temp_v16 [124];
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned int temp_v19;
  unsigned char *temp_v20;
  
  puVar7 = temp_v8;
  puVar13 = param_2;
  if ((char)param_3[3] != '\0') {
    puVar13 = param_2 + ((*param_3 + 0xfU) & 0xfffffff0) +
                        (unsigned int)*(unsigned short *)((int)param_3 + 6) * 0x112;
    puVar4 = (unsigned int *)0x0;
    if (puVar13 != (unsigned int *)0x0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar4 = puVar13 + 2;
      FUN_002f5020(puVar4,&LAB_0045b30c,0x20,2);
      puVar4[0x10] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = 0;
      puVar4 = puVar4 + -2;
    }
    param_1[0x34] = (int)puVar4;
    temp_v8[0] = (unsigned int)*(unsigned char *)((int)param_3 + 0xd);
    puVar13 = puVar13 + 0x19;
    FUN_0045b170(puVar4,param_2,*(unsigned short *)((int)param_3 + 6),*param_3);
  }
  temp_v1 = *(unsigned short *)(param_3 + 1);
  temp_v7 = 0;
  temp_v0 = (unsigned int)(((unsigned long long)((temp_v1 + 1) * 0x6c) * 0x97b425ed + 0x97b425ed) >> 0x26);
  if (temp_v0 != 0) {
    in_d8 = 0;
  }
  param_1[0x11] = temp_v0;
  param_1[0x10] = (int)puVar13;
  if (temp_v0 != 0) {
    do {
      puVar12 = (unsigned char *)(param_1[0x10] + temp_v7 * 0x6c);
      if (puVar12 != (unsigned char *)0x0) {
        *puVar12 = 0;
        puVar12[1] = 0;
        temp_v3 = FUN_001a1e28();
        nn_math_ARMv6_MTX34CopyAsm(puVar12 + 4,temp_v3);
        temp_v3 = FUN_001a1e28();
        nn_math_ARMv6_MTX34CopyAsm(puVar12 + 0x34,temp_v3);
        *(int *)(puVar12 + 100) = (int)in_d8;
        *(int *)(puVar12 + 0x68) = (int)in_d8;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < (unsigned int)param_1[0x11]);
  }
  temp_v2 = *(unsigned short *)((int)param_3 + 6);
  puVar4 = puVar13 + (temp_v1 + 1) * 0x1b;
  temp_v7 = 0;
  temp_v0 = ((unsigned int)temp_v2 * 0x278) / 0x278;
  param_1[1] = temp_v0;
  if (temp_v0 != 0) {
    puVar13 = (unsigned int *)0xff000000;
  }
  *param_1 = (int)puVar4;
  if (temp_v0 != 0) {
    do {
      puVar12 = (unsigned char *)(*param_1 + temp_v7 * 0x278);
      if (puVar12 != (unsigned char *)0x0) {
        *puVar12 = 0;
        temp_v4 = FUN_0042c4cc(puVar12 + 4);
        temp_v4 = temp_v4 + 0x1b0;
        FUN_002f5020(temp_v4,FUN_0045b510,0x10,8);
        temp_v5 = 0;
        *(unsigned int **)(temp_v4 + 0x80) = puVar13;
        do {
          temp_v6 = (temp_v4 - 0x1b4) + temp_v5 * 4;
          temp_v5 = temp_v5 + 2;
          *(unsigned int *)(temp_v6 + 0x238) = 0;
          *(unsigned int *)(temp_v6 + 600) = 0;
          *(unsigned int *)(temp_v6 + 0x23c) = 0;
          *(unsigned int *)(temp_v6 + 0x25c) = 0;
        } while (temp_v5 < 8);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < (unsigned int)param_1[1]);
  }
  temp_v1 = *(unsigned short *)(param_3 + 2);
  temp_v7 = 0;
  temp_v0 = ((unsigned int)temp_v1 * 0x218) / 0x218;
  param_1[3] = temp_v0;
  param_1[2] = (int)(puVar4 + (unsigned int)temp_v2 * 0x9e);
  if (temp_v0 != 0) {
    do {
      puVar12 = (unsigned char *)(param_1[2] + temp_v7 * 0x218);
      if (puVar12 != (unsigned char *)0x0) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        FUN_002e6354(puVar12 + 8,0x210);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < (unsigned int)param_1[3]);
  }
  puVar13 = puVar4 + (unsigned int)temp_v2 * 0x9e + (unsigned int)temp_v1 * 0x86;
  if (*(char *)((int)param_3 + 10) != '\0') {
    if (puVar13 != (unsigned int *)0x0) {
      puVar13[3] = 0;
      puVar13[4] = 0;
      *(unsigned char *)(puVar13 + 5) = 0;
      *(unsigned char *)((int)puVar13 + 0x15) = 2;
      *(unsigned char *)((int)puVar13 + 0x16) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x17) = 0xff;
      puVar13[6] = 0;
      *(unsigned char *)(puVar13 + 7) = 0;
      *(unsigned char *)((int)puVar13 + 0x1d) = 2;
      *(unsigned char *)((int)puVar13 + 0x1e) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x1f) = 0xff;
      puVar13[8] = 0;
      *(unsigned char *)(puVar13 + 9) = 0;
      *(unsigned char *)((int)puVar13 + 0x25) = 2;
      *(unsigned char *)((int)puVar13 + 0x26) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x27) = 0xff;
      puVar13[10] = 0;
      *(unsigned char *)(puVar13 + 0xb) = 1;
      *(unsigned char *)((int)puVar13 + 0x2d) = 2;
      *(unsigned char *)((int)puVar13 + 0x2e) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x2f) = 0xff;
      puVar13[0xc] = 0;
      *(unsigned char *)(puVar13 + 0xd) = 1;
      *(unsigned char *)((int)puVar13 + 0x35) = 2;
      *(unsigned char *)((int)puVar13 + 0x36) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x37) = 0xff;
      puVar13[0xe] = 0;
      *(unsigned char *)(puVar13 + 0xf) = 1;
      *(unsigned char *)((int)puVar13 + 0x3d) = 2;
      *(unsigned char *)((int)puVar13 + 0x3e) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x3f) = 0xff;
      puVar13[0x10] = 0;
      *(unsigned char *)(puVar13 + 0x11) = 1;
      *(unsigned char *)((int)puVar13 + 0x45) = 2;
      *(unsigned char *)((int)puVar13 + 0x46) = 0xff;
      *(unsigned char *)((int)puVar13 + 0x47) = 0xff;
      puVar13[0x12] = 0;
    }
    param_1[0x33] = (int)puVar13;
    temp_v19 = ((int)puVar13 + 0x5bU) & 0xfffffff0;
    temp_v20 = (unsigned char *)temp_v19;
    temp_v20 = (unsigned char *)FUN_0042cbd8(temp_v19,1);
    temp_v20 = (unsigned char *)FUN_001a04e0(temp_v20,1);
    FUN_00158bf8(temp_v16);
    temp_v17 = 0;
    temp_v18 = 0;
    puVar12 = temp_v16;
    FUN_0015fcec(puVar12,temp_v20);
    temp_v20 = puVar12;
    FUN_0016d1f4(temp_v8);
    temp_v14[0] = 0;
    if (*(char *)((int)param_3 + 0xb) != '\0') {
      temp_v8[0] = romwright_piece_3_1(temp_v8[0]._1_3_,1);
    }
    temp_v20 = (unsigned char *)FUN_00500df8(temp_v14,temp_v20,0);
    FUN_00500d38(temp_v8,temp_v20,0);
    puVar12 = temp_v9;
    temp_v20 = (unsigned char *)puVar7;
    FUN_00500e74(puVar12,puVar7,0);
    puVar8 = temp_v10;
    temp_v20 = puVar12;
    FUN_00177cdc(puVar8,puVar12,0,1);
    puVar12 = temp_v11;
    temp_v20 = puVar8;
    FUN_00500ee4(puVar12,puVar8,0);
    puVar8 = temp_v12;
    temp_v20 = puVar12;
    FUN_00500cac(puVar8,puVar12,0);
    puVar12 = temp_v13;
    temp_v20 = puVar8;
    FUN_00500f3c(puVar12,puVar8,0);
    puVar8 = temp_v15;
    temp_v20 = puVar12;
    FUN_00192de4(puVar8,puVar12,1);
    temp_v20 = puVar8;
    FUN_001b14dc(&temp_v19,param_1[0x33] + 0xc);
  }
  return;
}
