/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b2d4` (_code @ 0x22b2d4, 0x3438 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_0015f858(...);
int effectDispatchSelector(...);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_003481c4(...);
int efctCallRoutineWithSpeedOverride(...);
int FUN_0047fc38(void);

int gameDataBlocksGetSaveData(void);
int FUN_00164168(...);
int FUN_00180310(...);
int FUN_00183788(...);
int FUN_00185e84(...);
int renderCtxCalculateStereoParallax(...);
int FUN_0019acdc(...);
int jobGetScalarValue(void);
int FUN_0022e9c8(void);
int compareWithFeedbackColor(...);
int FUN_0025e704(...);
int FUN_00334e1c(...);
int FUN_00345098(void);
int FUN_003fabfc(...);
int FUN_00480da8(...);
int VectorUnsignedToFloat(...);

int textFormatBuffer(...);
int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_0018408c(...);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int FUN_00230a50(...);
int FUN_002a6c3c(...);
int FUN_00334044(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_0022b6a0; /* 0x22b6a0 */
extern unsigned char LAB_0022b6b0; /* 0x22b6b0 */
extern unsigned char LAB_0022b6b8; /* 0x22b6b8 */
extern unsigned char LAB_0022b6c0; /* 0x22b6c0 */
extern unsigned char LAB_0022b6c8; /* 0x22b6c8 */
extern unsigned char LAB_0022c41c; /* 0x22c41c */
extern unsigned char LAB_0022c424; /* 0x22c424 */
extern unsigned char LAB_0022c42c; /* 0x22c42c */
extern unsigned char LAB_0022c77c; /* 0x22c77c */
extern unsigned char LAB_0022cc58; /* 0x22cc58 */
extern unsigned char LAB_0022cc60; /* 0x22cc60 */
extern unsigned char LAB_0022cc64; /* 0x22cc64 */
extern unsigned char LAB_0022d024; /* 0x22d024 */
extern unsigned char LAB_0022d028; /* 0x22d028 */
extern unsigned char LAB_0022d030; /* 0x22d030 */
extern unsigned char LAB_0022d034; /* 0x22d034 */
extern unsigned char LAB_0022d394; /* 0x22d394 */
extern unsigned char LAB_0022d39c; /* 0x22d39c */
extern unsigned char LAB_0022d3a0; /* 0x22d3a0 */
extern unsigned char LAB_0022da00; /* 0x22da00 */
extern unsigned char LAB_0022da04; /* 0x22da04 */
extern unsigned char LAB_0022da10; /* 0x22da10 */
extern unsigned char LAB_0022da18; /* 0x22da18 */
extern unsigned char LAB_0022e370; /* 0x22e370 */
extern int DAT_00588fd4; /* 0x588fd4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: gameDataBlocksGetSaveData. */
extern unsigned int FUN_0014bd84(unsigned int);
extern unsigned int FUN_0014bf3c(short, unsigned int);
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: effectDispatchSelector. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
extern unsigned int FUN_00180114(short);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183788. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_0018416c(short);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185e84. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_0019acdc. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: FUN_0022e9c8. */
/* Supplied declaration required: FUN_00230a50. */
/* Supplied declaration required: compareWithFeedbackColor. */
/* Supplied declaration required: FUN_0025e704. */
extern int FUN_0026264c(unsigned short);
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_002a6c3c. */
extern int FUN_002ef9f0(void);
extern int valueAtMostFifthOfTotal(unsigned char *, unsigned char *);
extern unsigned int heldAmountLessThan(int, int);
extern int FUN_0031e6d4(void);
/* Supplied declaration required: FUN_00334044. */
/* Supplied declaration required: FUN_00334e1c. */
/* Supplied declaration required: FUN_00345098. */
extern int FUN_003453b0(void);
/* Supplied declaration required: FUN_003481c4. */
/* Supplied declaration required: efctCallRoutineWithSpeedOverride. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003fabfc. */
/* Supplied declaration required: FUN_0047fc38. */
extern int equipmentHasPositiveUpgrade(unsigned int);
/* Supplied declaration required: FUN_00480da8. */


unsigned char FUN_0022b2d4(void)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr; 40 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned int *puVar10;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  int *piVar19;
  short *psVar20;
  unsigned int temp_v14;
  unsigned char *puVar22;
  unsigned int temp_v15;
  float temp_v16;
  unsigned int *puVar25;
  short *psVar26;
  unsigned short temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned int in_fpscr;
  float temp_v20;
  float temp_v21;
  long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  unsigned char *temp_v25;
  unsigned char *temp_v26;
  unsigned char *temp_v27 [7];
  int temp_v28;
  unsigned char temp_v29 [92];
  
  temp_v2 = DAT_00588fd4;
  temp_v28 = DAT_00588fd4;
  temp_v27[5] = (unsigned char *)0x0;
  temp_v27[6] = (unsigned char *)0x0;
  psVar26 = (short *)(DAT_00588fd4 + 0x2000);
  if (*(char *)(DAT_00588fd4 + 0x2012) == '\0') {
    return 0;
  }
  FUN_00157558(g_renderCtx);
  temp_v4 = g_renderCtx;
  temp_v3 = FUN_001692ac(1,0);
  piVar19 = (int *)(temp_v4 + 0x1258);
  temp_v7 = *piVar19;
  temp_v8 = piVar19[temp_v7 + 2];
  *piVar19 = temp_v7 + 1;
  piVar19[temp_v7 + 3] = temp_v3;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v8 != temp_v3) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  temp_v22 = 0;
  if (*(char *)(temp_v2 + 0x2018) != '\x03' && *(char *)(temp_v2 + 0x2018) != '\n') {
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,10);
    efctSetSpeed();
    temp_v24 = 1.80768e-43f;
    FUN_001835b4(2,0x12,0,temp_v27[5],temp_v27[6]);
    efctSetSpeed();
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,8);
    efctSetSpeed();
    temp_v24 = 1.80768e-43f;
    FUN_001835b4(2,0x12,1,temp_v27[5],temp_v27[6]);
    temp_v4 = temp_v28;
    if (-1 < *(char *)(temp_v28 + 0x137f)) {
      temp_v24 = 1.80768e-43f;
      FUN_001835b4(2,0x12,0xb5,temp_v27[5],temp_v27[6]);
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,9);
      if (*(char *)(temp_v4 + 0x1384) != '\0') {
        temp_v24 = 1.8357e-43f;
        FUN_001835b4(2,0x12,0xb6,temp_v27[5],temp_v27[6]);
        temp_v24 = 1.8357e-43f;
        FUN_001835b4(2,0x12,0xb7,temp_v27[5],temp_v27[6]);
      }
      if (*(char *)(temp_v4 + 0x137f) == '\0') {
        textFormatBuffer(temp_v29,&LAB_0022b6a0);
      }
      if (*(char *)(temp_v4 + 0x137f) == '\x01') {
        textFormatBuffer(temp_v29,&LAB_0022b6b0);
      }
      if (*(char *)(temp_v4 + 0x137f) == '\x02') {
        textFormatBuffer(temp_v29,&LAB_0022b6b8);
      }
      if (*(char *)(temp_v4 + 0x137f) == '\x03') {
        textFormatBuffer(temp_v29,&LAB_0022b6c0);
      }
      if (*(char *)(temp_v4 + 0x137f) == '\x04') {
        textFormatBuffer(temp_v29,&LAB_0022b6c8);
      }
      temp_v3 = FUN_001834a4(0x12,0xba);
      puVar22 = temp_v29;
      FUN_0018408c(puVar22,2);
      VectorSignedToFloat(temp_v27[5] +
                          (int)*(short *)(temp_v3 + 8) +
                          ((int)**(short **)(temp_v3 + 0xc) - (int)puVar22) / 2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v27[6] + *(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xff,temp_v29,temp_v27[5]);
      if (*(char *)(temp_v2 + 0x2017) != '\0') {
        puVar5 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v4 + 0x1390);
        FUN_00184310();
        temp_v10 = temp_v9;
        if (puVar5 != (unsigned short *)0x0) {
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x1390);
        }
        if ((puVar5 != (unsigned short *)0x0 && temp_v10 != 0) &&
           (temp_v4 = FUN_002a4b28(*puVar5), temp_v4 == 0)) {
          temp_v24 = 1.90577e-43f;
          FUN_00164b5c(2,0x12,0x1d,temp_v27[5],temp_v27[6]);
        }
      }
    }
    efctSetSpeed();
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,9);
    efctSetSpeed();
    temp_v24 = 1.80768e-43f;
    FUN_001835b4(2,0x12,2,temp_v27[5],temp_v27[6]);
  }
  temp_v4 = temp_v28;
  temp_v3 = FUN_002ef9f0();
  temp_v23 = 0x3e851eb800000000;
  if (temp_v3 != 0) {
    if (*(char *)(temp_v2 + 0x2011) != '\0') {
      temp_v1 = *(short *)(temp_v4 + 0x1390);
      goto joined_r0x0022b6e4;
    }
  }
  else {
    temp_v1 = *(short *)(temp_v4 + 0x1390);
joined_r0x0022b6e4:
    if (temp_v1 != 0) {
      switch(*(unsigned int *)(temp_v28 + 0x1368)) {
      case 0:
        if (*(int *)(temp_v28 + 0x1370) == 7) {
LAB_0022b750:
          FUN_00230a50(temp_v27 + 5,temp_v27 + 6,9);
          efctSetSpeed();
          temp_v24 = 1.80768e-43f;
          FUN_001835b4(2,0x12,3,temp_v27[5],temp_v27[6]);
          temp_v24 = 1.80768e-43f;
          FUN_001835b4(2,0x12,4,temp_v27[5],temp_v27[6]);
          temp_v24 = 1.80768e-43f;
          FUN_001835b4(2,0x12,5,temp_v27[5],temp_v27[6]);
          temp_v24 = 1.80768e-43f;
          FUN_001835b4(2,0x12,6,temp_v27[5],temp_v27[6]);
          temp_v10 = FUN_00334044();
          temp_v4 = temp_v28;
          if ((temp_v10 & 1) != 0) {
            temp_v3 = 0;
            if (temp_v3 < (int)temp_v10) {
              do {
                temp_v7 = temp_v3 + (int)(5 - temp_v10) / 2;
                temp_v8 = temp_v7 + 0x13;
                if (*(int *)(temp_v4 + 0x1374) == temp_v3) {
                  temp_v8 = temp_v7 + 0x18;
                }
                temp_v24 = 1.80768e-43f;
                FUN_001835b4(2,0x12,temp_v8,temp_v27[5],temp_v27[6]);
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < (int)temp_v10);
            }
          }
          else {
            temp_v3 = 0;
            if (temp_v3 < (int)temp_v10) {
              do {
                temp_v7 = temp_v3 + (int)(6 - temp_v10) / 2;
                temp_v8 = temp_v7 + 7;
                if (*(int *)(temp_v4 + 0x1374) == temp_v3) {
                  temp_v8 = temp_v7 + 0xd;
                }
                temp_v24 = 1.80768e-43f;
                FUN_001835b4(2,0x12,temp_v8,temp_v27[5],temp_v27[6]);
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < (int)temp_v10);
            }
          }
        }
        break;
      case 5:
      case 6:
      case 7:
      case 9:
        temp_v4 = FUN_00334044();
        if (temp_v4 >= 2) goto LAB_0022b750;
      }
      temp_v0 = *(char *)(temp_v2 + 0x2017);
      temp_v18 = temp_v0 == '\x05';
      if (temp_v18) {
        temp_v0 = *(char *)(temp_v2 + 0x2013);
      }
      if ((temp_v18 && temp_v0 == '\0') || (*(char *)(temp_v28 + 0x1366) == '\0')) {
        FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x22);
        temp_v24 = 3.09687e-43f;
        FUN_001835b4(2,0x12,0xb5,temp_v27[5],temp_v27[6]);
        temp_v24 = 3.09687e-43f;
        FUN_001835b4(2,0x12,0x93,temp_v27[5],temp_v27[6]);
      }
      if (*(int *)(temp_v28 + 0x1368) >= 8) {
        FUN_00230a50(temp_v27 + 5,temp_v27 + 6,7);
        temp_v10 = *(unsigned int *)(temp_v28 + 0x1930);
        if (*(char *)(temp_v2 + 0x2017) == '\r' || *(char *)(temp_v2 + 0x2017) == '\v') {
          temp_v10 = 0x9b9b9bff;
          efctSetSpeed();
        }
        if (*(char *)(temp_v2 + 0x2017) == '\x0e') {
          temp_v10 = 0xff;
          efctSetSpeed();
        }
        temp_v4 = temp_v28;
        temp_v0 = *(char *)(temp_v2 + 0x2018);
        if (temp_v0 != '\x04') {
          if (temp_v0 != '\x03' && temp_v0 != '\n') goto LAB_0022b9b8;
        }
        else {
          if (*(char *)(temp_v2 + 0x2017) == '\a') {
            temp_v10 = 0xffffffff;
          }
LAB_0022b9b8:
          if (*(short *)(temp_v28 + 0x138c) != 0) {
            if ((*(char *)(temp_v28 + 0x137d) != '\0') && (-1 >= *(short *)(temp_v28 + 0x1390))) {
              drawSetColorFromRGBA8(temp_v10);
              temp_v24 = 1.8357e-43f;
              FUN_001835b4(2,0x12,2000,temp_v27[5],temp_v27[6]);
            }
            else {
              drawSetColorFromRGBA8(temp_v10);
              FUN_002a6c3c((int)*(short *)(temp_v4 + 0x138c),temp_v27[5] + 2,temp_v27[6],0x83,1);
            }
            FUN_00183bb0();
          }
          else if (0 < *(short *)(temp_v28 + 0x138e)) {
            temp_v20 = (float)VectorSignedToFloat(temp_v27[5],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (float)VectorSignedToFloat(temp_v27[6],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v26 = (unsigned char *)((unsigned long long)temp_v22 >> 0x20);
            temp_v25 = (unsigned char *)romwright_f2u((float)((temp_v21 + 48.0f)));
            temp_v24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(temp_v2 + 0x2028)
                                                                          + 0x10) + 0x12),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v24 = (temp_v20 + 300.0f) - temp_v24;
            if (*(short *)(temp_v28 + 0x138e) == 0x241) {
              temp_v25 = (unsigned char *)romwright_f2u((float)((romwright_u2f((unsigned int)(temp_v25)) + 23.9f)));
            }
            VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x202c),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_003fabfc(*(unsigned int *)(temp_v2 + 0x2028),0,&temp_v24,temp_v10 | 0xff,0);
          }
        }
        efctSetSpeed();
        if (*(char *)(temp_v2 + 0x2017) == '\x0e') {
          temp_v24 = 1.97583e-43f;
          FUN_00164b5c(2,0x12,0x1a,temp_v27[5],temp_v27[6]);
        }
      }
    }
  }
  temp_v4 = temp_v28;
  if (((*(char *)(temp_v2 + 0x2018) != '\t') && (*(short *)(temp_v28 + 0x1390) != 0)) &&
     ((*(char *)(temp_v2 + 0x2011) != '\0' || (*(char *)(temp_v2 + 0x2018) != '\n')))) {
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xf);
    efctSetSpeed();
    temp_v24 = 3.0268e-43f;
    if (*(unsigned short *)(temp_v4 + 0x1392) >= 100) {
      FUN_001835b4(2,0x12,0x129,temp_v27[5],temp_v27[6]);
      temp_v24 = 3.0268e-43f;
      FUN_001835b4(2,0x12,0x12a,temp_v27[5],temp_v27[6]);
    }
    else {
      FUN_001835b4(2,0x12,0x1f,temp_v27[5],temp_v27[6]);
    }
    temp_v0 = *(char *)(temp_v2 + 0x2017);
    if ((temp_v0 != '\x0e' && temp_v0 != '\a') && temp_v0 != '\x10') {
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xf);
      if (*(unsigned short *)(temp_v4 + 0x1392) >= 100) {
        temp_v4 = FUN_001834a4(0x12,0x12e);
        temp_v27[5] = temp_v27[5] + **(short **)(temp_v4 + 0xc);
      }
      temp_v24 = 3.0268e-43f;
      FUN_00164b5c(2,0x12,0,temp_v27[5],temp_v27[6]);
    }
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x10);
    efctSetSpeed();
    temp_v24 = 3.0268e-43f;
    FUN_001835b4(2,0x12,0x2d,temp_v27[5],temp_v27[6]);
    temp_v24 = 3.0268e-43f;
    FUN_001835b4(2,0x12,0x2e,temp_v27[5],temp_v27[6]);
    if (*(char *)(temp_v2 + 0x2017) != '\x04') {
      temp_v24 = 3.0268e-43f;
      FUN_001835b4(2,0x12,0x38,temp_v27[5],temp_v27[6]);
      temp_v24 = 3.0268e-43f;
      FUN_001835b4(2,0x12,0x39,temp_v27[5],temp_v27[6]);
    }
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x11);
    efctSetSpeed();
    if (*(char *)(temp_v2 + 0x2017) != '\x04') {
      temp_v24 = 3.0268e-43f;
      FUN_001835b4(2,0x12,0x4a,temp_v27[5],temp_v27[6]);
      if (*(char *)(temp_v2 + 0x2017) != '\x04') {
        temp_v4 = 0;
        do {
          FUN_00230a50(temp_v27 + 5,temp_v27 + 6,temp_v4 + 0x12);
          efctSetSpeed();
          temp_v3 = FUN_001834a4(0x12,temp_v4 + 0x7b);
          temp_v24 = 3.0268e-43f;
          FUN_001835b4(2,0x12,0x68,temp_v27[5],temp_v27[6] + *(short *)(temp_v3 + 10));
          temp_v24 = 3.09687e-43f;
          FUN_001835b4(2,0x12,temp_v4 + 0x69,temp_v27[5],temp_v27[6] + *(short *)(temp_v3 + 10));
          if (*(char *)(temp_v2 + 0x2013) != '\0') {
            temp_v3 = FUN_001834a4(0x12,temp_v4 + 0x85);
            temp_v24 = 3.0268e-43f;
            FUN_001835b4(2,0x12,0x80,temp_v27[5] + *(short *)(temp_v3 + 8),
                         temp_v27[6] + *(short *)(temp_v3 + 10));
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 5);
      }
    }
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x17);
    efctSetSpeed();
    if ((*(char *)(temp_v2 + 0x2011) != '\0') && (*(char *)(temp_v2 + 0x2017) == '\0')) {
      temp_v24 = 3.0268e-43f;
      FUN_001835b4(2,0x12,0x8a,temp_v27[5],temp_v27[6]);
      if (*(char *)(temp_v2 + 0x2018) != '\n') {
        temp_v4 = gameFlagIsSet(0x410);
        if (temp_v4 != 0) {
          temp_v24 = 3.0268e-43f;
          FUN_001835b4(2,0x12,0x8e,temp_v27[5],temp_v27[6]);
        }
      }
      else if (*(char *)(temp_v2 + 0x20b1) == '\x01') {
        temp_v24 = 3.0268e-43f;
        FUN_001835b4(2,0x12,0x8e,temp_v27[5],temp_v27[6]);
      }
    }
  }
  temp_v4 = temp_v28;
  temp_v3 = FUN_002ef9f0();
  temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
  temp_v20 = (float)((unsigned long long)temp_v23 >> 0x20);
  if (temp_v3 != 0) {
    if (*(char *)(temp_v2 + 0x2011) == '\0') goto LAB_0022e46c;
    temp_v1 = *(short *)(temp_v4 + 0x1390);
  }
  else {
    temp_v1 = *(short *)(temp_v4 + 0x1390);
  }
  if (temp_v1 != 0) {
    psVar20 = (short *)0x0;
    if (*(char *)(temp_v2 + 0x2017) != '\0') {
      psVar20 = (short *)(unsigned int)*(unsigned short *)(temp_v28 + 0x1390);
      FUN_00184310();
    }
    temp_v4 = temp_v28;
    temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
    if (*(char *)(temp_v2 + 0x2018) != '\t') {
      if (*(char *)(temp_v28 + 0x1383) == '\0') {
        FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xe);
        temp_v22 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
        if (*(char *)(temp_v2 + 0x2017) != '\0') {
          if (*(char *)(temp_v2 + 0x2017) != '\x0e') {
            temp_v6 = FUN_00180114(*psVar20);
            textFormatBuffer(temp_v29,&LAB_0022c41c,temp_v6);
          }
          else {
            textFormatBuffer(temp_v29,&LAB_0022c424);
          }
        }
        else if (*(char *)(temp_v2 + 0x2018) != '\n') {
          temp_v6 = gameGetPlayerName();
          textFormatBuffer(temp_v29,&LAB_0022c41c,temp_v6);
        }
        else {
          textFormatBuffer(temp_v29,&LAB_0022c41c,temp_v28 + 0x1934);
        }
        temp_v6 = 0xffffffff;
        if ((*(unsigned short *)(temp_v4 + 0x13ac) & 2) != 0) {
          temp_v6 = 0xdc0f14ff;
        }
        temp_v3 = FUN_001834a4(0x12,0x1e);
        VectorSignedToFloat(temp_v27[6] + *(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v27[5] + *(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,temp_v6,temp_v29);
        if (*(char *)(temp_v2 + 0x2017) != '\0') {
          if ((*(char *)(temp_v2 + 0x2017) == '\x04') && (temp_v3 = gameFlagIsSet(0x1a3), temp_v3 != 0)) {
            textFormatBuffer(temp_v29,&LAB_0022c42c);
          }
          else {
            temp_v6 = FUN_0014bf3c(*psVar20,0);
            textFormatBuffer(temp_v29,&LAB_0022c41c,temp_v6);
          }
        }
        else {
          textFormatBuffer(temp_v29,temp_v28 + 0x2068);
        }
        temp_v3 = FUN_001834a4(0x12,0x1d);
        VectorSignedToFloat(temp_v27[6] + *(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v27[5] + *(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,0xffffffff,temp_v29);
      }
      temp_v10 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
      temp_v0 = *(char *)(temp_v2 + 0x2017);
      if ((((!(temp_v0 == '\x01' || temp_v0 == '\x02')) && (!(temp_v0 == '\x03' || temp_v0 == '\x05'))) &&
          (!(temp_v0 == '\b' || temp_v0 == '\t'))) &&
         ((!(temp_v0 == '\v' || temp_v0 == '\f') && (!(temp_v0 == '\r' || temp_v0 == '\x0f'))))) {
        if (temp_v0 == '\x04') {
          temp_v1 = *psVar20;
          temp_v14 = 0;
          do {
            temp_v3 = FUN_003e4d68(temp_v14 & 0xffff);
            temp_v10 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
            if (((*(unsigned int *)(temp_v3 + 0x130) & 1) != 0) && (*(short *)(temp_v3 + 0x62) == temp_v1)) {
              FUN_0019acdc(*(unsigned short *)(temp_v3 + 300),0);
              temp_v3 = FUN_003453b0();
              if (temp_v3 != 0) {
                temp_v24 = 3.09687e-43f;
                FUN_001835b4(2,0x12,0x133,temp_v27[5],temp_v27[6]);
              }
              break;
            }
            temp_v14 = temp_v14 + 1;
          } while ((int)temp_v14 < 0xc);
        }
      }
      else {
        temp_v3 = FUN_0018416c(*psVar20);
        if (temp_v3 != 0) {
          temp_v24 = 3.09687e-43f;
          FUN_001835b4(2,0x12,0x133,temp_v27[5],temp_v27[6]);
        }
      }
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xf);
      efctSetSpeed();
      puVar22 = (unsigned char *)(unsigned int)*(unsigned short *)(temp_v4 + 0x1392);
      drawSetColorFromRGBA8(0xffffffff);
      if (*(char *)(temp_v2 + 0x2013) != '\0') {
        puVar22 = (unsigned char *)(unsigned int)*(unsigned short *)(temp_v28 + 0x19d2);
        puVar7 = (unsigned char *)(unsigned int)*(unsigned short *)(temp_v4 + 0x1392);
        puVar8 = puVar7;
        if (puVar22 < puVar7) {
          puVar8 = (unsigned char *)0xdc0f14ff;
        }
        if (puVar7 < puVar22) {
          puVar8 = (unsigned char *)0x72e027ff;
        }
        if (puVar22 != puVar7) {
          drawSetColorFromRGBA8(puVar8);
        }
        else {
          drawSetColorFromRGBA8(0xffffffff);
        }
      }
      if (*(unsigned short *)(temp_v4 + 0x1392) >= 100) {
        temp_v3 = FUN_001834a4(0x12,0x12d);
        temp_v24 = 3.09687e-43f;
        temp_v25 = &LAB_0022c77c;
        temp_v26 = puVar22;
        FUN_00180310(6,temp_v27[5] + *(short *)(temp_v3 + 8),temp_v27[6] + *(short *)(temp_v3 + 10),1,3)
        ;
      }
      else {
        temp_v3 = FUN_001834a4(0x12,0x21);
        temp_v24 = 3.09687e-43f;
        temp_v25 = &LAB_0022c77c;
        temp_v26 = puVar22;
        FUN_00180310(6,temp_v27[5] + *(short *)(temp_v3 + 8),temp_v27[6] + *(short *)(temp_v3 + 10),1,2)
        ;
      }
      FUN_00183bb0();
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xf);
      efctSetSpeed();
      temp_v3 = temp_v28;
      temp_v0 = *(char *)(temp_v2 + 0x2017);
      if ((temp_v0 != '\x0e' && temp_v0 != '\a') && temp_v0 != '\x10') {
        puVar22 = *(unsigned char **)(temp_v28 + 0x1394);
        drawSetColorFromRGBA8(0xdcdcdcff);
        if (*(char *)(temp_v2 + 0x2013) != '\0') {
          puVar25 = (unsigned int *)(temp_v28 + 0x19d4);
          puVar22 = (unsigned char *)*puVar25;
          temp_v7 = compareWithFeedbackColor(*(unsigned short *)(temp_v28 + 0x19d2),*(unsigned short *)(temp_v4 + 0x1392),0
                               );
          if ((temp_v7 == 0) &&
             (temp_v3 = compareWithFeedbackColor(*(unsigned int *)(temp_v3 + 0x1394),*puVar25,0), temp_v3 == 0)) {
            drawSetColorFromRGBA8(0xdcdcdcff);
          }
        }
        if (*(unsigned short *)(temp_v4 + 0x1392) >= 100) {
          temp_v3 = FUN_001834a4(0x12,0x12e);
          temp_v27[5] = temp_v27[5] + **(short **)(temp_v3 + 0xc);
        }
        if (-1 < (int)puVar22) {
          temp_v3 = FUN_001834a4(0x12,0x2c);
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022c77c;
          temp_v26 = puVar22;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v3 + 8),temp_v27[6] + *(short *)(temp_v3 + 10),1,
                       8);
          FUN_00183bb0();
        }
      }
      gameDataBlocksGetSaveData();
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x10);
      temp_v22 = (unsigned long long)temp_v10 << 0x20;
      efctSetSpeed();
      temp_v3 = temp_v28;
      puVar8 = *(unsigned char **)(temp_v28 + 0x13a0);
      puVar7 = *(unsigned char **)(temp_v28 + 0x1398);
      puVar22 = puVar8;
      if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
         (((*(char *)(temp_v2 + 0x2017) != '\a' ||
           (temp_v7 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v7 != 0)) &&
          (puVar22 = puVar7, *(char *)(temp_v2 + 0x2017) == '\x10')))) {
        puVar8 = *(unsigned char **)(temp_v2 + 0x20e8);
        puVar22 = puVar8;
      }
      temp_v0 = *(char *)(temp_v2 + 0x2017);
      temp_v10 = 0;
      if (((temp_v0 == '\0' || temp_v0 == '\x02') || (temp_v0 == '\x04' || temp_v0 == '\x11')) &&
         (*(char *)(temp_v2 + 0x2018) != '\n')) {
        if (temp_v0 != '\x11') {
          temp_v10 = heldAmountLessThan((int)(short)(int)puVar8,(int)*(short *)(temp_v4 + 0x1390));
        }
        else {
          temp_v10 = (unsigned int)((int)*(short *)(temp_v4 + 0x13ae) < (int)puVar8);
          if ((int)puVar8 <= (int)*(short *)(temp_v4 + 0x13ae)) {
            temp_v10 = 0;
          }
        }
      }
      if (*(char *)(temp_v2 + 0x2013) != '\0') {
        puVar8 = (unsigned char *)(*(int *)(temp_v28 + 0x19e0) + (int)*psVar26);
        puVar22 = *(unsigned char **)(temp_v28 + 0x19d8);
        puVar9 = *(unsigned char **)(temp_v3 + 0x13a0);
        puVar7 = puVar9;
        if ((int)puVar8 < (int)puVar9) {
          puVar7 = (unsigned char *)0xdc0f14ff;
        }
        if (puVar8 == puVar9) {
          puVar7 = (unsigned char *)0xffffffff;
        }
        if ((int)puVar9 < (int)puVar8) {
          drawSetColorFromRGBA8(0x72e027ff);
        }
        else {
          drawSetColorFromRGBA8(puVar7);
        }
        temp_v0 = *(char *)(temp_v2 + 0x2017);
        if ((temp_v0 == '\t' || temp_v0 == '\n') ||
           ((temp_v0 == '\v' || temp_v0 == '\b') || temp_v0 == '\x03')) {
          puVar22 = puVar8;
        }
      }
      else if (temp_v10 != 0) {
        drawSetColorFromRGBA8(0x6ef0ffff);
      }
      temp_v7 = valueAtMostFifthOfTotal(puVar22,puVar8);
      if (temp_v7 != 0) {
        drawSetColorFromRGBA8(0xdc0f14ff);
      }
      temp_v7 = FUN_001834a4(0x12,0x37);
      if (*(char *)(temp_v2 + 0x20f0) != '\0') {
        if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
           ((*(char *)(temp_v2 + 0x2017) != '\a' ||
            (temp_v8 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v8 != 0)))) {
          temp_v0 = *(char *)(temp_v2 + 0x2018);
          temp_v18 = temp_v0 == '\x04';
          if (temp_v18) {
            temp_v0 = *(char *)(temp_v2 + 0x2017);
          }
          temp_v19 = temp_v0 != '\a';
          if (!temp_v18 || temp_v19) {
            temp_v0 = *(char *)(temp_v2 + 0x2017);
          }
          if ((!temp_v18 || temp_v19) && temp_v0 != '\x10') {
            if ((int)puVar22 >= 10000) {
              temp_v24 = 3.09687e-43f;
              temp_v25 = &LAB_0022cc58;
              FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                           temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
            }
            else {
              temp_v24 = 3.09687e-43f;
              temp_v25 = &LAB_0022c77c;
              temp_v26 = puVar22;
              FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                           temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
            }
          }
          else {
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022cc60;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
          }
        }
        else {
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022cc60;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       1,4);
        }
      }
      else {
        temp_v26 = (unsigned char *)0x270f;
        if ((int)puVar22 < 10000) {
          temp_v26 = puVar22;
        }
        temp_v24 = 3.09687e-43f;
        temp_v25 = &LAB_0022c77c;
        FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),1,
                     4);
      }
      FUN_00183bb0();
      if (*(char *)(temp_v2 + 0x2013) != '\0') {
        puVar9 = *(unsigned char **)(temp_v3 + 0x13a0);
        puVar7 = puVar9;
        if (puVar8 == puVar9) {
          puVar7 = (unsigned char *)0xffffffff;
        }
        if ((int)puVar8 < (int)puVar9) {
          puVar7 = (unsigned char *)0xdc0f14ff;
        }
        if ((int)puVar9 < (int)puVar8) {
          puVar7 = (unsigned char *)0x72e027ff;
        }
        drawSetColorFromRGBA8(puVar7);
      }
      else if (temp_v10 != 0) {
        puVar7 = (unsigned char *)0x6ef0ffff;
        drawSetColorFromRGBA8(puVar7);
      }
      temp_v7 = FUN_001834a4(0x12,0x32);
      if (*(char *)(temp_v2 + 0x20f0) != '\0') {
        if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
           (((*(char *)(temp_v2 + 0x2017) != '\a' ||
             (temp_v8 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v8 != 0)) &&
            (*(char *)(temp_v2 + 0x2017) != '\x10')))) {
          if ((int)puVar8 >= 10000) {
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022cc58;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
          }
          else {
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022c77c;
            temp_v26 = puVar8;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
          }
        }
        else {
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022cc60;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       1,4);
        }
      }
      else {
        temp_v26 = (unsigned char *)0x270f;
        if ((int)puVar8 < 10000) {
          temp_v26 = puVar8;
        }
        temp_v24 = 3.09687e-43f;
        temp_v25 = &LAB_0022c77c;
        FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),1,
                     4);
      }
      FUN_00183bb0();
      temp_v7 = FUN_001834a4(0x12,0x33);
      temp_v25 = &LAB_0022cc64;
      temp_v24 = 3.09687e-43f;
      FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),0,1)
      ;
      temp_v27[4] = (unsigned char *)0x0;
      temp_v27[1] = temp_v27[5];
      temp_v27[2] = temp_v27[6];
      temp_v27[3] = (unsigned char *)0xdd;
      temp_v25 = (unsigned char *)0x45;
      temp_v24 = 9.3887e-44f;
      temp_v26 = (unsigned char *)0x44;
      temp_v27[0] = (unsigned char *)0x46;
      FUN_00183788(puVar22,puVar8,*(unsigned int *)(temp_v2 + 0x201c),0,0x12);
      if (*(int *)(temp_v2 + 0x201c) != 0) {
        efctSetSpeed();
        temp_v27[3] = (unsigned char *)0xde;
        temp_v27[4] = (unsigned char *)0x1;
        temp_v24 = 9.3887e-44f;
        temp_v25 = (unsigned char *)0x45;
        temp_v26 = (unsigned char *)0x44;
        temp_v27[0] = (unsigned char *)0x46;
        temp_v27[1] = temp_v27[5];
        temp_v27[2] = temp_v27[6];
        FUN_00183788(puVar22,puVar8,*(unsigned int *)(temp_v2 + 0x201c),0,0x12);
        efctSetSpeed();
      }
      if ((*(char *)(temp_v2 + 0x2013) != '\0') &&
         (puVar22 = (unsigned char *)
                    ((*(int *)(temp_v28 + 0x19e0) + (int)*psVar26) - *(int *)(temp_v3 + 0x13a0)),
         puVar22 != (unsigned char *)0x0)) {
        temp_v7 = FUN_001834a4(0x12,0xce);
        puVar8 = puVar22;
        if ((int)puVar22 < 0) {
          puVar8 = (unsigned char *)-(int)puVar22;
        }
        if (puVar8 + -10 < (unsigned char *)0x5a) {
          temp_v7 = FUN_001834a4(0x12,0xcf);
        }
        else if (puVar8 + -100 < (unsigned char *)0x384) {
          temp_v7 = FUN_001834a4(0x12,0xd0);
        }
        else if ((int)puVar8 >= 1000) {
          temp_v7 = FUN_001834a4(0x12,0xd1);
        }
        if ((int)puVar22 < 0) {
          drawSetColorFromRGBA8(0xfa282dff);
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022d028;
          temp_v26 = &LAB_0022d024;
          temp_v27[0] = puVar8;
          FUN_00180310(2,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       0,3);
        }
        else {
          drawSetColorFromRGBA8(0x72e027ff);
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022d028;
          temp_v26 = &LAB_0022d030;
          temp_v27[0] = puVar8;
          FUN_00180310(2,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       0,3);
        }
      }
      temp_v0 = *(char *)(temp_v2 + 0x2017);
      if (temp_v0 != '\x04') {
        puVar8 = *(unsigned char **)(temp_v3 + 0x13a4);
        puVar7 = *(unsigned char **)(temp_v3 + 0x139c);
        puVar22 = puVar8;
        if (((temp_v0 != '\x0e') &&
            ((temp_v0 != '\a' || (temp_v7 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v7 != 0)
             ))) && (puVar22 = puVar7, *(char *)(temp_v2 + 0x2017) == '\x10')) {
          puVar8 = *(unsigned char **)(temp_v2 + 0x20ec);
          puVar22 = puVar8;
        }
        if (*(char *)(temp_v2 + 0x2013) != '\0') {
          puVar8 = (unsigned char *)(*(int *)(temp_v28 + 0x19e4) + (int)*(short *)(temp_v2 + 0x2002));
          puVar7 = *(unsigned char **)(temp_v3 + 0x13a4);
          puVar10 = (unsigned int *)(temp_v28 + 0x19dc);
          puVar22 = (unsigned char *)*puVar10;
          if ((int)puVar8 < (int)puVar7) {
            puVar10 = (unsigned int *)0xdc0f14ff;
          }
          if (puVar8 == puVar7) {
            puVar10 = (unsigned int *)0xffffffff;
          }
          if ((int)puVar7 < (int)puVar8) {
            drawSetColorFromRGBA8(0x72e027ff);
          }
          else {
            drawSetColorFromRGBA8(puVar10);
          }
          temp_v0 = *(char *)(temp_v2 + 0x2017);
          if ((temp_v0 == '\t' || temp_v0 == '\n') ||
             ((temp_v0 == '\v' || temp_v0 == '\b') || temp_v0 == '\x03')) {
            puVar22 = puVar8;
          }
        }
        temp_v7 = FUN_001834a4(0x12,0x42);
        if (*(char *)(temp_v2 + 0x20f0) != '\0') {
          if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
             ((*(char *)(temp_v2 + 0x2017) != '\a' ||
              (temp_v8 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v8 != 0)))) {
            temp_v0 = *(char *)(temp_v2 + 0x2018);
            temp_v18 = temp_v0 == '\x04';
            if (temp_v18) {
              temp_v0 = *(char *)(temp_v2 + 0x2017);
            }
            temp_v19 = temp_v0 != '\a';
            if (!temp_v18 || temp_v19) {
              temp_v0 = *(char *)(temp_v2 + 0x2017);
            }
            if ((!temp_v18 || temp_v19) && temp_v0 != '\x10') {
              if ((int)puVar22 >= 10000) {
                temp_v24 = 3.09687e-43f;
                temp_v25 = &LAB_0022cc58;
                FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                             temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
              }
              else {
                temp_v24 = 3.09687e-43f;
                temp_v25 = &LAB_0022d034;
                temp_v26 = puVar22;
                FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                             temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
              }
            }
            else {
              temp_v24 = 3.09687e-43f;
              temp_v25 = &LAB_0022cc60;
              FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                           temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
            }
          }
          else {
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022cc60;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
          }
        }
        else {
          temp_v26 = (unsigned char *)0x270f;
          if ((int)puVar22 < 10000) {
            temp_v26 = puVar22;
          }
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022d034;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       1,4);
        }
        temp_v7 = FUN_001834a4(0x12,0x3d);
        if (*(char *)(temp_v2 + 0x20f0) != '\0') {
          if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
             (((*(char *)(temp_v2 + 0x2017) != '\a' ||
               (temp_v8 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v8 != 0)) &&
              (*(char *)(temp_v2 + 0x2017) != '\x10')))) {
            if ((int)puVar8 >= 10000) {
              temp_v24 = 3.09687e-43f;
              temp_v25 = &LAB_0022d394;
              FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                           temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
            }
            else {
              temp_v24 = 3.09687e-43f;
              temp_v25 = &LAB_0022d034;
              temp_v26 = puVar8;
              FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                           temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
            }
          }
          else {
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022d39c;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,4);
          }
        }
        else {
          temp_v26 = (unsigned char *)0x270f;
          if ((int)puVar8 < 10000) {
            temp_v26 = puVar8;
          }
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022d034;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       1,4);
        }
        FUN_00183bb0();
        temp_v7 = FUN_001834a4(0x12,0x3e);
        temp_v25 = &LAB_0022d3a0;
        temp_v24 = 3.09687e-43f;
        FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),0,
                     1);
        temp_v27[0] = temp_v27[5];
        temp_v27[1] = temp_v27[6];
        temp_v24 = 9.94922e-44f;
        temp_v27[3] = (unsigned char *)0x0;
        temp_v26 = (unsigned char *)0x48;
        temp_v25 = (unsigned char *)0x49;
        temp_v27[2] = (unsigned char *)0xdd;
        FUN_0025e704(puVar22,puVar8,*(unsigned int *)(temp_v2 + 0x2020),0,0x12);
        if (*(int *)(temp_v2 + 0x2020) != 0) {
          efctSetSpeed();
          temp_v25 = (unsigned char *)0x49;
          temp_v24 = 9.94922e-44f;
          temp_v27[2] = (unsigned char *)0xde;
          temp_v27[3] = (unsigned char *)0x1;
          temp_v26 = (unsigned char *)0x48;
          temp_v27[0] = temp_v27[5];
          temp_v27[1] = temp_v27[6];
          FUN_0025e704(puVar22,puVar8,*(unsigned int *)(temp_v2 + 0x2020),0,0x12);
          efctSetSpeed();
        }
        if ((*(char *)(temp_v2 + 0x2013) != '\0') &&
           (puVar22 = (unsigned char *)
                      ((*(int *)(temp_v28 + 0x19e4) + (int)*(short *)(temp_v2 + 0x2002)) -
                      *(int *)(temp_v3 + 0x13a4)), puVar22 != (unsigned char *)0x0)) {
          temp_v7 = FUN_001834a4(0x12,0xd4);
          puVar8 = puVar22;
          if ((int)puVar22 < 0) {
            puVar8 = (unsigned char *)-(int)puVar22;
          }
          if (puVar8 + -10 < (unsigned char *)0x5a) {
            temp_v7 = FUN_001834a4(0x12,0xd5);
          }
          else if (puVar8 + -100 < (unsigned char *)0x384) {
            temp_v7 = FUN_001834a4(0x12,0xd6);
          }
          else if ((int)puVar8 >= 1000) {
            temp_v7 = FUN_001834a4(0x12,0xd7);
          }
          if ((int)puVar22 < 0) {
            drawSetColorFromRGBA8(0xfa282dff);
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022d028;
            temp_v26 = &LAB_0022d024;
            temp_v27[0] = puVar8;
            FUN_00180310(2,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),0,3);
          }
          else {
            drawSetColorFromRGBA8(0x72e027ff);
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022d028;
            temp_v26 = &LAB_0022d030;
            temp_v27[0] = puVar8;
            FUN_00180310(2,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),0,3);
          }
        }
        if (*(char *)(temp_v2 + 0x2017) != '\x04') {
          FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x11);
          efctSetSpeed();
          FUN_00183bb0();
          temp_v7 = 0;
          do {
            temp_v10 = 0;
            temp_v8 = temp_v28 + temp_v7;
            temp_v11 = (unsigned int)*(unsigned char *)(temp_v8 + 0x13ca);
            temp_v14 = (unsigned int)*(unsigned char *)(temp_v8 + 0x19aa);
            if (temp_v14 != temp_v11) {
              temp_v10 = temp_v14;
              FUN_00345098();
            }
            else {
              temp_v14 = temp_v11;
              if ((*(char *)(temp_v2 + 0x2013) != '\0') &&
                 (temp_v14 = (unsigned int)*(unsigned char *)(temp_v8 + 0x1a0a), temp_v14 != temp_v11)) {
                temp_v10 = temp_v14;
                FUN_00345098();
              }
            }
            if ((*(char *)(temp_v2 + 0x2017) != '\x0e') &&
               (((*(char *)(temp_v2 + 0x2017) != '\a' ||
                 (temp_v8 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v8 != 0)) &&
                (*(char *)(temp_v2 + 0x2017) != '\x10')))) {
              if (temp_v14 == 0) {
                temp_v8 = 0x50;
              }
              else if (temp_v14 == 1) {
                temp_v8 = 0x4b;
              }
              else if (temp_v14 == 2) {
                temp_v8 = 0x4f;
              }
              else if (temp_v14 == 3) {
                temp_v8 = 0x4c;
              }
              else if (temp_v14 == 4) {
                temp_v8 = 0x4d;
              }
              else if (temp_v14 != 5) {
                temp_v8 = 0x51;
              }
              else {
                temp_v8 = 0x4e;
              }
            }
            else {
              temp_v8 = 0x51;
            }
            if (0 < (int)temp_v10) {
              temp_v8 = temp_v8 + 7;
            }
            if ((int)temp_v10 < 0) {
              temp_v8 = temp_v8 + 0xe;
            }
            temp_v5 = FUN_001834a4(0x12,temp_v7 + 0x60);
            temp_v24 = 3.09687e-43f;
            FUN_001835b4(2,0x12,temp_v8,temp_v27[5] + *(short *)(temp_v5 + 8),
                         temp_v27[6] + *(short *)(temp_v5 + 10));
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 8);
        }
      }
      temp_v7 = temp_v28;
      temp_v10 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
      if (*(char *)(temp_v2 + 0x2017) != '\x04') {
        temp_v8 = 0;
        do {
          FUN_00334e1c(temp_v7,temp_v8);
          temp_v10 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 5);
      }
      temp_v22 = (unsigned long long)temp_v10 << 0x20;
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0x17);
      efctSetSpeed();
      drawSetColorFromRGBA8(0xffffffff);
      if ((*(char *)(temp_v2 + 0x2011) != '\0') && (*(char *)(temp_v2 + 0x2017) == '\0')) {
        puVar22 = (unsigned char *)(int)*(short *)(temp_v4 + 0x13a8);
        if (*(char *)(temp_v2 + 0x2013) != '\0') {
          temp_v24 = 3.09687e-43f;
          FUN_001835b4(2,0x12,0xe6,temp_v27[5],temp_v27[6]);
          temp_v7 = temp_v28;
          puVar8 = (unsigned char *)
                   ((int)*(short *)(temp_v28 + 0x19e8) - (int)*(short *)(temp_v4 + 0x13a8));
          if (puVar8 != (unsigned char *)0x0) {
            puVar22 = puVar8;
          }
          if ((int)puVar8 < 0) {
            puVar22 = (unsigned char *)-(int)puVar8;
          }
          if (puVar8 != (unsigned char *)0x0) {
            temp_v8 = FUN_001834a4(0x12,0xdb);
            if (puVar22 + -10 < (unsigned char *)0x5a) {
              temp_v8 = FUN_001834a4(0x12,0xda);
            }
            else if (puVar22 + -100 < (unsigned char *)0x384) {
              temp_v8 = FUN_001834a4(0x12,0xd9);
            }
            if ((int)puVar8 < 0) {
              drawSetColorFromRGBA8(0xfa282dff);
              temp_v25 = &LAB_0022da04;
              temp_v24 = 3.09687e-43f;
              temp_v26 = &LAB_0022da00;
              temp_v27[0] = puVar22;
              FUN_00180310(2,temp_v27[5] + *(short *)(temp_v8 + 8),
                           temp_v27[6] + *(short *)(temp_v8 + 10),0,3);
            }
            else {
              drawSetColorFromRGBA8(0x72e027ff);
              temp_v25 = &LAB_0022da04;
              temp_v26 = &LAB_0022da10;
              temp_v24 = 3.09687e-43f;
              temp_v27[0] = puVar22;
              FUN_00180310(2,temp_v27[5] + *(short *)(temp_v8 + 8),
                           temp_v27[6] + *(short *)(temp_v8 + 10),0,3);
            }
          }
          temp_v5 = (int)*(short *)(temp_v7 + 0x19e8);
          temp_v12 = (int)*(short *)(temp_v4 + 0x13a8);
          temp_v8 = temp_v5;
          if (temp_v5 < temp_v12) {
            temp_v8 = -0x23f0eb01;
          }
          if (temp_v5 == temp_v12) {
            temp_v8 = -1;
          }
          if (temp_v12 < temp_v5) {
            drawSetColorFromRGBA8(0x72e027ff);
          }
          else {
            drawSetColorFromRGBA8(temp_v8);
          }
          puVar22 = (unsigned char *)(int)*(short *)(temp_v7 + 0x19e8);
        }
        temp_v7 = FUN_001834a4(0x12,0x8d);
        temp_v24 = 3.09687e-43f;
        temp_v25 = &LAB_0022da18;
        temp_v26 = puVar22;
        FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),1,
                     3);
        if (*(char *)(temp_v2 + 0x2018) != '\n') {
          temp_v7 = gameFlagIsSet(0x410);
          if (temp_v7 != 0) {
            puVar22 = (unsigned char *)(int)*(short *)(temp_v4 + 0x13aa);
            if (*(char *)(temp_v2 + 0x2013) != '\0') {
              temp_v24 = 3.09687e-43f;
              FUN_001835b4(2,0x12,0xe7,temp_v27[5],temp_v27[6]);
              temp_v7 = temp_v28;
              temp_v8 = temp_v28 + 0x1900;
              puVar8 = (unsigned char *)
                       ((int)*(short *)(temp_v28 + 0x19ea) - (int)*(short *)(temp_v4 + 0x13aa));
              if ((int)puVar8 < 0) {
                puVar22 = (unsigned char *)-(int)puVar8;
              }
              if (0 < (int)puVar8) {
                puVar22 = puVar8;
              }
              if (puVar8 != (unsigned char *)0x0) {
                temp_v5 = FUN_001834a4(0x12,0xe1);
                if (puVar22 + -10 < (unsigned char *)0x5a) {
                  temp_v5 = FUN_001834a4(0x12,0xe0);
                }
                else if (puVar22 + -100 < (unsigned char *)0x384) {
                  temp_v5 = FUN_001834a4(0x12,0xdf);
                }
                if ((int)puVar8 < 0) {
                  drawSetColorFromRGBA8(0xfa282dff);
                  temp_v25 = &LAB_0022da04;
                  temp_v24 = 3.09687e-43f;
                  temp_v26 = &LAB_0022da00;
                  temp_v27[0] = puVar22;
                  FUN_00180310(2,temp_v27[5] + *(short *)(temp_v5 + 8),
                               temp_v27[6] + *(short *)(temp_v5 + 10),0,3);
                }
                else {
                  drawSetColorFromRGBA8(0x72e027ff);
                  temp_v25 = &LAB_0022da04;
                  temp_v24 = 3.09687e-43f;
                  temp_v26 = &LAB_0022da10;
                  temp_v27[0] = puVar22;
                  FUN_00180310(2,temp_v27[5] + *(short *)(temp_v5 + 8),
                               temp_v27[6] + *(short *)(temp_v5 + 10),0,3);
                }
              }
              if (*(short *)(temp_v7 + 0x19ea) <= *(short *)(temp_v4 + 0x13aa)) {
                if (*(short *)(temp_v7 + 0x19ea) < *(short *)(temp_v4 + 0x13aa)) {
                  temp_v6 = 0xdc0f14ff;
                }
                else {
                  temp_v6 = 0xffffffff;
                }
                drawSetColorFromRGBA8(temp_v6);
                puVar22 = (unsigned char *)(int)*(short *)(temp_v8 + 0xea);
              }
              else {
                drawSetColorFromRGBA8(0x72e027ff);
                puVar22 = (unsigned char *)(int)*(short *)(temp_v8 + 0xea);
              }
            }
            temp_v7 = FUN_001834a4(0x12,0x91);
            temp_v24 = 3.09687e-43f;
            temp_v25 = &LAB_0022da18;
            temp_v26 = puVar22;
            FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),
                         temp_v27[6] + *(short *)(temp_v7 + 10),1,3);
          }
        }
        else if (*(char *)(temp_v2 + 0x20b1) == '\x01') {
          puVar22 = (unsigned char *)(int)*(short *)(temp_v4 + 0x13aa);
          if (*(char *)(temp_v2 + 0x2013) != '\0') {
            temp_v24 = 3.09687e-43f;
            FUN_001835b4(2,0x12,0xe7,temp_v27[5],temp_v27[6]);
            temp_v7 = temp_v28;
            temp_v8 = temp_v28 + 0x1900;
            puVar8 = (unsigned char *)
                     ((int)*(short *)(temp_v28 + 0x19ea) - (int)*(short *)(temp_v4 + 0x13aa));
            if ((int)puVar8 < 0) {
              puVar22 = (unsigned char *)-(int)puVar8;
            }
            if (0 < (int)puVar8) {
              puVar22 = puVar8;
            }
            if (puVar8 != (unsigned char *)0x0) {
              temp_v5 = FUN_001834a4(0x12,0xe1);
              if (puVar22 + -10 < (unsigned char *)0x5a) {
                temp_v5 = FUN_001834a4(0x12,0xe0);
              }
              else if (puVar22 + -100 < (unsigned char *)0x384) {
                temp_v5 = FUN_001834a4(0x12,0xdf);
              }
              if ((int)puVar8 < 0) {
                drawSetColorFromRGBA8(0xfa282dff);
                temp_v25 = &LAB_0022da04;
                temp_v24 = 3.09687e-43f;
                temp_v26 = &LAB_0022da00;
                temp_v27[0] = puVar22;
                FUN_00180310(2,temp_v27[5] + *(short *)(temp_v5 + 8),
                             temp_v27[6] + *(short *)(temp_v5 + 10),0,3);
              }
              else {
                drawSetColorFromRGBA8(0x72e027ff);
                temp_v25 = &LAB_0022da04;
                temp_v24 = 3.09687e-43f;
                temp_v26 = &LAB_0022da10;
                temp_v27[0] = puVar22;
                FUN_00180310(2,temp_v27[5] + *(short *)(temp_v5 + 8),
                             temp_v27[6] + *(short *)(temp_v5 + 10),0,3);
              }
            }
            if (*(short *)(temp_v4 + 0x13aa) < *(short *)(temp_v7 + 0x19ea)) {
              drawSetColorFromRGBA8(0x72e027ff);
            }
            else if (*(short *)(temp_v4 + 0x13aa) > *(short *)(temp_v7 + 0x19ea)) {
              temp_v6 = 0xdc0f14ff;
              drawSetColorFromRGBA8(temp_v6);
            }
            else {
              temp_v6 = 0xffffffff;
              drawSetColorFromRGBA8(temp_v6);
            }
            puVar22 = (unsigned char *)(int)*(short *)(temp_v8 + 0xea);
          }
          temp_v7 = FUN_001834a4(0x12,0x91);
          temp_v24 = 3.09687e-43f;
          temp_v25 = &LAB_0022da18;
          temp_v26 = puVar22;
          FUN_00180310(0,temp_v27[5] + *(short *)(temp_v7 + 8),temp_v27[6] + *(short *)(temp_v7 + 10),
                       1,3);
        }
      }
      FUN_00183bb0();
      temp_v7 = 0;
      temp_v8 = 0;
      if ((*(char *)(temp_v2 + 0x2025) != '\0') ||
         (((*(char *)(temp_v2 + 0x2017) != '\x0e' &&
           ((*(char *)(temp_v2 + 0x2017) != '\a' ||
            (temp_v5 = FUN_0026264c(*(unsigned short *)(temp_v4 + 0x1390)), temp_v5 != 0)))) &&
          (*(char *)(temp_v2 + 0x2017) != '\x10')))) {
        temp_v5 = 1;
        temp_v12 = 0;
        temp_v13 = 0xd;
        do {
          if (((unsigned int)*(unsigned short *)(temp_v4 + 0x13ac) & (1 << ((temp_v12 + 1U) & 0xff))) != 0) {
            temp_v8 = temp_v8 + 1;
          }
          do {
            temp_v13 = temp_v13 - 1;
            temp_v5 = temp_v5 + 1;
            temp_v12 = temp_v12 + 1;
            if (temp_v13 == 0) {
              temp_v10 = 1;
              goto LAB_0022dbfc;
            }
          } while (temp_v5 == 2);
        } while( 1 );
      }
      goto LAB_0022dd30;
    }
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xe);
    efctSetSpeed();
    temp_v24 = 3.09687e-43f;
    FUN_001835b4(2,0x12,0xc2,temp_v27[5],temp_v27[6]);
    temp_v10 = (unsigned int)*(unsigned short *)(temp_v2 + 0x20ae);
    FUN_00480da8(temp_v10);
    temp_v4 = FUN_001834a4(0x12,0xc3);
    temp_v24 = 0.0f;
    FUN_00185e84((int)(short)temp_v10,temp_v27[5] + *(short *)(temp_v4 + 8),
                 temp_v27[6] + *(short *)(temp_v4 + 10),0xe2,0);
    temp_v4 = FUN_001834a4(0x12,0xc4);
    temp_v6 = FUN_0014bd84(temp_v10);
    VectorSignedToFloat(temp_v27[6] + *(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v27[5] + *(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xffffffff,temp_v6);
LAB_0022e040:
    temp_v0 = *(char *)(temp_v2 + 0x2011);
    temp_v18 = temp_v0 == '\0';
    if (temp_v18) {
      temp_v0 = *(char *)(temp_v2 + 0x2018);
    }
    if (((!temp_v18 || temp_v0 != '\n') && (*(int *)(temp_v28 + 0x1368) >= 8)) &&
       (temp_v0 = *(char *)(temp_v2 + 0x2018), (temp_v0 == '\x05' || temp_v0 == '\x06') || temp_v0 == '\a')) {
      temp_v4 = FUN_0031e6d4();
      temp_v25 = (unsigned char *)0x0;
      temp_v26 = (unsigned char *)0x0;
      jobGetScalarValue();
      temp_v22 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
      efctSetSpeed();
      FUN_00230a50(&temp_v25,&temp_v26,0xc);
      temp_v24 = 2.81661e-43f;
      FUN_001835b4(2,0x12,0xbb,temp_v25,temp_v26);
      efctSetSpeed();
      temp_v24 = 2.88667e-43f;
      FUN_001835b4(2,0x12,0xbd,temp_v25,temp_v26);
      temp_v24 = 2.88667e-43f;
      FUN_001835b4(2,0x12,0xbe,temp_v25,temp_v26);
      temp_v24 = 2.88667e-43f;
      FUN_001835b4(2,0x12,0xc5,temp_v25,temp_v26);
      efctSetSpeed();
      temp_v6 = 0xbc;
      if (temp_v4 >= 100) {
        temp_v3 = 3;
        temp_v27[2] = (unsigned char *)(temp_v4 / 100);
        temp_v27[1] = (unsigned char *)((temp_v4 % 100) / 10);
        temp_v15 = 0x132;
        temp_v7 = 0x12f;
      }
      else if (temp_v4 >= 10) {
        temp_v3 = 2;
        temp_v27[1] = (unsigned char *)((temp_v4 % 100) / 10);
        temp_v27[2] = (unsigned char *)0x0;
        temp_v15 = 0x113;
        temp_v7 = 0x111;
      }
      else {
        temp_v27[2] = (unsigned char *)0x0;
        temp_v3 = 1;
        temp_v6 = 199;
        temp_v27[1] = (unsigned char *)0x0;
        temp_v15 = 0x115;
        temp_v7 = 0x114;
      }
      temp_v27[0] = (unsigned char *)(temp_v4 % 10);
      FUN_00230a50(&temp_v25,&temp_v26,0xd);
      temp_v24 = 2.81661e-43f;
      FUN_001835b4(2,0x12,temp_v6,temp_v25,temp_v26);
      temp_v4 = FUN_001834a4(0x12,temp_v15);
      temp_v24 = 2.88667e-43f;
      FUN_001835b4(2,0x12,0xfa,temp_v25 + *(short *)(temp_v4 + 8),temp_v26 + *(short *)(temp_v4 + 10));
      temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
      temp_v4 = 0;
      if (temp_v4 < temp_v3) {
        do {
          temp_v8 = FUN_001834a4(0x12,temp_v7 + temp_v4);
          temp_v24 = 2.88667e-43f;
          FUN_001835b4(2,0x12,temp_v27[temp_v4] + 0xf0,temp_v25 + *(short *)(temp_v8 + 8),
                       temp_v26 + *(short *)(temp_v8 + 10));
          temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v3);
      }
      efctSetSpeed();
    }
    temp_v4 = DAT_00588fd4;
    temp_v20 = (float)((unsigned long long)temp_v23 >> 0x20);
    temp_v0 = *(char *)(DAT_00588fd4 + 0x2017);
    temp_v18 = temp_v0 == '\x04';
    if (temp_v18) {
      temp_v0 = *(char *)(DAT_00588fd4 + 0x2018);
    }
    if ((temp_v18 && temp_v0 == '\0') && (*(int *)(DAT_00588fd4 + 0x20c0) != 0)) {
      temp_v25 = (unsigned char *)0x0;
      temp_v26 = (unsigned char *)0x0;
      FUN_00230a50(&temp_v25,&temp_v26,0xf);
      temp_v22 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
      efctSetSpeed();
      temp_v3 = 0;
      do {
        temp_v24 = 1.76564e-43f;
        FUN_001835b4(2,0x12,temp_v3 + 0xe8,temp_v25,temp_v26);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 7);
      FUN_001834a4(0x12,0xef);
      temp_v16 = 0.0f;
      temp_v27[0] = (unsigned char *)0xef;
      temp_v27[1] = (unsigned char *)0xfb;
      temp_v27[2] = (unsigned char *)0xfc;
      do {
        temp_v3 = FUN_001834a4(0x12,temp_v27[(int)temp_v16]);
        temp_v24 = temp_v16;
        FUN_00164168(*(unsigned int *)(temp_v4 + 0x20b4),temp_v25 + *(short *)(temp_v3 + 8),
                     temp_v26 + *(short *)(temp_v3 + 10),0xe7,6);
        temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
        temp_v20 = (float)((unsigned long long)temp_v23 >> 0x20);
        temp_v16 = (float)((int)temp_v16 + 1);
      } while ((int)temp_v16 < 3);
    }
    FUN_0022e9c8();
  }
LAB_0022e46c:
  if (*(char *)(temp_v2 + 0x20ad) != '\0') {
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v27[5] = (unsigned char *)(int)temp_v20;
    if (temp_v21 < *(float *)(temp_v28 + 0x294)) {
      efctSetSpeed();
      temp_v2 = g_renderCtx;
      temp_v4 = packNibblesAndByte(6,1,0);
      piVar19 = (int *)(temp_v2 + 0x12b8);
      temp_v3 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      temp_v24 = 3.09687e-43f;
      FUN_001835b4(2,0x12,0xc6,temp_v27[5],0);
      temp_v2 = g_renderCtx;
      temp_v4 = packNibblesAndByte(6,7,0);
      piVar19 = (int *)(temp_v2 + 0x12b8);
      temp_v3 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      efctSetSpeed();
    }
    if (temp_v21 < *(float *)(temp_v28 + 800)) {
      efctSetSpeed();
      temp_v2 = g_renderCtx;
      temp_v4 = packNibblesAndByte(6,1,0);
      piVar19 = (int *)(temp_v2 + 0x12b8);
      temp_v3 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      temp_v24 = 3.09687e-43f;
      FUN_001835b4(2,0x12,0xc6,temp_v27[5],0);
      temp_v2 = g_renderCtx;
      temp_v4 = packNibblesAndByte(6,7,0);
      piVar19 = (int *)(temp_v2 + 0x12b8);
      temp_v3 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      efctSetSpeed();
    }
  }
  efctSetSpeed();
  temp_v2 = g_renderCtx;
  piVar19 = (int *)(g_renderCtx + 0x1258);
  temp_v4 = *piVar19;
  temp_v3 = piVar19[temp_v4 + 2];
  *piVar19 = temp_v4 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar19[temp_v4 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  temp_v2 = g_renderCtx;
  temp_v4 = packNibblesAndByte(6,7,0);
  piVar19 = (int *)(temp_v2 + 0x12b8);
  temp_v3 = piVar19[*piVar19 + 2];
  piVar19[*piVar19 + 2] = temp_v4;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
LAB_0022dbfc:
  if (((unsigned int)*(unsigned short *)(temp_v4 + 0x13ac) & (1 << (temp_v10 & 0xff))) != 0) {
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,(0x1d - temp_v7) - (6 - temp_v8));
    temp_v12 = (6 - temp_v8) + temp_v7;
    temp_v5 = FUN_001834a4(0x12,temp_v12 + 0xa9);
    efctCallRoutineWithSpeedOverride(temp_v27[5] + *(short *)(temp_v5 + 8),temp_v27[6] + *(short *)(temp_v5 + 10),0xd3);
    effectDispatchSelector((int)(short)temp_v10,temp_v27[5] + *(short *)(temp_v5 + 8),
                 temp_v27[6] + *(short *)(temp_v5 + 10),0xd3);
    temp_v5 = FUN_001834a4(0x12,temp_v12 + 0xaf);
    FUN_003481c4((int)(short)temp_v10,temp_v27[5] + *(short *)(temp_v5 + 8),
                 temp_v27[6] + *(short *)(temp_v5 + 10),0xd3);
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 6) goto LAB_0022dcd0;
  }
  temp_v10 = temp_v10 + 1;
  if ((int)temp_v10 >= 0xe) goto LAB_0022dcd0;
  while (temp_v10 == 2) {
    temp_v10 = 3;
  }
  goto LAB_0022dbfc;
LAB_0022dcd0:
  if ((*(int *)(temp_v3 + 0x1368) != 2 && *(int *)(temp_v3 + 0x1368) != 3) &&
     ((*(unsigned short *)(temp_v4 + 0x13ac) & 4) != 0)) {
    temp_v3 = FUN_001834a4(0x12,0x123);
    effectDispatchSelector(2,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xd3);
    temp_v3 = FUN_001834a4(0x12,0x124);
    FUN_003481c4(2,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xd3);
  }
LAB_0022dd30:
  temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
  if ((*(char *)(temp_v2 + 0x2018) == '\x03') && (*(char *)(temp_v4 + 0x1380) != '\0')) {
    FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xb);
    temp_v24 = 3.09687e-43f;
    FUN_00164b5c(2,0x12,1,temp_v27[5],temp_v27[6]);
    temp_v3 = 0;
LAB_0022dde4:
    temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13d2);
    temp_v17 = 0x3d;
LAB_0022de2c:
    do {
      FUN_00230a50(temp_v27 + 5,temp_v27 + 6,0xb);
      temp_v7 = FUN_001834a4(0x12,temp_v3 + 0xa2);
      temp_v6 = 0xffffffff;
      if (*(char *)(temp_v4 + 0x137e) == temp_v3) {
        temp_v24 = 3.09687e-43f;
        FUN_00164b5c(2,0x12,3,temp_v27[5] + *(short *)(temp_v7 + 8),
                     temp_v27[6] + *(short *)(temp_v7 + 10));
        temp_v6 = 0xff;
      }
      else {
        temp_v24 = 3.09687e-43f;
        FUN_00164b5c(2,0x12,2,temp_v27[5] + *(short *)(temp_v7 + 8),
                     temp_v27[6] + *(short *)(temp_v7 + 10));
      }
      temp_v8 = FUN_001834a4(0x12,0xa0);
      uiDrawItemCategoryIcon(temp_v17,(s32)temp_v27[5] + (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8),
                   (s32)temp_v27[6] + (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v7 + 10),0xe2,0);
      temp_v8 = FUN_001834a4(0x12,0xa1);
      if (temp_v10 != 0) {
        temp_v5 = equipmentHasPositiveUpgrade(temp_v10);
        if (temp_v5 != 0) {
          temp_v14 = temp_v10;
          FUN_0047fc38();
          if (temp_v14 != 0) {
            temp_v6 = 0xfbeb39ff;
          }
          else {
            temp_v5 = equipmentHasPositiveUpgrade(temp_v10);
            if (temp_v5 != 0) {
              temp_v6 = 0x8400ff;
            }
          }
        }
        FUN_0015f858(temp_v10,0);
        if (temp_v10 != 0) {
          VectorSignedToFloat(temp_v27[6] +
                              (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v27[5] +
                              (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v7 + 8),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,temp_v6);
        }
      }
      else {
        textFormatBuffer(temp_v29,&LAB_0022e370);
        VectorSignedToFloat(temp_v27[6] +
                            (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v7 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v27[5] + (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,temp_v6,temp_v29);
      }
      temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 7) break;
      while( 1 ) {
        while( 1 ) {
          temp_v10 = 0;
          if (temp_v3 == 0) goto LAB_0022dde4;
          if (temp_v3 == 1) break;
          if (temp_v3 != 2) {
            if (temp_v3 == 3) {
              temp_v17 = 0x12d;
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13d8);
            }
            else if (temp_v3 == 4) {
              temp_v17 = 0x1a5;
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13da);
            }
            else if (temp_v3 == 5) {
              temp_v17 = 0x21d;
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13dc);
            }
            else if (temp_v3 == 6) {
              temp_v17 = 0x295;
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13de);
            }
            goto LAB_0022de2c;
          }
          temp_v7 = gameFlagIsSet(0x410);
          if (temp_v7 != 0) {
            temp_v17 = 0x30d;
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13d6);
            goto LAB_0022de2c;
          }
          temp_v3 = 3;
        }
        temp_v7 = gameFlagIsSet(0x410);
        if (temp_v7 != 0) break;
        temp_v3 = 2;
      }
      temp_v10 = (unsigned int)*(unsigned short *)(temp_v4 + 0x13d4);
      temp_v17 = 0xb5;
    } while( 1 );
  }
  goto LAB_0022e040;
}

} /* extern "C" */
