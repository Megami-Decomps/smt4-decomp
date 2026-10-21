/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fdd1c` (_code @ 0x3fdd1c, 0x55c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdMemoryAlloc(...);
int FUN_0018eb44(void);
int asdMemoryAllocAligned(...);
int FUN_001c3bb8(...);
int resourceCalculateWorkspaceSizes(unsigned int, int *, unsigned int [2]);
int FUN_005074e8(...);
int FUN_00507868(...);
int FUN_005078e4(...);

/* stack frame of param_2: 32 slot(s), 128 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

extern unsigned char LAB_003fe1d0; /* 0x3fe1d0 */
extern unsigned char LAB_003fe1d8; /* 0x3fe1d8 */
extern unsigned char LAB_003fe1e0; /* 0x3fe1e0 */
extern unsigned char LAB_003fe1e8; /* 0x3fe1e8 */
extern unsigned char LAB_003fe1f0; /* 0x3fe1f0 */
extern unsigned char LAB_003fe1f8; /* 0x3fe1f8 */
extern unsigned char LAB_003fe200; /* 0x3fe200 */
extern unsigned char LAB_003fe278; /* 0x3fe278 */
extern unsigned char LAB_003fe280; /* 0x3fe280 */
extern unsigned char LAB_003fe288; /* 0x3fe288 */
extern unsigned char LAB_003fe290; /* 0x3fe290 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0018eb44. */
/* Supplied declaration required: asdMemoryAllocAligned. */
/* Supplied declaration required: FUN_001c3bb8. */
/* Supplied declaration required: resourceCalculateWorkspaceSizes. */
/* Supplied declaration required: FUN_005074e8. */
/* Supplied declaration required: FUN_00507868. */
/* Supplied declaration required: FUN_005078e4. */


void FUN_003fdd1c(int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  unsigned int temp_v35 [2];
  int temp_v36;
  int temp_v37;
  
  *(unsigned int *)(param_1 + 0x210) = param_2;
  temp_v35[0] = 0x40;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v23 = 0;
  temp_v24 = 0;
  temp_v25 = 0;
  temp_v26 = 0;
  temp_v27 = 0;
  temp_v28 = 0;
  temp_v29 = 0;
  temp_v30 = 0;
  resourceCalculateWorkspaceSizes(*(unsigned int *)(param_1 + 0x210),&temp_v7,temp_v35);
  temp_v0 = 0x100;
  asdMemoryAllocAligned(0x100,0x100,0,temp_v10 + temp_v11 + temp_v7 + temp_v9 + temp_v12,4,1);
  *(unsigned int *)(param_1 + 0x260) = temp_v0;
  temp_v0 = 0x10000;
  asdMemoryAllocAligned(0x10000,0x100,0,temp_v8,4,1);
  *(unsigned int *)(param_1 + 0x264) = temp_v0;
  temp_v2 = *(int *)(param_1 + 0x1b0);
  if (temp_v2 != 0) {
    temp_v6 = *(unsigned int *)(param_1 + 0x210);
    FUN_005078e4(&temp_v33,temp_v6,param_1 + 0x10c,*(unsigned int *)(param_1 + 0x260),temp_v0,&temp_v7);
    if (temp_v34 >= 0) {
      FUN_005074e8(&temp_v31,temp_v6,temp_v2 + 0xe4,temp_v33,&temp_v7);
      temp_v33 = temp_v31;
      temp_v34 = temp_v32;
      if (temp_v32 < 0) {
        temp_v36 = temp_v33;
        temp_v37 = temp_v34;
      }
      else {
        FUN_00507868(&temp_v36,temp_v6,param_1 + 0x114,temp_v31,&temp_v7);
      }
    }
    else {
      temp_v36 = temp_v33;
      temp_v37 = temp_v34;
    }
    temp_v2 = *(int *)(param_1 + 0x1b0);
  }
  else {
    temp_v6 = *(unsigned int *)(param_1 + 0x210);
    FUN_005078e4(&temp_v33,temp_v6,param_1 + 0x10c,*(unsigned int *)(param_1 + 0x260),temp_v0,&temp_v7);
    temp_v2 = param_1;
    if (-1 < temp_v34) {
      FUN_005074e8(&temp_v31,temp_v6,param_1 + 0xe4,temp_v33,&temp_v7);
      temp_v33 = temp_v31;
      temp_v34 = temp_v32;
      if (-1 >= temp_v32) {
        temp_v36 = temp_v33;
        temp_v37 = temp_v34;
      }
      else {
        FUN_00507868(&temp_v36,temp_v6,param_1 + 0x114,temp_v31,&temp_v7);
      }
    }
    else {
      temp_v36 = temp_v33;
      temp_v37 = temp_v34;
    }
  }
  *(int *)(param_1 + 0x108) = temp_v2 + 0xe4;
  FUN_0018eb44();
  temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x210) + 0x38) * 0x58;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,temp_v4,1);
  temp_v3 = 0;
  temp_v4 = temp_v4 / 0x58;
  *(unsigned int *)(param_1 + 0x254) = temp_v0;
  *(unsigned int *)(param_1 + 600) = temp_v4;
  if (temp_v4 != 0) {
    do {
      puVar2 = (unsigned char *)(*(int *)(param_1 + 0x254) + temp_v3 * 0x58);
      if (puVar2 != (unsigned char *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 2;
        puVar2[2] = 0xff;
        puVar2[3] = 0xff;
        *(unsigned int *)(puVar2 + 4) = 0;
        puVar2[8] = 0;
        puVar2[9] = 2;
        puVar2[10] = 0xff;
        puVar2[0xb] = 0xff;
        *(unsigned int *)(puVar2 + 0xc) = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 2;
        puVar2[0x12] = 0xff;
        puVar2[0x13] = 0xff;
        *(unsigned int *)(puVar2 + 0x14) = 0;
        puVar2[0x18] = 0;
        puVar2[0x19] = 2;
        puVar2[0x1a] = 0xff;
        puVar2[0x1b] = 0xff;
        *(unsigned int *)(puVar2 + 0x1c) = 0;
        puVar2[0x20] = 0;
        puVar2[0x21] = 2;
        puVar2[0x22] = 0xff;
        puVar2[0x23] = 0xff;
        *(unsigned int *)(puVar2 + 0x24) = 0;
        puVar2[0x28] = 0;
        puVar2[0x29] = 3;
        puVar2[0x2a] = 0xff;
        puVar2[0x2b] = 0xff;
        *(unsigned int *)(puVar2 + 0x2c) = 0;
        puVar2[0x30] = 0;
        puVar2[0x31] = 2;
        puVar2[0x32] = 0xff;
        puVar2[0x33] = 0xff;
        *(unsigned int *)(puVar2 + 0x34) = 0;
        puVar2[0x38] = 0;
        puVar2[0x39] = 2;
        puVar2[0x3a] = 0xff;
        puVar2[0x3b] = 0xff;
        *(unsigned int *)(puVar2 + 0x3c) = 0;
        puVar2[0x40] = 0;
        puVar2[0x41] = 2;
        puVar2[0x42] = 0xff;
        puVar2[0x43] = 0xff;
        *(unsigned int *)(puVar2 + 0x44) = 0;
        puVar2[0x48] = 0;
        puVar2[0x49] = 2;
        puVar2[0x4a] = 0xff;
        puVar2[0x4b] = 0xff;
        *(unsigned int *)(puVar2 + 0x4c) = 0;
        puVar2[0x50] = 0;
        puVar2[0x51] = 2;
        puVar2[0x52] = 0xff;
        puVar2[0x53] = 0xff;
        *(unsigned int *)(puVar2 + 0x54) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(unsigned int *)(param_1 + 600));
  }
  temp_v1 = *(int *)(param_1 + 600);
  temp_v5 = *(int *)(param_1 + 0x254);
  for (temp_v2 = temp_v5; temp_v5 + temp_v1 * 0x58 != temp_v2; temp_v2 = temp_v2 + 0x58) {
    temp_v0 = *(unsigned int *)
             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x210) + 0x34) +
                               ((temp_v2 - temp_v5) / 0x58) * 0x2c) + 8) + 0x24);
    FUN_001c3bb8(temp_v0,temp_v2,&LAB_003fe1d0);
    FUN_001c3bb8(temp_v0,temp_v2 + 8,&LAB_003fe1d8);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x10,&LAB_003fe1e0);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x18,&LAB_003fe1e8);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x20,&LAB_003fe1f0);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x28,&LAB_003fe1f8);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x30,&LAB_003fe200);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x38,&LAB_003fe278);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x40,&LAB_003fe280);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x48,&LAB_003fe288);
    FUN_001c3bb8(temp_v0,temp_v2 + 0x50,&LAB_003fe290);
  }
  textFormatBuffer(param_1 + 0x214,*(unsigned int *)(*(int *)(param_1 + 0x210) + 0x84));
  return;
}

} /* extern "C" */
