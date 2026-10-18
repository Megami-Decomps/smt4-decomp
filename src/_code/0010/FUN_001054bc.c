/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001054bc` (_code @ 0x1054bc, 0x1da bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
} param_1_stack;

extern unsigned char LAB_0010a9b4; /* 0x10a9b4 */
extern unsigned char LAB_002c4154; /* 0x2c4154 */
extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e39e4; /* 0x4e39e4 */
extern unsigned char DAT_004e39e8; /* 0x4e39e8 */
extern unsigned int DAT_004e39f8; /* 0x4e39f8 */
extern unsigned int DAT_004e39fc; /* 0x4e39fc */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern unsigned int DAT_004e3a10; /* 0x4e3a10 */
extern unsigned int DAT_004e3a24; /* 0x4e3a24 */
extern unsigned int DAT_004e3a28; /* 0x4e3a28 */
extern unsigned int DAT_004e3a38; /* 0x4e3a38 */
extern unsigned int DAT_004e3a3c; /* 0x4e3a3c */
extern unsigned char DAT_004e3a40; /* 0x4e3a40 */
extern unsigned int DAT_004e3a50; /* 0x4e3a50 */
extern unsigned int DAT_004e3a54; /* 0x4e3a54 */
extern int DAT_004e3aa0; /* 0x4e3aa0 */
extern int DAT_004e3b18; /* 0x4e3b18 */
extern unsigned char DAT_004e3b1c; /* 0x4e3b1c */
extern unsigned int uRam004e3b54; /* 0x4e3b54 */
extern unsigned int uRam004e3b58; /* 0x4e3b58 */
extern unsigned int uRam004e3b5c; /* 0x4e3b5c */
extern unsigned int uRam004e3b60; /* 0x4e3b60 */
extern unsigned int uRam004e3b64; /* 0x4e3b64 */
extern unsigned int uRam004e3b68; /* 0x4e3b68 */
extern unsigned int uRam004e3b6c; /* 0x4e3b6c */
extern unsigned int uRam004e3b70; /* 0x4e3b70 */
extern unsigned int uRam004e3b84; /* 0x4e3b84 */
extern unsigned int uRam004e3b88; /* 0x4e3b88 */
extern unsigned int uRam004e3b90; /* 0x4e3b90 */
extern unsigned int uRam004e3b94; /* 0x4e3b94 */
extern unsigned int DAT_004e3ba0; /* 0x4e3ba0 */
extern unsigned int DAT_004e3ba4; /* 0x4e3ba4 */
extern int DAT_004e3ba8; /* 0x4e3ba8 */
extern unsigned int DAT_004e3bac; /* 0x4e3bac */
extern unsigned int DAT_004e3bb4; /* 0x4e3bb4 */
extern unsigned int DAT_004e3bb8; /* 0x4e3bb8 */
extern unsigned int DAT_004e3bbc; /* 0x4e3bbc */
extern unsigned int DAT_004e3bc0; /* 0x4e3bc0 */
extern unsigned int DAT_004e3bc4; /* 0x4e3bc4 */
extern unsigned int DAT_004e3bc8; /* 0x4e3bc8 */
extern unsigned int DAT_004e3bcc; /* 0x4e3bcc */
extern unsigned int DAT_004e3bd0; /* 0x4e3bd0 */
extern unsigned int DAT_004e3bd4; /* 0x4e3bd4 */
extern unsigned int DAT_004e3bd8; /* 0x4e3bd8 */
extern unsigned int DAT_004e3bdc; /* 0x4e3bdc */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */
extern unsigned char DAT_004e3be1; /* 0x4e3be1 */

/* Supplied declaration required: FUN_0010a544. */
/* Supplied declaration required: FUN_0010d208. */
/* Supplied declaration required: FUN_0010e604. */
/* Supplied declaration required: FUN_0010ea10. */
/* Supplied declaration required: FUN_001124ac. */
/* Supplied declaration required: FUN_001131f8. */
/* Supplied declaration required: FUN_00113210. */
/* Supplied declaration required: FUN_002bef68. */
/* Supplied declaration required: FUN_002c24b8. */
/* Supplied declaration required: FUN_002c24dc. */
/* Supplied declaration required: FUN_002c2534. */
/* Supplied declaration required: FUN_002c2620. */
/* Supplied declaration required: FUN_002c2728. */
/* Supplied declaration required: FUN_002c2860. */
/* Supplied declaration required: FUN_002c2890. */


void FUN_001054bc(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int uStack_88;
  unsigned int temp_v3;
  unsigned int temp_v4 [2];
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [8];
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  if (param_1 != (unsigned int *)0x0) {
    DAT_004e3bb4 = *param_1;
    DAT_004e3bb8 = param_1[1];
    DAT_004e3bbc = param_1[2];
    DAT_004e3bc0 = param_1[3];
    DAT_004e3bc4 = param_1[4];
    DAT_004e3bc8 = param_1[5];
    DAT_004e3bcc = param_1[6];
    DAT_004e3bd0 = param_1[7];
    DAT_004e3bd4 = param_1[8];
    DAT_004e3bd8 = param_1[9];
    DAT_004e3bdc = param_1[10];
  }
  else {
    DAT_004e3bd0 = 0;
    DAT_004e3bcc = 0x500;
    DAT_004e3bb8 = 0x800;
    DAT_004e3bb4 = 0x100000;
    param_1 = &DAT_004e3bb4;
    DAT_004e3bd4 = 0;
  }
  FUN_001124ac(&LAB_0010a9b4,&LAB_002c4154);
  FUN_002c2890(&DAT_004e3b1c,2,*param_1);
  temp_v1 = DAT_004e3bdc;
  temp_v4[0] = 0x401;
  if (param_1[8] == 1) {
    temp_v3 = 2;
  }
  else {
    temp_v3 = 3;
  }
  temp_v5 = 0x410;
  temp_v10 = 0x10000;
  temp_v9 = 0x10000;
  temp_v8 = 0x10000;
  DAT_004e39e0 = 0x400;
  DAT_004e39f8 = 0xf0;
  DAT_004e39fc = 400;
  temp_v6 = temp_v3;
  DAT_004e39e4 = temp_v3;
  FUN_002c2860();
  FUN_002c2728(DAT_004e39e4,&DAT_004e39e8);
  temp_v2 = 0;
  if (temp_v2 < DAT_004e39e4) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_002c2620(*(unsigned int *)(&DAT_004e39e8 + temp_v0));
      FUN_002c2534(temp_v1,0xf0,400,temp_v10);
      temp_v7[0] = 0;
      FUN_002c24dc(0x600,temp_v7);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x4e3a00) = temp_v7[0];
    } while (temp_v2 < DAT_004e39e4);
  }
  FUN_002c24b8(0);
  DAT_004e3a3c = temp_v3;
  DAT_004e3a50 = 0xf0;
  DAT_004e3a54 = 0x140;
  DAT_004e3a38 = temp_v4[0];
  FUN_002c2860(temp_v4[0]);
  FUN_002c2728(DAT_004e3a3c,&DAT_004e3a40);
  temp_v2 = 0;
  if (temp_v2 < DAT_004e3a3c) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_002c2620(*(unsigned int *)(&DAT_004e3a40 + temp_v0));
      FUN_002c2534(temp_v1,0xf0,0x140,temp_v9);
      temp_v3 = 0;
      FUN_002c24dc(0x600,&temp_v3);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x4e3a58) = temp_v3;
    } while (temp_v2 < DAT_004e3a3c);
  }
  FUN_002c24b8(0);
  DAT_004e3a10 = temp_v6;
  DAT_004e3a24 = 0xf0;
  DAT_004e3a28 = 400;
  DAT_004e3a0c = temp_v5;
  FUN_002c2860(temp_v5);
  FUN_002c2728(DAT_004e3a10,0x4e3a14);
  temp_v2 = 0;
  if (temp_v2 < DAT_004e3a10) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_002c2620(*(unsigned int *)(temp_v0 + 0x4e3a14));
      FUN_002c2534(temp_v1,0xf0,400,temp_v8);
      temp_v4[0] = 0;
      FUN_002c24dc(0x600,temp_v4);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x4e3a2c) = temp_v4[0];
    } while (temp_v2 < DAT_004e3a10);
  }
  FUN_002c24b8(0);
  FUN_0010ea10(0,param_1[6],param_1[7]);
  FUN_002c2890(0x4e3b34,2,param_1[4],param_1[5]);
  FUN_0010d208(0x4e3b34);
  FUN_002c2890(&uStack_88,1,param_1[2],param_1[3]);
  FUN_0010e604(uStack_88);
  FUN_002bef68(&DAT_004e3b1c,0);
  uRam004e3b54 = 0x3e800000;
  uRam004e3b58 = 0x3e800000;
  uRam004e3b5c = 0x3e800000;
  uRam004e3b60 = 0;
  uRam004e3b64 = 0x3e800000;
  uRam004e3b68 = 0x3e800000;
  uRam004e3b6c = 0x3e800000;
  uRam004e3b70 = 0;
  uRam004e3b84 = 0x3f800000;
  uRam004e3b88 = 0x3f800000;
  uRam004e3b90 = 0;
  uRam004e3b94 = 0;
  if (DAT_004e3ba8 != 0) {
    DAT_004e3bac = 0;
  }
  DAT_004e3ba4 = 0x4682937d;
  DAT_004e3ba0 = 0;
  FUN_00113210(0x400,0x10a6fc);
  FUN_001131f8(0x4fe74faf,0,0x10e7f0);
  FUN_0010a544();
  DAT_004e3be0 = DAT_004e3aa0 != 0x500;
  DAT_004e3be1 = DAT_004e3b18 != 0x500;
  return;
}
