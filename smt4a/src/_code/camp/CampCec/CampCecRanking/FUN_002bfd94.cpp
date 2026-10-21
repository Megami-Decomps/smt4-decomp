/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfd94` (_code @ 0x2bfd94, 0x47c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_001527d8(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00169a1c(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int FUN_0025cc78(...);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} void_stack;

extern unsigned char LAB_002c0234; /* 0x2c0234 */
extern int g_campCecRanking; /* 0x57f11c */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_00180310. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0025cc78. */


int FUN_002bfd94(void)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14 [132];
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  
  temp_v2 = g_campCecRanking;
  temp_v3 = gameFlagIsSet(0x4f6);
  temp_v4 = 0;
  if (temp_v3 != 0) {
    temp_v4 = *(int *)(temp_v2 + 4);
  }
  if (temp_v3 != 0 && temp_v4 != 0) {
    if (temp_v4 == 6) {
      temp_v4 = 0;
    }
    else {
      temp_v3 = asdTMTexTableNodeIsLoaded(0x2e,1);
      temp_v4 = 0;
      if (temp_v3 != 0) {
        temp_v4 = vec2GetXInt(temp_v2 + 0xc);
        temp_v3 = vec2GetYInt(temp_v2 + 0xc);
        efctSetSpeed();
        FUN_001835b4(2,0x2e,0x44d,temp_v4,temp_v3,0x65);
        FUN_00164b5c(2,0x2e,0x1a,temp_v4,temp_v3,0x65);
        temp_v7 = 0;
        do {
          temp_v5 = temp_v2 + temp_v7 * 0xc;
          temp_v18 = *(int *)(temp_v5 + 200);
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v5 + 0xc4);
          temp_v11 = temp_v18 == 0;
          temp_v9 = *(int *)(temp_v5 + 0xcc);
          temp_v5 = FUN_001834a4(0x2e,temp_v7 + 0x443);
          temp_v8 = (int)*(short *)(temp_v5 + 8);
          temp_v5 = (int)*(short *)(temp_v5 + 10);
          if (temp_v10 == 0 || temp_v11) {
            FUN_00164b5c(2,0x2e,0x1e,temp_v4 + temp_v8,temp_v3 + temp_v5,0x65);
          }
          else {
            if (temp_v9 != 1) {
              if (temp_v9 != 2) {
                if (temp_v9 != 3) {
                  FUN_00164b5c(2,0x2e,0x1e,temp_v4 + temp_v8,temp_v3 + temp_v5,0x65);
                  temp_v6 = FUN_001834a4(0x2e,0x43c);
                  FUN_001835b4(2,0x2e,temp_v9 + 0x421,temp_v4 + temp_v8 + (int)*(short *)(temp_v6 + 8),
                               temp_v3 + temp_v5 + (int)*(short *)(temp_v6 + 10),0x65);
                }
                else {
                  FUN_00164b5c(2,0x2e,0x1d,temp_v4 + temp_v8,temp_v3 + temp_v5,0x65);
                }
              }
              else {
                FUN_00164b5c(2,0x2e,0x1c,temp_v4 + temp_v8,temp_v3 + temp_v5,0x65);
              }
            }
            else {
              FUN_00164b5c(2,0x2e,0x1b,temp_v4 + temp_v8,temp_v3 + temp_v5,0x65);
            }
            if (temp_v9 != 1) {
              if (temp_v9 != 2) {
                if (temp_v9 != 3) {
                  temp_v12 = 0x43d;
                  temp_v13 = 0x43e;
                  temp_v17 = 0x43f;
                  temp_v15 = 0x442;
                  temp_v16 = 0x440;
                }
                else {
                  temp_v12 = 0x419;
                  temp_v13 = 0x41a;
                  temp_v17 = 0x41b;
                  temp_v15 = 0x41e;
                  temp_v16 = 0x41c;
                }
              }
              else {
                temp_v12 = 0x408;
                temp_v13 = 0x409;
                temp_v17 = 0x40a;
                temp_v15 = 0x40d;
                temp_v16 = 0x40b;
              }
            }
            else {
              temp_v12 = 0x3f7;
              temp_v13 = 0x3f8;
              temp_v17 = 0x3f9;
              temp_v15 = 0x3fc;
              temp_v16 = 0x3fa;
            }
            if (temp_v10 != 0) {
              FUN_00184310();
              temp_v6 = FUN_001834a4(0x2e,temp_v12);
              FUN_00169a1c(*(unsigned short *)(temp_v10 + 0x9c),temp_v4 + *(short *)(temp_v6 + 8) + temp_v8,
                           temp_v3 + *(short *)(temp_v6 + 10) + temp_v5,0x65);
            }
            if (temp_v9 == 1) {
              temp_v12 = 0x34220600;
            }
            else if (temp_v9 == 2) {
              temp_v12 = 0x2b373700;
            }
            else if (temp_v9 == 3) {
              temp_v12 = 0x3d1e0900;
            }
            else {
              temp_v12 = 0xffffff00;
            }
            temp_v9 = FUN_001834a4(0x2e,temp_v13);
            temp_v0 = *(short *)(temp_v9 + 8);
            temp_v1 = *(short *)(temp_v9 + 10);
            temp_v9 = temp_v2 + temp_v7 * 4;
            FUN_001527d8(*(unsigned int *)(temp_v9 + 0x208),temp_v12);
            FUN_0025cc78(*(unsigned int *)(temp_v9 + 0x208),temp_v0 + temp_v8 + temp_v4,temp_v3 + temp_v1 + temp_v5
                         ,0x65);
            temp_v9 = FUN_001834a4(0x2e,temp_v17);
            FUN_001835b4(2,0x2e,0x4a5,temp_v4 + *(short *)(temp_v9 + 8) + temp_v8,
                         *(short *)(temp_v9 + 10) + temp_v5 + temp_v3,0x65);
            temp_v9 = FUN_001834a4(0x2e,temp_v15);
            FUN_001834a4(0x2e,temp_v16);
            temp_v0 = *(short *)(temp_v9 + 8);
            temp_v1 = *(short *)(temp_v9 + 10);
            drawSetColorFromRGBA8(0xffffffff);
            textFormatBuffer(temp_v14,&LAB_002c0234,temp_v18);
            FUN_00180310(6,temp_v4 + temp_v0 + temp_v8,temp_v3 + temp_v1 + temp_v5,1,3,0x65,temp_v14);
            FUN_00183bb0();
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 10);
        FUN_00183bb0();
        efctSetSpeed();
        temp_v4 = 0;
      }
    }
  }
  return temp_v4;
}

} /* extern "C" */
