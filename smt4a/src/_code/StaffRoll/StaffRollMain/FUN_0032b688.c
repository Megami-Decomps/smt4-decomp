/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b688` (_code @ 0x32b688, 0x25c bytes) from smt4a.cxi.
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

extern unsigned char LAB_0032b00c; /* 0x32b00c */
extern unsigned char LAB_0032b968; /* 0x32b968 */
extern unsigned char LAB_0032b978; /* 0x32b978 */
extern unsigned char LAB_0032b984; /* 0x32b984 */
extern unsigned char LAB_0032b998; /* 0x32b998 */
extern unsigned char LAB_00358918; /* 0x358918 */
extern unsigned char LAB_0036b1ec; /* 0x36b1ec */
extern int FUN_0037a118(); /* 0x37a118 */
extern unsigned char LAB_0037a1a0; /* 0x37a1a0 */
extern unsigned char LAB_00399408; /* 0x399408 */
extern int FUN_00399444(); /* 0x399444 */
extern unsigned char LAB_003a43b0; /* 0x3a43b0 */
extern int FUN_003ae810(); /* 0x3ae810 */
extern unsigned char LAB_003b5e20; /* 0x3b5e20 */
extern unsigned char LAB_003bfb28; /* 0x3bfb28 */
extern unsigned int *DAT_0056fcc8; /* 0x56fcc8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002e1208. */


void FUN_0032b688(int param_1)

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
  
  puVar1 = (unsigned int *)0x10000;
  temp_v9 = (unsigned char *)0x1;
  FUN_00163060(0x10000,0x100,0,0x764);
  temp_v6 = 0;
  DAT_0056fcc8 = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 0;
  puVar1[0x54] = 0;
  FUN_0013f1b8(0x29,0);
  temp_v1 = 0;
  do {
    FUN_0014afd0(0x29,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  temp_v5 = (float)temp_v6;
  temp_v7 = 0.5f;
  temp_v6 = 0x43480000;
  temp_v8 = 520.0f;
  temp_v0 = 0;
  do {
    FUN_002e1208(0x29,temp_v0 * 1000,&temp_v10,&temp_v9);
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
  *(float *)&puVar1[0x52] = -(float)puVar1[0x49];
  puVar1[0x54] = 0x3f800000;
  puVar1[0x1d6] = 0;
  *(unsigned char *)(puVar1 + 0x1d7) = 0;
  puVar1[0x1d8] = 0xa5;
  DAT_0056fcc8[0x53] = 0;
  puVar1[0x4b] = (unsigned int)&LAB_00399408;
  puVar1[0x4c] = (unsigned int)FUN_003ae810;
  puVar1[0x4d] = (unsigned int)FUN_00399444;
  puVar1[0x4e] = (unsigned int)&LAB_003a43b0;
  puVar1[0x4f] = (unsigned int)&LAB_003bfb28;
  puVar1[0x50] = (unsigned int)&LAB_0036b1ec;
  puVar1[0x51] = (unsigned int)&LAB_003b5e20;
  puVar1[0x53] = 0;
  *(unsigned char *)(puVar1 + 1) = 1;
  if (param_1 != 0) {
    *(unsigned char *)(puVar1 + 1) = 0;
  }
  *(unsigned char *)((int)puVar1 + 5) = 0;
  temp_v9 = &LAB_0032b00c;
  temp_v10 = FUN_0037a118;
  temp_v11 = 0;
  puVar2 = &LAB_0032b968;
  FUN_0014e38c(&LAB_0032b968,4,0);
  *puVar1 = (unsigned int)puVar2;
  temp_v9 = &LAB_00358918;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  temp_v12 = puVar2;
  FUN_0015155c(&LAB_0032b978,0x7e,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_00358918;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  FUN_0015155c(&LAB_0032b984,0xda,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_0037a1a0;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  FUN_0015155c(&LAB_0032b998,0xec,0);
  return;
}
