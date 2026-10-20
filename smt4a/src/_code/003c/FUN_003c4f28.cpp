/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4f28` (_code @ 0x3c4f28, 0x6a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_001834a4(...);
int sysMemClear(int, int);
int FUN_0035e6d4(...);
int soundChannelRequestIfEnabled(int, int, int);
int FUN_003d54f8(int, int);
int VectorSignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001834a4. */
extern unsigned long long slotIsReady(unsigned int);
extern int FUN_0028a230(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0035e6d4. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_003d54f8. */


void FUN_003c4f28(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0, in_s1; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int in_fpscr;
  int in_s0;
  int temp_v5;
  unsigned int in_s1;
  int temp_v6;
  float temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned long long temp_v15;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    temp_v2 = 0;
    FUN_001517b4(0,1);
    if (temp_v2 == 0) {
      temp_v2 = 1;
      FUN_001517b4();
      if (temp_v2 == 0) {
        temp_v2 = 9;
        FUN_001517b4(9,1);
        if (temp_v2 == 0) {
          temp_v2 = 10;
          FUN_001517b4(10,1);
          if (temp_v2 == 0) {
            temp_v2 = 2;
            FUN_001517b4(2,1);
            if (temp_v2 == 0) goto LAB_003c4fac;
          }
        }
      }
    }
    *(unsigned int *)(param_1 + 0x7c) = 8;
  }
LAB_003c4fac:
  temp_v14 = 0x3e99999a;
  temp_v13 = 0x3f800000;
  temp_v12 = 0;
  puVar5 = (unsigned int *)(param_1 + 0x9c);
  switch(*(unsigned int *)(param_1 + 0x7c)) {
  case 0:
    temp_v2 = FUN_0028a230(param_1);
    if (temp_v2 != 0) {
      FUN_003d54f8(0,10);
      *(unsigned char *)(param_1 + 0x60) = 1;
      soundChannelRequestIfEnabled(0x1000001,0,0x3c);
      sysMemClear(param_1 + 0x9c,0x1c4);
      temp_v2 = FUN_001834a4(0x2a,4);
      *(unsigned int *)(param_1 + 0x104) = 4;
      *(unsigned int *)(param_1 + 0x100) = 0x2a;
      temp_v0 = **(short **)(temp_v2 + 0xc);
      temp_v1 = (*(short **)(temp_v2 + 0xc))[1];
      *(unsigned int *)(param_1 + 0xec) = 0;
      *(unsigned int *)(param_1 + 0xf0) = 0x7e;
      *(int *)(param_1 + 0xf4) = (int)temp_v0;
      *(int *)(param_1 + 0xf8) = (int)temp_v1;
      *(unsigned char *)(param_1 + 0xfc) = 0;
      *(unsigned int *)(param_1 + 0x108) = 0;
      temp_v0 = *(short *)(*(int *)(temp_v2 + 0xc) + 2);
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int *)(param_1 + 0xd8) = 0;
      *(unsigned int *)(param_1 + 0xdc) = 0;
      *(int *)(param_1 + 0xe0) = (int)temp_v0;
      *(unsigned int *)(param_1 + 0xe4) = 0;
      *(unsigned int *)(param_1 + 0xe8) = 0;
      temp_v2 = FUN_001834a4(0x2a,0);
      *(unsigned int *)(param_1 + 0xcc) = 0;
      *(unsigned int *)(param_1 + 200) = 0x2a;
      temp_v0 = **(short **)(temp_v2 + 0xc);
      temp_v1 = (*(short **)(temp_v2 + 0xc))[1];
      *(unsigned int *)(param_1 + 0xb4) = 1;
      *(unsigned int *)(param_1 + 0xb8) = 0x11;
      *(int *)(param_1 + 0xbc) = (int)temp_v0;
      *(int *)(param_1 + 0xc0) = (int)temp_v1;
      *(unsigned char *)(param_1 + 0xc4) = 1;
      *(unsigned int *)(param_1 + 0xd0) = 0;
      *(unsigned int *)(param_1 + 0x9c) = 0;
      *(unsigned int *)(param_1 + 0xa0) = 0;
      *(unsigned int *)(param_1 + 0xa4) = 0;
      *(unsigned int *)(param_1 + 0xa8) = 0;
      *(unsigned int *)(param_1 + 0xac) = 0;
      *(unsigned int *)(param_1 + 0xb0) = 0;
      FUN_001834a4(0x2a,1000);
      *(unsigned int *)(param_1 + 0x134) = 1000;
      *(unsigned int *)(param_1 + 0x130) = 0x2a;
      *(unsigned int *)(param_1 + 0x11c) = 0x47;
      *(unsigned int *)(param_1 + 0x118) = 0xfffffe00;
      *(unsigned int *)(param_1 + 0x128) = temp_v13;
      *(unsigned int *)(param_1 + 0x120) = 400;
      *(unsigned int *)(param_1 + 0x124) = 0xffffffd7;
      *(unsigned int *)(param_1 + 300) = temp_v13;
      *(unsigned int *)(param_1 + 0x138) = 0;
      *(unsigned int *)(param_1 + 0x10c) = 0xfffffe00;
      *(unsigned int *)(param_1 + 0x13c) = 0x11;
      *(unsigned int *)(param_1 + 0x140) = 0;
      *(unsigned int *)(param_1 + 0x110) = 0;
      *(unsigned int *)(param_1 + 0x114) = temp_v12;
      *(unsigned int *)(param_1 + 0x16c) = 0x3e9;
      *(unsigned int *)(param_1 + 0x150) = 0;
      *(unsigned int *)(param_1 + 0x168) = 0x2a;
      *(unsigned int *)(param_1 + 0x154) = 0;
      *(unsigned int *)(param_1 + 0x160) = temp_v12;
      *(unsigned int *)(param_1 + 0x158) = 0;
      *(unsigned int *)(param_1 + 0x15c) = 0;
      *(unsigned int *)(param_1 + 0x164) = temp_v14;
      *(unsigned int *)(param_1 + 0x170) = 0;
      *(unsigned int *)(param_1 + 0x174) = 5;
      *(unsigned int *)(param_1 + 0x178) = 0;
      *(unsigned int *)(param_1 + 0x144) = 0;
      *(unsigned int *)(param_1 + 0x148) = 0;
      *(unsigned int *)(param_1 + 0x14c) = temp_v12;
      *(unsigned int *)(param_1 + 0x188) = 0;
      *(unsigned int *)(param_1 + 0x18c) = 0;
      *(unsigned int *)(param_1 + 0x1a0) = 0x2a;
      *(unsigned int *)(param_1 + 0x1a4) = 1;
      *(unsigned int *)(param_1 + 0x198) = temp_v12;
      *(unsigned int *)(param_1 + 400) = 0;
      *(unsigned int *)(param_1 + 0x194) = 0;
      *(unsigned int *)(param_1 + 0x19c) = temp_v13;
      *(unsigned int *)(param_1 + 0x1a8) = 0;
      *(unsigned int *)(param_1 + 0x1ac) = 0x11;
      *(unsigned int *)(param_1 + 0x1b0) = 0;
      *(unsigned int *)(param_1 + 0x17c) = 0;
      *(unsigned int *)(param_1 + 0x180) = 0;
      *(unsigned int *)(param_1 + 0x184) = temp_v12;
      *(unsigned int *)(param_1 + 0x1dc) = 2000;
      *(unsigned int *)(param_1 + 0x1c0) = 0;
      *(unsigned int *)(param_1 + 0x1d8) = 0x2a;
      *(unsigned int *)(param_1 + 0x1c4) = 0;
      *(unsigned int *)(param_1 + 0x1d0) = temp_v12;
      *(unsigned int *)(param_1 + 0x1c8) = 0;
      *(unsigned int *)(param_1 + 0x1cc) = 0;
      *(unsigned int *)(param_1 + 0x1d4) = temp_v13;
      *(unsigned int *)(param_1 + 0x1e0) = 0;
      *(unsigned int *)(param_1 + 0x1e4) = 0x1e;
      *(unsigned int *)(param_1 + 0x1e8) = 0;
      *(unsigned int *)(param_1 + 0x1b4) = 0;
      *(unsigned int *)(param_1 + 0x1b8) = 0;
      *(unsigned int *)(param_1 + 0x1bc) = temp_v12;
      *(unsigned int *)(param_1 + 0x214) = 0x7d1;
      *(unsigned int *)(param_1 + 0x1f8) = 0;
      *(unsigned int *)(param_1 + 0x210) = 0x2a;
      *(unsigned int *)(param_1 + 0x1fc) = 0;
      *(unsigned int *)(param_1 + 0x208) = temp_v12;
      *(unsigned int *)(param_1 + 0x200) = 0;
      *(unsigned int *)(param_1 + 0x204) = 0;
      *(unsigned int *)(param_1 + 0x20c) = temp_v13;
      *(unsigned int *)(param_1 + 0x218) = 0;
      *(unsigned int *)(param_1 + 0x21c) = 0x1e;
      *(unsigned int *)(param_1 + 0x220) = 0;
      *(unsigned int *)(param_1 + 0x1ec) = 0;
      *(unsigned int *)(param_1 + 0x1f0) = 0;
      *(unsigned int *)(param_1 + 500) = temp_v12;
      temp_v2 = FUN_001834a4(0x2a,3);
      *(unsigned int *)(param_1 + 0x24c) = 2;
      *(unsigned int *)(param_1 + 0x248) = 0x2a;
      temp_v0 = *(short *)(temp_v2 + 8);
      temp_v1 = *(short *)(temp_v2 + 10);
      *(int *)(param_1 + 0x230) = (int)temp_v0;
      *(int *)(param_1 + 0x234) = (int)temp_v1;
      *(unsigned int *)(param_1 + 0x240) = temp_v12;
      *(int *)(param_1 + 0x238) = (int)temp_v0;
      *(int *)(param_1 + 0x23c) = (int)temp_v1;
      *(unsigned int *)(param_1 + 0x244) = temp_v13;
      *(unsigned int *)(param_1 + 0x250) = 0;
      *(unsigned int *)(param_1 + 0x254) = 0x11;
      *(unsigned int *)(param_1 + 600) = 0;
      *(unsigned int *)(param_1 + 0x224) = 0;
      *(unsigned int *)(param_1 + 0x228) = 0;
      *(unsigned int *)(param_1 + 0x22c) = temp_v12;
      *(unsigned int *)(param_1 + 0x7c) = 1;
    }
    break;
  case 1:
    temp_v15 = slotIsReady(0);
    temp_v2 = (int)((unsigned long long)temp_v15 >> 0x20);
    if ((int)temp_v15 == 0) {
      temp_v6 = *(int *)(param_1 + 0xf0);
      temp_v4 = *(int *)(param_1 + 0x108) + 1;
      temp_v3 = *(int *)(param_1 + 0xf8);
      temp_v8 = *(int *)(param_1 + 0xf4);
      temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v6 - *(int *)(param_1 + 0xec),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      *(int *)(param_1 + 0x108) = temp_v4;
      temp_v7 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (*(char *)(param_1 + 0xfc) != '\0') {
        temp_v5 = 0;
        if (*(char *)(param_1 + 0xfc) == '\x01') {
          temp_v5 = (int)temp_v7;
          temp_v2 = *(int *)(param_1 + 0xd8);
          in_s1 = *(unsigned int *)(param_1 + 0xd4);
          in_s0 = (int)((temp_v11 / temp_v9) * temp_v10);
        }
      }
      else {
        in_s1 = *(unsigned int *)(param_1 + 0xd4);
        temp_v5 = (int)((temp_v7 / temp_v9) * temp_v10);
        temp_v2 = *(int *)(param_1 + 0xd8) + (temp_v3 - temp_v5);
        in_s0 = temp_v8;
      }
      if (temp_v6 <= temp_v4) {
        temp_v2 = *(int *)(param_1 + 0xd8);
        in_s1 = *(unsigned int *)(param_1 + 0xd4);
        temp_v5 = temp_v3;
        in_s0 = temp_v8;
      }
      *(unsigned int *)(param_1 + 0xdc) = in_s1;
      *(int *)(param_1 + 0xe0) = temp_v2;
      *(int *)(param_1 + 0xe4) = in_s0;
      *(int *)(param_1 + 0xe8) = temp_v5;
      if (temp_v6 <= temp_v4) {
        temp_v13 = 2;
        *(unsigned int *)(param_1 + 0x7c) = temp_v13;
        return;
      }
    }
    break;
  case 2:
    temp_v2 = FUN_0035e6d4(param_1 + 0x144);
    if (temp_v2 == 0) {
      *(unsigned int *)(param_1 + 0x150) = 0;
      *(unsigned int *)(param_1 + 0x154) = 0;
      *(unsigned int *)(param_1 + 0x160) = temp_v14;
      *(unsigned int *)(param_1 + 0x158) = 0;
      *(unsigned int *)(param_1 + 0x15c) = 0;
      *(unsigned int *)(param_1 + 0x164) = temp_v12;
      *(unsigned int *)(param_1 + 0x170) = 0;
      *(unsigned int *)(param_1 + 0x174) = 5;
      temp_v13 = 3;
      *(unsigned int *)(param_1 + 0x178) = 0;
      *(unsigned int *)(param_1 + 0x7c) = temp_v13;
      return;
    }
    break;
  case 3:
    FUN_0035e6d4(param_1 + 0x144);
    temp_v15 = FUN_0035e6d4(param_1 + 0x10c);
    temp_v4 = *(int *)(param_1 + 0xb8);
    temp_v2 = *(int *)(param_1 + 0xc0);
    temp_v3 = *(int *)(param_1 + 0xd0) + 1;
    temp_v6 = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0xd0) = temp_v3;
    temp_v10 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v4 - *(int *)(param_1 + 0xb4),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    if (*(char *)(param_1 + 0xc4) != '\0') {
      if (*(char *)(param_1 + 0xc4) == '\x01') {
        temp_v15 = romwright_piece_4_4(*(unsigned int *)(param_1 + 0xa0),(int)temp_v10);
        in_s1 = *puVar5;
        in_s0 = (int)((temp_v11 / temp_v9) * temp_v7);
      }
    }
    else {
      in_s1 = *puVar5;
      temp_v8 = (int)((temp_v10 / temp_v9) * temp_v7);
      temp_v15 = romwright_piece_4_4(*(int *)(param_1 + 0xa0) + (temp_v2 - temp_v8),temp_v8);
      in_s0 = temp_v6;
    }
    if (temp_v4 <= temp_v3) {
      temp_v15 = romwright_piece_4_4(*(unsigned int *)(param_1 + 0xa0),temp_v2);
      in_s1 = *puVar5;
      in_s0 = temp_v6;
    }
    *(unsigned int *)(param_1 + 0xa4) = in_s1;
    *(int *)(param_1 + 0xa8) = (int)((unsigned long long)temp_v15 >> 0x20);
    *(int *)(param_1 + 0xac) = in_s0;
    *(int *)(param_1 + 0xb0) = (int)temp_v15;
    if (temp_v4 <= temp_v3) {
      temp_v13 = 4;
      *(unsigned int *)(param_1 + 0x7c) = temp_v13;
      return;
    }
    break;
  case 4:
    FUN_0035e6d4(param_1 + 0x224);
    temp_v2 = FUN_0035e6d4(param_1 + 0x17c);
    if (temp_v2 == 0) {
      temp_v2 = FUN_001834a4(0x2a,3);
      temp_v0 = *(short *)(temp_v2 + 8);
      temp_v1 = *(short *)(temp_v2 + 10);
      *(int *)(param_1 + 0x230) = (int)temp_v0;
      *(int *)(param_1 + 0x234) = (int)temp_v1;
      *(unsigned int *)(param_1 + 0x240) = temp_v13;
      *(int *)(param_1 + 0x238) = (int)temp_v0;
      *(int *)(param_1 + 0x23c) = (int)temp_v1;
      temp_v13 = 5;
      *(unsigned int *)(param_1 + 0x244) = temp_v12;
      *(unsigned int *)(param_1 + 0x250) = 0;
      *(unsigned int *)(param_1 + 0x254) = 0x1e;
      *(unsigned int *)(param_1 + 600) = 0;
      *(unsigned int *)(param_1 + 0x7c) = temp_v13;
      return;
    }
    break;
  case 5:
    FUN_0035e6d4(param_1 + 0x224);
    FUN_0035e6d4(param_1 + 0x1b4);
    temp_v2 = FUN_0035e6d4(param_1 + 0x1ec);
    if (temp_v2 == 0) {
      *(unsigned int *)(param_1 + 0x7c) = 8;
    }
    return;
  case 8:
    *(unsigned int *)(param_1 + 0x25c) = 0;
    *(unsigned int *)(param_1 + 0x78) = 8;
    *(unsigned int *)(param_1 + 0x7c) = 0;
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x230) = 0;
    *(unsigned int *)(param_1 + 0x234) = 0;
    *(unsigned int *)(param_1 + 0x240) = 0;
    *(unsigned int *)(param_1 + 0x238) = 0;
    *(unsigned int *)(param_1 + 0x23c) = 0;
    *(unsigned int *)(param_1 + 0x244) = 0;
    *(unsigned int *)(param_1 + 0x250) = 0;
    *(unsigned int *)(param_1 + 0x254) = 0x28;
    *(unsigned int *)(param_1 + 600) = 0;
    return;
  }
  return;
}

} /* extern "C" */
