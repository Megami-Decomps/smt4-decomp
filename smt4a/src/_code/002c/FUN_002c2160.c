/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2160` (_code @ 0x2c2160, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c2160_arg0 fn_002c2160_arg0;
struct fn_002c2160_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0057f65c; /* 0x57f65c */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_003b7b4c. */
/* Supplied declaration required: FUN_003d2150. */


void FUN_002c2160(fn_002c2160_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0057f65c;
  temp_v1 = 0x3e800000;
  temp_v2 = 0x41a00000;
  if (param_1 != (fn_002c2160_arg0 *)0x0) {
    if (param_1 == (fn_002c2160_arg0 *)0x1) {
      FUN_003d2150(0x10000be);
      *(unsigned char *)(temp_v0 + 0x1c) = 1;
      *(unsigned int *)(temp_v0 + 0x20) = 0;
      *(unsigned char *)(temp_v0 + 0x24) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = temp_v1;
      *(unsigned int *)(temp_v0 + 0x2c) = temp_v1;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
      *(unsigned char *)(DAT_0057f65c + 0x25) = 1;
      FUN_0014e188(temp_v0 + 0xd74,0x14,2000,temp_v0 + 0x34,0xb);
      FUN_00184c00(temp_v0 + 0xd74,0);
      *(unsigned int *)(temp_v0 + 0x13d8) = 10;
      *(unsigned int *)(temp_v0 + 0x13dc) = 0x28;
      *(unsigned int *)(temp_v0 + 0x13e0) = 5;
      *(unsigned int *)(temp_v0 + 0x13e4) = 10;
      *(unsigned int *)(temp_v0 + 0x13e8) = 0xe;
      *(unsigned int *)(temp_v0 + 0x13ec) = 5;
      *(unsigned int *)(temp_v0 + 0x13f0) = 4;
      *(unsigned int *)(temp_v0 + 0x13f4) = 2;
      *(unsigned int *)(temp_v0 + 0x13f8) = 10;
      *(unsigned int *)(temp_v0 + 0x13fc) = 0x3c;
      *(unsigned int *)(temp_v0 + 0x1400) = 0x14;
      *(unsigned int *)(temp_v0 + 0x1404) = 0x28;
      *(unsigned int *)(temp_v0 + 0x1408) = 10;
      *(unsigned int *)(temp_v0 + 0x140c) = 0x1e;
      *(unsigned int *)(temp_v0 + 0x1410) = 0x14;
      FUN_003b7b4c(temp_v0);
      FUN_0014e188(temp_v0 + 0xe8c,0x14,2000,temp_v0 + 0x34,0xb);
      FUN_00184c00(temp_v0 + 0xe8c,2,0);
      FUN_0014e188(temp_v0 + 0xf18,0x14,2000,temp_v0 + 0x34,0xb);
      FUN_00184c00(temp_v0 + 0xf18,1,0);
      return;
    }
    if (param_1 == (fn_002c2160_arg0 *)0x2) {
      FUN_003d2150(0x10000bf);
      *(unsigned int *)(temp_v0 + 0x20) = 0;
      *(unsigned char *)(temp_v0 + 0x24) = 1;
      *(unsigned int *)(temp_v0 + 0x30) = 0x40e00000;
      FUN_00184c00(temp_v0 + 0xf18,0,1);
      FUN_00184c00(temp_v0 + 0xe8c,0,1);
      FUN_00184c00(temp_v0 + 0xd74,0,1);
      return;
    }
  }
  else {
    *(unsigned char *)(DAT_0057f65c + 0x1c) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned char *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0x3e800000;
    *(unsigned int *)(temp_v0 + 0x2c) = 0x3e800000;
    *(unsigned int *)(temp_v0 + 0x30) = 0x41a00000;
    *(unsigned char *)(temp_v0 + 0x1040) = 0;
    *(unsigned char *)(temp_v0 + 0x1043) = 0;
    *(unsigned char *)(temp_v0 + 0x1044) = 0;
  }
  return;
}
