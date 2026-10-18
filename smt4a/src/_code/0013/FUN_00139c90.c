/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139c90` (_code @ 0x139c90, 0x17e bytes) from smt4a.cxi.
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

extern unsigned char LAB_0013f7b0; /* 0x13f7b0 */
extern unsigned char LAB_0019a598; /* 0x19a598 */
extern unsigned int DAT_0063fd88; /* 0x63fd88 */
extern unsigned int DAT_0063fd8c; /* 0x63fd8c */
extern unsigned char DAT_0063fd90; /* 0x63fd90 */
extern unsigned int DAT_0063fda0; /* 0x63fda0 */
extern unsigned int DAT_0063fda4; /* 0x63fda4 */
#ifndef ROMWRIGHT_STORAGE_DAT_0063fdb4_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0063fdb4_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0063fdb4_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_0063fdb4_1_1_size_check[(sizeof(union romwright_storage_DAT_0063fdb4_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0063fdb4_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_0063fdb4_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0063fdb4_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_0063fdb4_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0063fdb4_1_1 DAT_0063fdb4; /* 0x63fdb4 */
extern unsigned int DAT_0063fdb8; /* 0x63fdb8 */
extern unsigned int uRam0063fdcc; /* 0x63fdcc */
extern unsigned int uRam0063fdd0; /* 0x63fdd0 */
extern unsigned int DAT_0063fde0; /* 0x63fde0 */
extern unsigned int DAT_0063fde4; /* 0x63fde4 */
extern unsigned int DAT_0063fde8; /* 0x63fde8 */
extern unsigned int DAT_0063fdf8; /* 0x63fdf8 */
extern unsigned int DAT_0063fdfc; /* 0x63fdfc */
extern int DAT_0063fe48; /* 0x63fe48 */
extern int DAT_0063fec0; /* 0x63fec0 */
extern unsigned char DAT_0063fec4; /* 0x63fec4 */
extern unsigned int uRam0063fefc; /* 0x63fefc */
extern unsigned int uRam0063ff00; /* 0x63ff00 */
extern unsigned int uRam0063ff04; /* 0x63ff04 */
extern unsigned int uRam0063ff08; /* 0x63ff08 */
extern unsigned int uRam0063ff0c; /* 0x63ff0c */
extern unsigned int uRam0063ff10; /* 0x63ff10 */
extern unsigned int uRam0063ff14; /* 0x63ff14 */
extern unsigned int uRam0063ff18; /* 0x63ff18 */
extern unsigned int uRam0063ff2c; /* 0x63ff2c */
extern unsigned int uRam0063ff30; /* 0x63ff30 */
extern unsigned int uRam0063ff38; /* 0x63ff38 */
extern unsigned int uRam0063ff3c; /* 0x63ff3c */
extern unsigned int DAT_0063ff48; /* 0x63ff48 */
extern unsigned int DAT_0063ff4c; /* 0x63ff4c */
extern int DAT_0063ff50; /* 0x63ff50 */
extern unsigned int DAT_0063ff54; /* 0x63ff54 */
extern unsigned int DAT_0063ff5c; /* 0x63ff5c */
extern unsigned int DAT_0063ff60; /* 0x63ff60 */
extern unsigned int DAT_0063ff64; /* 0x63ff64 */
extern unsigned int DAT_0063ff68; /* 0x63ff68 */
extern unsigned int DAT_0063ff6c; /* 0x63ff6c */
extern unsigned int DAT_0063ff70; /* 0x63ff70 */
extern unsigned int DAT_0063ff74; /* 0x63ff74 */
extern unsigned int DAT_0063ff78; /* 0x63ff78 */
extern unsigned int DAT_0063ff7c; /* 0x63ff7c */
extern unsigned int DAT_0063ff80; /* 0x63ff80 */
extern unsigned int DAT_0063ff84; /* 0x63ff84 */
extern unsigned char DAT_0063ff88; /* 0x63ff88 */
extern unsigned char DAT_0063ff89; /* 0x63ff89 */

/* Supplied declaration required: FUN_0013f048. */
/* Supplied declaration required: FUN_00142990. */
/* Supplied declaration required: FUN_001429b8. */
/* Supplied declaration required: FUN_001445c4. */
/* Supplied declaration required: FUN_00144c9c. */
/* Supplied declaration required: FUN_00149840. */
/* Supplied declaration required: FUN_00149864. */
/* Supplied declaration required: FUN_00149950. */
/* Supplied declaration required: FUN_00149a88. */
/* Supplied declaration required: FUN_00149ae0. */
/* Supplied declaration required: FUN_0014a82c. */
/* Supplied declaration required: FUN_0014a844. */
/* Supplied declaration required: FUN_00161044. */
/* Supplied declaration required: FUN_00161074. */
/* Supplied declaration required: FUN_0017cfe8. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00139c90(unsigned int *param_1)

{
/* irregular: 16 native warning(s); review required */
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
    DAT_0063ff5c = *param_1;
    DAT_0063ff60 = param_1[1];
    DAT_0063ff64 = param_1[2];
    DAT_0063ff68 = param_1[3];
    DAT_0063ff6c = param_1[4];
    DAT_0063ff70 = param_1[5];
    DAT_0063ff74 = param_1[6];
    DAT_0063ff78 = param_1[7];
    DAT_0063ff7c = param_1[8];
    DAT_0063ff80 = param_1[9];
    DAT_0063ff84 = param_1[10];
  }
  else {
    DAT_0063ff78 = 0;
    DAT_0063ff74 = 0x500;
    DAT_0063ff60 = 0x800;
    DAT_0063ff5c = 0x100000;
    param_1 = &DAT_0063ff5c;
    DAT_0063ff7c = 0;
  }
  FUN_00149ae0(&LAB_0013f7b0,&LAB_0019a598);
  FUN_001429b8(&DAT_0063fec4,2,*param_1);
  temp_v1 = DAT_0063ff84;
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
  DAT_0063fd88 = 0x400;
  DAT_0063fda0 = 0xf0;
  DAT_0063fda4 = 400;
  temp_v6 = temp_v3;
  DAT_0063fd8c = temp_v3;
  FUN_00161044();
  FUN_00149950(DAT_0063fd8c,&DAT_0063fd90);
  temp_v2 = 0;
  if (temp_v2 < DAT_0063fd8c) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_00161074(*(unsigned int *)(&DAT_0063fd90 + temp_v0));
      FUN_00149864(temp_v1,0xf0,400,temp_v10);
      temp_v7[0] = 0;
      FUN_00149a88(0x600,temp_v7);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x63fda8) = temp_v7[0];
    } while (temp_v2 < DAT_0063fd8c);
  }
  FUN_00149840(0);
  DAT_0063fde4 = temp_v3;
  DAT_0063fdf8 = 0xf0;
  DAT_0063fdfc = 0x140;
  DAT_0063fde0 = temp_v4[0];
  FUN_00161044(temp_v4[0]);
  FUN_00149950(DAT_0063fde4,&DAT_0063fde8);
  temp_v2 = 0;
  if (temp_v2 < DAT_0063fde4) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_00161074((&DAT_0063fde8)[temp_v2]);
      FUN_00149864(temp_v1,0xf0,0x140,temp_v9);
      temp_v3 = 0;
      FUN_00149a88(0x600,&temp_v3);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x63fe00) = temp_v3;
    } while (temp_v2 < DAT_0063fde4);
  }
  FUN_00149840(0);
  DAT_0063fdb8 = temp_v6;
  uRam0063fdcc = 0xf0;
  uRam0063fdd0 = 400;
  DAT_0063fdb4.whole = temp_v5;
  FUN_00161044(temp_v5);
  FUN_00149950(DAT_0063fdb8,0x63fdbc);
  temp_v2 = 0;
  if (temp_v2 < DAT_0063fdb8) {
    do {
      temp_v0 = temp_v2 * 4;
      FUN_00161074(*(unsigned int *)(temp_v0 + 0x63fdbc));
      FUN_00149864(temp_v1,0xf0,400,temp_v8);
      temp_v4[0] = 0;
      FUN_00149a88(0x600,temp_v4);
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v0 + 0x63fdd4) = temp_v4[0];
    } while (temp_v2 < DAT_0063fdb8);
  }
  FUN_00149840(0);
  FUN_00144c9c(0,param_1[6],param_1[7]);
  FUN_001429b8(0x63fedc,2,param_1[4],param_1[5]);
  FUN_00142990(0x63fedc);
  FUN_001429b8(&uStack_88,1,param_1[2],param_1[3]);
  FUN_001445c4(uStack_88);
  FUN_0017cfe8(&DAT_0063fec4,0);
  uRam0063fefc = 0x3e800000;
  uRam0063ff00 = 0x3e800000;
  uRam0063ff04 = 0x3e800000;
  uRam0063ff08 = 0;
  uRam0063ff0c = 0x3e800000;
  uRam0063ff10 = 0x3e800000;
  uRam0063ff14 = 0x3e800000;
  uRam0063ff18 = 0;
  uRam0063ff2c = 0x3f800000;
  uRam0063ff30 = 0x3f800000;
  uRam0063ff38 = 0;
  uRam0063ff3c = 0;
  if (DAT_0063ff50 != 0) {
    DAT_0063ff54 = 0;
  }
  DAT_0063ff4c = 0x4682937d;
  DAT_0063ff48 = 0;
  FUN_0014a844(0x400,0x13f4ac);
  FUN_0014a82c(0x4fe74faf,0,0x1447b0);
  FUN_0013f048();
  DAT_0063ff88 = DAT_0063fe48 != 0x500;
  DAT_0063ff89 = DAT_0063fec0 != 0x500;
  return;
}
