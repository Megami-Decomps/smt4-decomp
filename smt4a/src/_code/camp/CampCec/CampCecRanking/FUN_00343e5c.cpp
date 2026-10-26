/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343e5c` (_code @ 0x343e5c, 0x4a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "util/MathFunctions.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int textFormatBuffer(...);
int FUN_001527d8(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00169a1c(...);
int FUN_00180310(...);

int FUN_00183bb0(void);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int FUN_0025cc78(...);

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} void_stack;

extern int g_campCecRanking; /* 0x57f11c */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_0019e52c(unsigned short);
/* Supplied declaration required: FUN_0025cc78. */
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);


int FUN_00343e5c(void)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15 [132];
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  
  temp_v2 = g_campCecRanking;
  temp_v4 = gameFlagIsSet(0x4f7);
  temp_v5 = 0;
  if (temp_v4 != 0) {
    temp_v5 = *(int *)(temp_v2 + 4);
  }
  if (temp_v4 != 0 && temp_v5 != 0) {
    if (temp_v5 == 6) {
      temp_v5 = 0;
    }
    else {
      temp_v4 = asdTMTexTableNodeIsLoaded(0x2e,1);
      temp_v5 = 0;
      if (temp_v4 != 0) {
        temp_v5 = vec2GetXInt(reinterpret_cast<const void *>(temp_v2 + 0xc));
        temp_v4 = vec2GetYInt(temp_v2 + 0xc);
        efctSetSpeed();
        FUN_00164b5c(2,0x2e,0x1f,temp_v5,temp_v4,0x65);
        temp_v8 = 0;
        do {
          temp_v12 = 0;
          temp_v9 = temp_v2 + temp_v8 * 0xc;
          if (*(unsigned short *)(temp_v9 + 0x1b4) - 1 < 8) {
            temp_v3 = FUN_0036fcd0((unsigned int)*(unsigned short *)(temp_v9 + 0x1b4),0);
            temp_v12 = FUN_0019e52c(temp_v3);
          }
          temp_v16 = *(int *)(temp_v9 + 0x1b8);
          temp_v13 = temp_v16 == 0;
          temp_v10 = *(int *)(temp_v9 + 0x1bc);
          temp_v9 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v8 + 0x49e));
          temp_v11 = (int)*(short *)(temp_v9 + 8);
          temp_v9 = (int)*(short *)(temp_v9 + 10);
          if (temp_v12 == 0 || temp_v13) {
            FUN_00164b5c(2,0x2e,0x23,temp_v5 + temp_v11,temp_v4 + temp_v9,0x65);
          }
          else {
            if (temp_v10 != 1) {
              if (temp_v10 != 2) {
                if (temp_v10 != 3) {
                  FUN_00164b5c(2,0x2e,0x23,temp_v5 + temp_v11,temp_v4 + temp_v9,0x65);
                  temp_v6 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,0x43c));
                  FUN_001835b4(2,0x2e,temp_v10 + 0x421,temp_v5 + temp_v11 + (int)*(short *)(temp_v6 + 8),
                               temp_v4 + temp_v9 + (int)*(short *)(temp_v6 + 10),0x65);
                }
                else {
                  FUN_00164b5c(2,0x2e,0x22,temp_v5 + temp_v11,temp_v4 + temp_v9,0x65);
                }
              }
              else {
                FUN_00164b5c(2,0x2e,0x21,temp_v5 + temp_v11,temp_v4 + temp_v9,0x65);
              }
            }
            else {
              FUN_00164b5c(2,0x2e,0x20,temp_v5 + temp_v11,temp_v4 + temp_v9,0x65);
            }
            if (temp_v10 != 1) {
              if (temp_v10 != 2) {
                if (temp_v10 != 3) {
                  temp_v14 = 0x43d;
                  temp_v19 = 0x43e;
                  temp_v18 = 0x43f;
                  temp_v17 = 0x442;
                  temp_v7 = 0x440;
                }
                else {
                  temp_v14 = 0x481;
                  temp_v19 = 0x482;
                  temp_v18 = 0x483;
                  temp_v17 = 0x486;
                  temp_v7 = 0x484;
                }
              }
              else {
                temp_v14 = 0x470;
                temp_v19 = 0x471;
                temp_v18 = 0x472;
                temp_v17 = 0x475;
                temp_v7 = 0x473;
              }
            }
            else {
              temp_v14 = 0x45f;
              temp_v19 = 0x460;
              temp_v18 = 0x461;
              temp_v17 = 0x464;
              temp_v7 = 0x462;
            }
            if (temp_v12 != 0) {
              FUN_00184310();
              temp_v6 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v14));
              FUN_00169a1c(*(unsigned short *)(temp_v12 + 0x9c),temp_v5 + *(short *)(temp_v6 + 8) + temp_v11,
                           temp_v4 + *(short *)(temp_v6 + 10) + temp_v9,0x65);
            }
            if (temp_v10 == 1) {
              temp_v14 = 0x34220600;
            }
            else if (temp_v10 == 2) {
              temp_v14 = 0x2b373700;
            }
            else if (temp_v10 == 3) {
              temp_v14 = 0x3d1e0900;
            }
            else {
              temp_v14 = 0xffffff00;
            }
            temp_v12 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v19));
            temp_v0 = *(short *)(temp_v12 + 8);
            temp_v1 = *(short *)(temp_v12 + 10);
            temp_v12 = temp_v2 + temp_v8 * 4;
            FUN_001527d8(*(unsigned int *)(temp_v12 + 600),temp_v14);
            FUN_0025cc78(*(unsigned int *)(temp_v12 + 600),temp_v5 + temp_v0 + temp_v11,temp_v4 + temp_v1 + temp_v9
                         ,0x65);
            if (temp_v10 < 4) {
              temp_v12 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v18));
              FUN_001835b4(2,0x2e,0x4a5,temp_v5 + *(short *)(temp_v12 + 8) + temp_v11,
                           temp_v4 + *(short *)(temp_v12 + 10) + temp_v9,0x65);
            }
            temp_v12 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v17));
            reinterpret_cast<int>(asdTMTexTableEntryAt(0x2e,temp_v7));
            temp_v0 = *(short *)(temp_v12 + 8);
            temp_v1 = *(short *)(temp_v12 + 10);
            drawSetColorFromRGBA8(0xffffffff);
            textFormatBuffer(temp_v15,"%d",temp_v16);
            FUN_00180310(6,temp_v5 + temp_v11 + temp_v0,temp_v4 + temp_v1 + temp_v9,1,3,0x65,temp_v15);
            FUN_00183bb0();
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 7);
        efctSetSpeed();
        temp_v5 = 0;
      }
    }
  }
  return temp_v5;
}

} /* extern "C" */
