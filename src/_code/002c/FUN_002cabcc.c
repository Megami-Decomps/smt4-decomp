/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cabcc` (_code @ 0x2cabcc, 0x25c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_002ca6b4; /* 0x2ca6b4 */
extern unsigned char LAB_002caeac; /* 0x2caeac */
extern unsigned char LAB_002caebc; /* 0x2caebc */
extern unsigned char LAB_002caec8; /* 0x2caec8 */
extern unsigned char LAB_002caedc; /* 0x2caedc */
extern unsigned char LAB_002e07ac; /* 0x2e07ac */
extern unsigned char LAB_002eb6f4; /* 0x2eb6f4 */
extern int FUN_002f4af0(); /* 0x2f4af0 */
extern unsigned char LAB_002f4b78; /* 0x2f4b78 */
extern unsigned char LAB_00309440; /* 0x309440 */
extern int FUN_0030947c(); /* 0x30947c */
extern unsigned char LAB_0031008c; /* 0x31008c */
extern int FUN_00317068(); /* 0x317068 */
extern unsigned char LAB_0031b978; /* 0x31b978 */
extern int FUN_00321b78(); /* 0x321b78 */
extern unsigned int *DAT_00432cc8; /* 0x432cc8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024c3f8. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_002cabcc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned char *temp_v9;
  romwright_code *temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  
  temp_v9 = (unsigned char *)0x1;
  puVar1 = (unsigned int *)FUN_002c4b84(0x10000,0x100,0,0x764);
  temp_v6 = 0;
  DAT_00432cc8 = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 0;
  puVar1[0x54] = 0;
  FUN_002c5b04(0x34,0);
  temp_v1 = 0;
  do {
    FUN_002c5ab8(0x34,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  temp_v5 = (float)temp_v6;
  temp_v7 = 0.5f;
  temp_v6 = 0x43480000;
  temp_v8 = 520.0f;
  temp_v0 = 0;
  do {
    FUN_0024c3f8(0x34,temp_v0 * 1000,&temp_v10,&temp_v9);
    temp_v3 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&puVar1[temp_v0 * 2 + 0x32] = temp_v3;
    temp_v4 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v0 * 2 + 0x33] = temp_v4;
    puVar1[temp_v0 * 2 + 2] = (float)temp_v6 - temp_v3 * temp_v7;
    temp_v2 = temp_v0 + 1;
    temp_v3 = (float)VectorSignedToFloat(temp_v0 * (int)temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v0 * 2 + 3] = temp_v3 + temp_v8;
    temp_v0 = temp_v2;
  } while (temp_v2 < 0xc);
  temp_v2 = 0xc;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v2 - 1;
    puVar1[temp_v0 * 2 + 0x1a] = 160.0f - (float)puVar1[temp_v0 * 2 + 0x32] * temp_v7;
    puVar1[temp_v0 * 2 + 0x1b] = temp_v5 * (float)puVar1[temp_v0 * 2 + 0x33] + 240.0f;
    temp_v0 = temp_v0 + 1;
    temp_v5 = temp_v5 + 1.0f;
  } while (temp_v2 != 0);
  puVar1[0x52] = -(float)puVar1[0x49];
  puVar1[0x54] = 0x3f800000;
  puVar1[0x1d6] = 0;
  *(unsigned char *)(puVar1 + 0x1d7) = 0;
  puVar1[0x1d8] = 0xa5;
  DAT_00432cc8[0x53] = 0;
  puVar1[0x4b] = (unsigned int)&LAB_00309440;
  puVar1[0x4c] = (unsigned int)FUN_00317068;
  puVar1[0x4d] = (unsigned int)FUN_0030947c;
  puVar1[0x4e] = (unsigned int)&LAB_0031008c;
  puVar1[0x4f] = (unsigned int)FUN_00321b78;
  puVar1[0x50] = (unsigned int)&LAB_002eb6f4;
  puVar1[0x51] = (unsigned int)&LAB_0031b978;
  puVar1[0x53] = 0;
  *(unsigned char *)(puVar1 + 1) = 1;
  if (param_1 != 0) {
    *(unsigned char *)(puVar1 + 1) = 0;
  }
  *(unsigned char *)((int)puVar1 + 5) = 0;
  temp_v9 = &LAB_002ca6b4;
  temp_v10 = FUN_002f4af0;
  temp_v11 = 0;
  puVar2 = &LAB_002caeac;
  FUN_002c5978(&LAB_002caeac,2,0);
  *puVar1 = (unsigned int)puVar2;
  temp_v9 = &LAB_002e07ac;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  temp_v12 = puVar2;
  FUN_002c4c00(&LAB_002caebc,0x7a,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_002e07ac;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  FUN_002c4c00(&LAB_002caec8,0xd8,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_002f4b78;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  FUN_002c4c00(&LAB_002caedc,0xe8,0);
  return;
}
