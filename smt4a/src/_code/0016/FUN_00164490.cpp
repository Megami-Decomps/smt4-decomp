/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164490` (_code @ 0x164490, 0x598 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(...);
int vec2GetXInt(...);
int efctSetSpeed(void);
int FUN_00169e38(...);
int FUN_0016c69c(...);
int FUN_0016c6f0(unsigned int, int, unsigned int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_001879d0(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char g_messageMain; /* 0x57f588 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00169e38. */
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001879d0. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00164490(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  temp_v2 = gameFlagIsSet(0x402);
  if (temp_v2 != 0) {
    temp_v2 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
    temp_v3 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
    if ('\0' < *(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x94)) {
      temp_v4 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb8c);
      temp_v2 = temp_v2 + temp_v4;
      temp_v4 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb8c);
      temp_v3 = temp_v3 + temp_v4;
    }
    temp_v5 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v5);
    efctSetSpeed();
    FUN_00183bb0();
    if (param_1 != 0) {
      temp_v4 = FUN_001834a4(8,0x94);
      temp_v12 = 0.26f;
      FUN_001879d0(g_renderCtx);
      temp_v2 = temp_v2 + (int)temp_v12;
    }
    else {
      temp_v4 = FUN_001834a4(8,0xc0);
    }
    FUN_00164b5c(2,8,0,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0xb);
    FUN_00169e38(*(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x7c),*(short *)(temp_v4 + 8) + temp_v2,
                 *(short *)(temp_v4 + 10) + temp_v3,0);
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x92) != '\0') {
      if (param_1 != 0) {
        temp_v4 = FUN_001834a4(8,0x100);
      }
      else {
        temp_v4 = FUN_001834a4(8,0x11f);
      }
      FUN_00164b5c(2,8,0xc,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0xb);
      if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x8c) != '\0') {
        temp_v0 = *(short *)(temp_v4 + 8);
        temp_v1 = *(short *)(temp_v4 + 10);
        if (*(int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x84) < 0) {
          temp_v5 = 0xdc0f14ff;
        }
        else {
          temp_v5 = 0x8400ff;
        }
        drawSetColorFromRGBA8(temp_v5);
        temp_v4 = 0;
        do {
          temp_v6 = FUN_001834a4(8,temp_v4 + 0x5c);
          FUN_001835b4(2,7,0xe,(int)*(short *)(temp_v6 + 8) + temp_v0 + temp_v2,
                       (int)*(short *)(temp_v6 + 10) + temp_v3 + temp_v1,0x10);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 3);
        FUN_00183bb0();
      }
      else {
        FUN_00169e38(*(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x84),*(short *)(temp_v4 + 8) + temp_v2,
                     *(short *)(temp_v4 + 10) + temp_v3,1);
      }
    }
    temp_v2 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
    temp_v12 = 0.25f;
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x16d) != '\0') {
      temp_v14 = temp_v12;
      temp_v5 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
      temp_v3 = vec2GetYInt(temp_v2 + 0xb00);
      temp_v12 = temp_v14;
      FUN_001879d0(g_renderCtx);
      temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = FUN_001834a4(8,0x100);
      FUN_00164b5c(2,8,0x16,(int)*(short *)(temp_v4 + 8) + (int)(temp_v14 + temp_v13),
                   *(short *)(temp_v4 + 10) + temp_v3,0xb);
      FUN_00169e38(-*(int *)(temp_v2 + 0x168),(int)*(short *)(temp_v4 + 8) + (int)(temp_v14 + temp_v13),
                   *(short *)(temp_v4 + 10) + temp_v3,1);
    }
    temp_v2 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x17d) != '\0') {
      temp_v5 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
      temp_v3 = vec2GetYInt(temp_v2 + 0xb00);
      FUN_001879d0(g_renderCtx);
      temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = FUN_001834a4(8,0x100);
      FUN_00164b5c(2,8,0x17,(int)*(short *)(temp_v4 + 8) + (int)(temp_v12 + temp_v14),
                   *(short *)(temp_v4 + 10) + temp_v3,0xb);
      temp_v6 = (int)*(short *)(temp_v4 + 8);
      temp_v2 = *(int *)(temp_v2 + 0x178);
      temp_v11 = (int)(temp_v12 + temp_v14) + temp_v6;
      if (0 < temp_v2) {
        temp_v6 = 0x72e027ff;
      }
      temp_v3 = temp_v3 + *(short *)(temp_v4 + 10);
      temp_v10 = 0;
      temp_v4 = -1;
      if (temp_v2 == 0) {
        temp_v6 = -1;
      }
      if (temp_v2 < 0) {
        drawSetColorFromRGBA8(0xdc0f14ff);
        drawSetColorFromRGBA8(0xff0000ff);
        temp_v6 = -temp_v2;
      }
      else {
        drawSetColorFromRGBA8(temp_v6);
        temp_v6 = temp_v2;
      }
      if (temp_v6 != 0) {
        temp_v9 = 100000000;
        do {
          temp_v7 = -temp_v2;
          if (-1 < temp_v2) {
            temp_v7 = temp_v2;
          }
          if ((int)temp_v9 <= temp_v7) {
            if (temp_v4 < 0) {
              temp_v4 = temp_v10;
            }
            temp_v7 = __aeabi_idivmod(temp_v6,temp_v9);
            temp_v8 = FUN_001834a4(8,100 - temp_v10);
            FUN_001835b4(2,7,temp_v7,*(short *)(temp_v8 + 8) + temp_v11,*(short *)(temp_v8 + 10) + temp_v3,
                         0x10);
            temp_v6 = temp_v6 - temp_v9 * temp_v7;
            if (temp_v10 != 2) {
              if (temp_v10 == 5) {
                temp_v7 = FUN_001834a4(8,0x66);
                FUN_001835b4(2,7,0xc,*(short *)(temp_v7 + 8) + temp_v11,*(short *)(temp_v7 + 10) + temp_v3,
                             0x10);
              }
            }
            else {
              temp_v7 = FUN_001834a4(8,0x67);
              FUN_001835b4(2,7,0xc,*(short *)(temp_v7 + 8) + temp_v11,*(short *)(temp_v7 + 10) + temp_v3,
                           0x10);
            }
          }
          temp_v10 = temp_v10 + 1;
          temp_v9 = temp_v9 / 10;
        } while (temp_v9 != 0);
      }
      else {
        temp_v2 = FUN_001834a4(8,0x5c);
        FUN_001835b4(2,7,0,*(short *)(temp_v2 + 8) + temp_v11,*(short *)(temp_v2 + 10) + temp_v3,0x10);
      }
      FUN_00183bb0();
    }
    efctSetSpeed();
    FUN_00183bb0();
    FUN_0016c69c(g_renderCtx,3);
  }
  return;
}

} /* extern "C" */
