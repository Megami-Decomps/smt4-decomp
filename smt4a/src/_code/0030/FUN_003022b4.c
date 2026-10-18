/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003022b4` (_code @ 0x3022b4, 0xb2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003022b4_arg0 fn_003022b4_arg0;
struct fn_003022b4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined1 field_0x24; /* +0x24 */
    undefined1 field_0x25; /* +0x25 */
    undefined1 field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x11];
    undefined4 field_0x38; /* +0x38 */
    undefined2 field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0x6];
    undefined2 field_0x44; /* +0x44 */
    unsigned char pad_0x46[0x6];
    undefined2 field_0x4c; /* +0x4c */
    unsigned char pad_0x4e[0x12];
    undefined4 field_0x60; /* +0x60 */
    undefined1 field_0x64; /* +0x64 */
    undefined1 field_0x65; /* +0x65 */
    undefined1 field_0x66; /* +0x66 */
    undefined1 field_0x67; /* +0x67 */
    unsigned char pad_0x68[0x1c];
    undefined1 field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x1];
    undefined2 field_0x86; /* +0x86 */
    undefined1 field_0x88; /* +0x88 */
    undefined1 field_0x89; /* +0x89 */
    unsigned char pad_0x8a[0x2];
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    unsigned char pad_0xa0[0x60];
    undefined4 field_0x100; /* +0x100 */
    undefined4 field_0x104; /* +0x104 */
    undefined4 field_0x108; /* +0x108 */
    undefined4 field_0x10c; /* +0x10c */
    undefined4 field_0x110; /* +0x110 */
    undefined4 field_0x114; /* +0x114 */
};

extern unsigned char DAT_005584e0; /* 0x5584e0 */
extern unsigned char DAT_00558e90; /* 0x558e90 */
extern unsigned char DAT_0055af64; /* 0x55af64 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e995c(int, unsigned int, int);
extern unsigned int *FUN_002e9f80(fn_003022b4_arg0 *);
/* Supplied declaration required: FUN_002eb530. */
extern int FUN_002eb5e8(unsigned int *, unsigned int);


unsigned long long
FUN_003022b4(fn_003022b4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = (unsigned int)&DAT_0055af64;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xe] = 0;
  temp_v0 = FUN_002eb530(puVar1 + 0x10);
  temp_v0 = FUN_002eb530(temp_v0 + 8);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned char **)(temp_v0 + 0x48) = &DAT_00558e90;
  *(unsigned char **)(temp_v0 + 0x50) = &DAT_005584e0;
  *(unsigned int *)(temp_v0 + 0x54) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  temp_v0 = FUN_002e995c(temp_v0 + 0x94,0xd4,temp_v0 + 0x58);
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned char *)(temp_v0 - 0xb7) = 0;
  *(unsigned char *)(temp_v0 - 0xb6) = 0;
  temp_v1 = FUN_002eb5e8((unsigned int *)&uStack_20,0);
  *(unsigned short *)(temp_v0 - 0x98) = *(unsigned short *)(temp_v1 + 4);
  temp_v1 = FUN_002eb5e8((unsigned int *)&uStack_20,0);
  *(unsigned short *)(temp_v0 - 0x90) = *(unsigned short *)(temp_v1 + 4);
  *(unsigned char *)(temp_v0 - 0x78) = 0;
  *(unsigned short *)(temp_v0 - 0xa0) = 0;
  *(unsigned char *)(temp_v0 - 0x77) = 0;
  *(unsigned int *)(temp_v0 - 4) = 0;
  *(unsigned short *)(temp_v0 - 0x56) = 0;
  *(unsigned char *)(temp_v0 - 0x75) = 0;
  *(unsigned char *)(temp_v0 - 0xb8) = 0;
  *(unsigned int *)(temp_v0 - 0x50) = 0;
  *(unsigned char *)(temp_v0 - 0x58) = 0;
  *(unsigned char *)(temp_v0 - 0x53) = 0;
  *(unsigned char *)(temp_v0 - 0x76) = 0;
  *(unsigned char *)(temp_v0 - 0x54) = 0;
  return romwright_piece_4_4(uStack_20,temp_v0 - 0xdc);
}
