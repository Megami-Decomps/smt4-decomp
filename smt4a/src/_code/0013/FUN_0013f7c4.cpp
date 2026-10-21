/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f7c4` (_code @ 0x13f7c4, 0x868 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001519c4(...);
int FUN_00151aa4(...);
int FUN_00169e38(...);
int SBORROW4(...);

int textFormatBuffer(...);
int FUN_00151e4c(int);
int FUN_0015f858(...);
int FUN_00162790(...);
int FUN_00164490(int);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001678a8(int);
int FUN_001689e8(...);
int FUN_0016c69c(...);
int FUN_0016c6f0(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int VectorSignedToFloat(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_0013fbb4; /* 0x13fbb4 */
extern unsigned char LAB_0013fbbc; /* 0x13fbbc */
extern unsigned char LAB_0013fbc0; /* 0x13fbc0 */
extern unsigned char g_messageMain; /* 0x57f588 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001519c4. */
/* Supplied declaration required: FUN_00151aa4. */
/* Supplied declaration required: FUN_00151e4c. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164490. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001678a8. */
/* Supplied declaration required: FUN_001689e8. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00169e38. */
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */


unsigned int FUN_0013f7c4(void)

{
/* irregular: irregular input(s): in_fpscr; 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [76];
  
  temp_v1 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x95) != '\0') {
    return 0;
  }
  if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 9) != '\v') {
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 9) == '\x14') {
      if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 8) != '\0') {
        efctSetSpeed();
        temp_v3 = FUN_001692ac(1,0);
        FUN_0016c6f0(g_renderCtx,3,temp_v3);
        FUN_001835b4(2,0x2f,0x8d,0,0,6);
        FUN_0016c69c(g_renderCtx,3);
        efctSetSpeed();
      }
      FUN_001678a8(temp_v1);
      FUN_00151e4c((*(int *)((unsigned char *)&g_messageMain + 0x8)));
    }
  }
  else {
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 8) != '\0') {
      efctSetSpeed();
      temp_v3 = FUN_001692ac(1,0);
      FUN_0016c6f0(g_renderCtx,3,temp_v3);
      FUN_001835b4(2,8,0x101,0,0,6);
      FUN_0016c69c(g_renderCtx,3);
      efctSetSpeed();
    }
    FUN_001678a8(temp_v1);
    FUN_00151e4c((*(int *)((unsigned char *)&g_messageMain + 0x8)));
  }
  if ((*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x8e) != '\0') && (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x91) == '\0')) {
    FUN_00164490(0);
  }
  if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x8f) != '\0') {
    temp_v1 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
    temp_v2 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
    temp_v3 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v3);
    efctSetSpeed();
    FUN_00183bb0();
    temp_v4 = FUN_001834a4(8,200);
    FUN_00164b5c(2,8,10,*(short *)(temp_v4 + 8) + temp_v1,*(short *)(temp_v4 + 10) + temp_v2,0xb);
    temp_v3 = *(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x78);
    FUN_0015f858(temp_v3,0);
    textFormatBuffer(temp_v9,&LAB_0013fbb4,temp_v3);
    temp_v5 = FUN_001834a4(8,0xc2);
    VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v9,(int)*(short *)(temp_v4 + 8));
    temp_v5 = FUN_001834a4(8,0xc1);
    FUN_001689e8((int)(short)*(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x78),
                 (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x10,0);
    drawSetColorFromRGBA8(0xffffffff);
    temp_v5 = FUN_001834a4(8,0xc6);
    FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,1,4,0x10,
                 &LAB_0013fbbc,*(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x7c));
    temp_v5 = FUN_001834a4(8,199);
    FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0,1,0x10,
                 &LAB_0013fbc0);
    FUN_00183bb0();
    efctSetSpeed();
    FUN_0016c69c(g_renderCtx,3);
  }
  temp_v1 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  if (*(int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x158) != 0) {
    temp_v2 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xd30);
    temp_v4 = vec2GetYInt(temp_v1 + 0xd30);
    temp_v3 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v3);
    efctSetSpeed();
    FUN_00183bb0();
    temp_v5 = FUN_001834a4(8,0xc0);
    FUN_00164b5c(2,8,0x11,*(short *)(temp_v5 + 8) + temp_v2,*(short *)(temp_v5 + 10) + temp_v4,0xb);
    FUN_00169e38(*(unsigned short *)(temp_v1 + 0x15c),*(short *)(temp_v5 + 8) + temp_v2,
                 *(short *)(temp_v5 + 10) + temp_v4,0);
    temp_v6 = 100000000;
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v1 + 0x15c);
    temp_v1 = -1;
    temp_v7 = 0;
    do {
      temp_v0 = temp_v6 - temp_v8;
      if (temp_v8 >= temp_v6) {
        temp_v0 = temp_v1;
      }
      if (temp_v0 < 0 != (temp_v8 < temp_v6 && SBORROW4(temp_v6,temp_v8))) {
        temp_v1 = temp_v7;
      }
      temp_v7 = temp_v7 + 1;
      temp_v6 = temp_v6 / 10;
    } while (temp_v6 != 0);
    if (temp_v1 >= 0) {
      temp_v1 = FUN_001834a4(8,0x65 - temp_v1);
    }
    else {
      temp_v1 = FUN_001834a4(8,0x5d);
    }
    drawSetColorFromRGBA8(0xff);
    FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v4,0,0xf,0x10,
                 &LAB_0013fbc0);
    FUN_00183bb0();
    FUN_0016c69c(g_renderCtx,3);
  }
  if ((*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x19fb) != '\0') &&
     (temp_v1 = *(int *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x19fc), temp_v1 != 0)) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 == 3) {
          efctSetSpeed();
          FUN_001835b4(2,4,0xac0f,0,0,0xf1);
          FUN_001835b4(2,4,0xac10,0,0,0xf1);
          if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x19f9) == '\x03') {
            efctSetSpeed();
            temp_v1 = 0;
            do {
              FUN_001835b4(2,4,temp_v1 + 0xac11,0,0,0xf1);
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            efctSetSpeed();
          }
          FUN_001519c4(0xac15);
          efctSetSpeed();
          temp_v1 = 0;
          do {
            FUN_001835b4(2,4,temp_v1 + 0xac1c,0,0,0xf1);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 6);
          efctSetSpeed();
          FUN_00151aa4(0xac16,0xac17,0xac23,0xac18,0xac19,0xac24);
          efctSetSpeed();
        }
      }
      else {
        efctSetSpeed();
        FUN_001835b4(2,4,0xabf9,0,0,0xf1);
        if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x19f9) == '\x03') {
          efctSetSpeed();
          temp_v1 = 0;
          do {
            FUN_001835b4(2,4,temp_v1 + 0xabfa,0,0,0xf1);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          efctSetSpeed();
        }
        FUN_001519c4(0xabfe);
        FUN_00151aa4(0xabff,0xac00,0xac06,0xac01,0xac02,0xac07);
        efctSetSpeed();
      }
    }
    else {
      efctSetSpeed();
      FUN_001835b4(2,4,0xac2c,0,0,0xf1);
      if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x19f9) == '\x03') {
        efctSetSpeed();
        temp_v1 = 0;
        do {
          FUN_001835b4(2,4,temp_v1 + 0xac2d,0,0,0xf1);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        efctSetSpeed();
      }
      FUN_001519c4(0xac31);
      FUN_00151aa4(0xac32,0xac33,0xac39,0xac34,0xac35,0xac3a);
      efctSetSpeed();
    }
  }
  return 0;
}

} /* extern "C" */
