/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497d20` (_code @ 0x497d20, 0x6e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int textFormatBuffer(...);
int drawTextAtSnappedRectangle(...);
int efctSetSpeed(void);
int FUN_0018349c(...);
int drawTextAtRelativePosition(...);
int FUN_004934ac(...);
int FUN_0049368c(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

extern unsigned char LAB_00498394; /* 0x498394 */
extern unsigned char LAB_0049839c; /* 0x49839c */
extern unsigned char LAB_004983a0; /* 0x4983a0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: drawTextAtSnappedRectangle. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: drawTextAtRelativePosition. */
/* Supplied declaration required: FUN_004934ac. */
/* Supplied declaration required: FUN_0049368c. */
extern unsigned int itemGetNameOrFallback(short, unsigned int);
extern int FUN_0049cab8(short);
extern unsigned int aocItemGetPrice(unsigned int *);


void FUN_00497d20(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  short temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [32];
  unsigned int temp_v13;
  
  temp_v2 = param_1 + param_4 * 6;
  temp_v0 = *(short *)(temp_v2 + 0x9ffc);
  temp_v13 = (unsigned int)*(unsigned short *)(temp_v2 + 0xa000);
  temp_v1 = *(short *)(temp_v2 + 0x9ffe);
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(param_1 + 0x3a0);
    if (param_3 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    VectorSignedToFloat(0x100 - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (param_3 == 0) {
      temp_v3 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x27);
    }
    else {
      temp_v3 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x4f);
    }
    temp_v7 = (int)*(short *)(temp_v3 + 8);
    temp_v3 = (int)*(short *)(temp_v3 + 10);
    if (param_3 != 0) {
      efctSetSpeed();
      FUN_004934ac(param_1 + 0x3a4,0x47,temp_v7,temp_v3,temp_v2);
      FUN_004934ac(param_1 + 0x3a4,0x48,temp_v7,temp_v3,temp_v2);
      FUN_004934ac(param_1 + 0x3a4,0x49,temp_v7,temp_v3,temp_v2);
      efctSetSpeed();
      FUN_0049368c(param_1 + 0x3a4,0x4a,temp_v7,temp_v3,temp_v2,1);
      if (*(char *)(param_1 + 0xb19) != '\0') {
        FUN_004934ac(param_1 + 0x3a4,0x108,temp_v7,temp_v3,temp_v2);
        FUN_004934ac(param_1 + 0x3a4,0x109,temp_v7,temp_v3,temp_v2);
        FUN_004934ac(param_1 + 0x3a4,0x10a,temp_v7,temp_v3,temp_v2);
        efctSetSpeed();
        FUN_004934ac(param_1 + 0x3a4,0x10b,temp_v7,temp_v3,temp_v2);
        efctSetSpeed();
      }
      else {
        FUN_004934ac(param_1 + 0x3a4,0x4b,temp_v7,temp_v3,temp_v2);
        FUN_004934ac(param_1 + 0x3a4,0x4c,temp_v7,temp_v3,temp_v2);
        FUN_004934ac(param_1 + 0x3a4,0x4d,temp_v7,temp_v3,temp_v2);
        efctSetSpeed();
        FUN_004934ac(param_1 + 0x3a4,0x105,temp_v7,temp_v3,temp_v2);
        efctSetSpeed();
      }
    }
    temp_v4 = FUN_0049cab8(temp_v1);
    temp_v8 = temp_v1;
    if (temp_v4 == 0) {
      temp_v8 = temp_v0;
    }
    if (param_3 != 0) {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xe6);
    }
    else {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xd2);
    }
    temp_v5 = *(short *)(temp_v4 + 8) + temp_v7;
    temp_v4 = *(short *)(temp_v4 + 10) + temp_v3;
    if (param_3 != 0) {
      FUN_0049368c(param_1 + 0x3a4,0xe4,temp_v7,temp_v3,temp_v2,1);
    }
    FUN_00493344((const OffsetPosition2D *)(param_1 + 0x3a4),(int)temp_v8,temp_v5,temp_v4,temp_v2,0);
    if (param_3 == 0) {
      temp_v11 = 2;
    }
    else {
      temp_v11 = 3;
    }
    temp_v6 = itemGetNameOrFallback(temp_v8,0);
    if (param_3 != 0) {
      temp_v10 = 0xe7;
      if (*(char *)(param_1 + 0xb19) == '\0') {
        temp_v9 = 0x9fe7ffff;
      }
      else {
        temp_v9 = 0xf5ff9fff;
      }
    }
    else {
      temp_v9 = 0xffffffff;
      temp_v10 = 0xd3;
    }
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,temp_v10);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    drawTextAtSnappedRectangle(param_1 + 0x3a4,temp_v11,temp_v9,temp_v6);
    temp_v4 = FUN_0049cab8(temp_v1);
    if (temp_v4 != 0) {
      temp_v11 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v11 + 2)),temp_v1) & 0xfc00ffff;
      temp_v6 = aocItemGetPrice(&temp_v11);
      if (param_3 == 0) {
        temp_v9 = 0xd1;
      }
      else {
        temp_v9 = 0xe3;
      }
      FUN_0049368c(param_1 + 0x3a4,temp_v9,temp_v7,temp_v3,temp_v2,1);
      if (param_3 != 0) {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xf1);
        temp_v9 = 0xffffffff;
      }
      else {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xdd);
        temp_v9 = 0x9b9b9bff;
      }
      temp_v0 = *(short *)(temp_v4 + 8);
      temp_v8 = *(short *)(temp_v4 + 10);
      textFormatBuffer(temp_v12,&LAB_00498394,temp_v6);
      drawTextAtRelativePosition(param_1 + 0x3a4,0,temp_v0 + temp_v7,temp_v8 + temp_v3,0,7,temp_v9,temp_v2,temp_v12);
    }
    else {
      if (param_3 != 0) {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xe8);
      }
      else {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xd4);
      }
      temp_v0 = *(short *)(temp_v4 + 8);
      temp_v4 = *(short *)(temp_v4 + 10) + temp_v3;
      if (param_3 != 0) {
        FUN_0049368c(param_1 + 0x3a4,0xe5,temp_v7,temp_v3,temp_v2,1);
      }
      FUN_00493344((const OffsetPosition2D *)(param_1 + 0x3a4),(int)temp_v1,temp_v0 + temp_v7,temp_v4,temp_v2,0);
      temp_v6 = itemGetNameOrFallback(temp_v1,0);
      if (param_3 != 0) {
        temp_v9 = 0x9fe7ffff;
        temp_v10 = 0xe9;
      }
      else {
        temp_v10 = 0xd5;
        temp_v9 = 0xffffffff;
      }
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,temp_v10);
      VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      drawTextAtSnappedRectangle(param_1 + 0x3a4,temp_v11,temp_v9,temp_v6);
    }
    if (param_3 != 0) {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xf4);
      temp_v6 = 0x57d8ffff;
    }
    else {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xe0);
      temp_v6 = 0x9fddddff;
    }
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v8 = *(short *)(temp_v4 + 10);
    textFormatBuffer(temp_v12,&LAB_0049839c,temp_v13);
    drawTextAtRelativePosition(param_1 + 0x3a4,0,temp_v0 + temp_v7,temp_v8 + temp_v3,0,7,temp_v6,temp_v2,temp_v12);
    if (param_3 == 0) {
      temp_v9 = 0x100;
    }
    else {
      temp_v9 = 0x101;
    }
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,temp_v9);
    drawTextAtRelativePosition(param_1 + 0x3a4,0,*(short *)(temp_v4 + 8) + temp_v7,*(short *)(temp_v4 + 10) + temp_v3,0,7,
                 temp_v6,temp_v2,&LAB_004983a0);
    if ((*(char *)(param_1 + 0x20) != '\0') && (temp_v4 = FUN_0049cab8(temp_v1), temp_v4 != 0)) {
      if (param_3 == 0) {
        temp_v6 = 0xd0;
      }
      else {
        temp_v6 = 0xe2;
      }
    }
    else if (param_3 == 0) {
      temp_v6 = 0xcf;
    }
    else {
      temp_v6 = 0xe1;
    }
    FUN_0049368c(param_1 + 0x3a4,temp_v6,temp_v7,temp_v3,temp_v2,1);
  }
  return;
}

} /* extern "C" */
