/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a321c` (_code @ 0x1a321c, 0x3b10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int drawSetComparisonColor(...);
int messageKindForward(...);
int FUN_00288844(...);
int FUN_0028886c(void);
int FUN_002888a8(...);
int FUN_00288e68(...);
int FUN_002b0750(...);
int FUN_002b64b8(void);
int FUN_002b659c(...);
int FUN_002b6c34(...);
int devilGetRecord(void);
int renderCtxCalculateStereoParallax(...);
int FUN_002bdf94(...);
int itemDrawCategoryBadge(...);
int FUN_002be650(...);
int FUN_002be90c(...);
int gameDataBlocksGetSaveData(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int requestForward(...);

int FUN_001ee4e4(...);
int unitGetStereoScreenPosition(...);
int FUN_00293ac0(void);
int fontMeasureLineAdvance(...);
int drawSetColorFromRGBA8(...);
int textDrawString(...);
int textFormatBuffer(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int asdTMTexTableEntryAt(...);
int efctSetSpeed(void);
int renderCtxSelectStereoLayout(int);
int FUN_0033d3f8(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

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
/* stack frame of void: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} void_stack;

extern unsigned char LAB_001a35ec; /* 0x1a35ec */
extern unsigned char LAB_001a35fc; /* 0x1a35fc */
extern unsigned char LAB_001a3604; /* 0x1a3604 */
extern unsigned char LAB_001a360c; /* 0x1a360c */
extern unsigned char LAB_001a3614; /* 0x1a3614 */
extern unsigned char LAB_001a43d4; /* 0x1a43d4 */
extern unsigned char LAB_001a43e0; /* 0x1a43e0 */
extern unsigned char LAB_001a43e4; /* 0x1a43e4 */
extern unsigned char LAB_001a43f4; /* 0x1a43f4 */
extern unsigned char LAB_001a48a0; /* 0x1a48a0 */
extern unsigned char LAB_001a48a4; /* 0x1a48a4 */
extern unsigned char LAB_001a48ac; /* 0x1a48ac */
extern unsigned char LAB_001a48b0; /* 0x1a48b0 */
extern unsigned char LAB_001a4c74; /* 0x1a4c74 */
extern unsigned char LAB_001a4c78; /* 0x1a4c78 */
extern unsigned char LAB_001a500c; /* 0x1a500c */
extern unsigned char LAB_001a5010; /* 0x1a5010 */
extern unsigned char LAB_001a5514; /* 0x1a5514 */
extern unsigned char LAB_001a5518; /* 0x1a5518 */
extern unsigned char LAB_001a551c; /* 0x1a551c */
extern unsigned char LAB_001a6434; /* 0x1a6434 */
extern unsigned char LAB_001a6438; /* 0x1a6438 */
extern unsigned char LAB_001a6444; /* 0x1a6444 */
extern unsigned char LAB_001a6450; /* 0x1a6450 */
extern unsigned char LAB_001a6d40; /* 0x1a6d40 */
extern int DAT_0044e144; /* 0x44e144 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: drawSetComparisonColor. */
/* Supplied declaration required: FUN_001ee4e4. */
/* Supplied declaration required: messageKindForward. */
/* Supplied declaration required: FUN_00288844. */
/* Supplied declaration required: FUN_0028886c. */
/* Supplied declaration required: FUN_002888a8. */
extern int isLowThreshold(int, int);
extern unsigned int FUN_00288ddc(int, int);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: unitGetStereoScreenPosition. */
/* Supplied declaration required: FUN_00293ac0. */
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002b64b8. */
/* Supplied declaration required: FUN_002b659c. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
extern unsigned int aocIndexValueOrDefault(unsigned int);
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: itemDrawCategoryBadge. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002be90c. */
/* Supplied declaration required: FUN_002bed3c. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: gameDataBlocksGetSaveData. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: renderCtxSelectStereoLayout. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: requestForward. */
/* Supplied declaration required: FUN_0033d3f8. */
extern int __aeabi_idivmod(int, unsigned int);


unsigned char FUN_001a321c(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 36 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  unsigned int temp_v8;
  short *psVar11;
  short *psVar12;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int *piVar17;
  unsigned short *puVar18;
  unsigned int *puVar19;
  int temp_v13;
  char *pcVar21;
  unsigned short *puVar22;
  unsigned short temp_v14;
  short *psVar24;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  short *temp_v22;
  short *temp_v23;
  short *temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  short *temp_v28;
  short *temp_v29;
  float temp_v30;
  int temp_v31;
  int temp_v32;
  short *temp_v33;
  int temp_v34;
  unsigned char temp_v35 [64];
  int temp_v36;
  int *temp_v37;
  char *temp_v38;
  
  temp_v5 = DAT_0044e144;
  temp_v34 = DAT_0044e144;
  temp_v13 = 0;
  temp_v28 = (short *)0x0;
  temp_v30 = 0.0f;
  if (*(char *)(DAT_0044e144 + 0x1e61) == '\0') {
    return 0;
  }
  renderCtxSelectStereoLayout(g_titleScene);
  temp_v7 = g_titleScene;
  temp_v6 = FUN_002c5d80(1,0);
  piVar17 = (int *)(temp_v7 + 0x124c);
  temp_v10 = *piVar17;
  temp_v11 = piVar17[temp_v10 + 2];
  *piVar17 = temp_v10 + 1;
  piVar17[temp_v10 + 3] = temp_v6;
  if (*(char *)(temp_v7 + 0x1264) != '\0' || temp_v11 != temp_v6) {
    (**(romwright_code **)(temp_v7 + 0x1268))();
    *(unsigned char *)(temp_v7 + 0x1264) = 0;
  }
  temp_v38 = (char *)(temp_v34 + 0x1e67);
  temp_v18 = 0;
  if (*temp_v38 != '\x03' && *temp_v38 != '\t') {
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,9);
    efctSetSpeed();
    FUN_002bf288(2,0x1a,0,temp_v28,temp_v30,0x81);
    efctSetSpeed();
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,7);
    efctSetSpeed();
    FUN_002bf288(2,0x1a,1,temp_v28,temp_v30,0x81);
    temp_v7 = temp_v34;
    if (-1 < *(char *)(temp_v34 + 0x12ef)) {
      FUN_002bf288(2,0x1a,0xb5,temp_v28,temp_v30,0x81);
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,8);
      if (*(char *)(temp_v7 + 0x12f4) != '\0') {
        FUN_002bf288(2,0x1a,0xb6,temp_v28,temp_v30,0x83);
        FUN_002bf288(2,0x1a,0xb7,temp_v28,temp_v30,0x83);
      }
      if (*(char *)(temp_v7 + 0x12ef) == '\0') {
        textFormatBuffer(temp_v35,&LAB_001a35ec);
      }
      if (*(char *)(temp_v7 + 0x12ef) == '\x01') {
        textFormatBuffer(temp_v35,&LAB_001a35fc);
      }
      if (*(char *)(temp_v7 + 0x12ef) == '\x02') {
        textFormatBuffer(temp_v35,&LAB_001a3604);
      }
      if (*(char *)(temp_v7 + 0x12ef) == '\x03') {
        textFormatBuffer(temp_v35,&LAB_001a360c);
      }
      if (*(char *)(temp_v7 + 0x12ef) == '\x04') {
        textFormatBuffer(temp_v35,&LAB_001a3614);
      }
      temp_v7 = asdTMTexTableEntryAt(0x1a,0xba);
      puVar9 = temp_v35;
      fontMeasureLineAdvance(puVar9,2);
      VectorSignedToFloat((unsigned char *)
                          ((int)temp_v28 +
                          (int)*(short *)(temp_v7 + 8) +
                          ((int)**(short **)(temp_v7 + 0xc) - (int)puVar9) / 2),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v7 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xff,temp_v35,temp_v28);
    }
    efctSetSpeed();
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,8);
    efctSetSpeed();
    FUN_002bf288(2,0x1a,2,temp_v28,temp_v30,0x81);
  }
  temp_v17 = (float)temp_v18;
  if ((*(char *)(temp_v5 + 0x1e60) != '\0') && (psVar24 = (short *)(temp_v34 + 0x1300), *psVar24 != 0)
     ) {
    temp_v7 = FUN_00293ac0();
    temp_v17 = (float)temp_v18;
    if (temp_v7 >= 2) {
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,8);
      efctSetSpeed();
      FUN_002bf288(2,0x1a,3,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,4,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,5,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,6,temp_v28,temp_v30,0x81);
      temp_v8 = FUN_00293ac0();
      temp_v7 = temp_v34;
      temp_v17 = (float)temp_v18;
      if ((temp_v8 & 1) != 0) {
        temp_v6 = 0;
        if (temp_v6 < (int)temp_v8) {
          do {
            temp_v10 = temp_v6 + (int)(5 - temp_v8) / 2;
            temp_v13 = temp_v10 + 0x13;
            if (*(int *)(temp_v7 + 0x12e4) == temp_v6) {
              temp_v13 = temp_v10 + 0x18;
            }
            FUN_002bf288(2,0x1a,temp_v13,temp_v28,temp_v30,0x81);
            temp_v17 = (float)temp_v18;
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < (int)temp_v8);
        }
      }
      else {
        temp_v6 = 0;
        if (temp_v6 < (int)temp_v8) {
          do {
            temp_v10 = temp_v6 + (int)(6 - temp_v8) / 2;
            temp_v13 = temp_v10 + 7;
            if (*(int *)(temp_v7 + 0x12e4) == temp_v6) {
              temp_v13 = temp_v10 + 0xd;
            }
            FUN_002bf288(2,0x1a,temp_v13,temp_v28,temp_v30,0x81);
            temp_v17 = (float)temp_v18;
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < (int)temp_v8);
        }
      }
    }
    if (*(int *)(temp_v34 + 0x12dc) >= 7) {
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,6);
      pcVar21 = (char *)(temp_v34 + 0x1e66);
      temp_v8 = *(unsigned int *)(temp_v34 + 0x1898);
      if (*pcVar21 == '\f' || *pcVar21 == '\n') {
        temp_v8 = 0x5a5a5aff;
        efctSetSpeed();
      }
      if (*pcVar21 == '\r') {
        temp_v8 = 0xff;
        efctSetSpeed();
      }
      temp_v7 = temp_v34;
      if (*temp_v38 != '\x03' && *temp_v38 != '\t') {
        if (*(short *)(temp_v34 + 0x12fc) != 0) {
          if ((*(char *)(temp_v34 + 0x12ed) != '\0') && (-1 >= *psVar24)) {
            drawSetColorFromRGBA8(temp_v8);
            FUN_002bf288(2,0x1a,2000,temp_v28,temp_v30,0x83);
          }
          else {
            drawSetColorFromRGBA8(temp_v8);
            FUN_001ee4e4((int)*(short *)(temp_v7 + 0x12fc),temp_v28,temp_v30,0x83,1);
          }
          FUN_002bed3c();
        }
        else if (0 < *(short *)(temp_v34 + 0x12fe)) {
          temp_v16 = (float)VectorSignedToFloat(temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v23 = (short *)romwright_f2u((float)((temp_v20 + 48.0f)));
          temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(temp_v34 + 0x1e74) +
                                                                      0x10) + 0x12),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = (short *)romwright_f2u((float)(((temp_v16 + 300.0f) - temp_v20)));
          VectorUnsignedToFloat(*(unsigned int *)(temp_v34 + 0x1e78),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (short *)romwright_f2u((float)(temp_v17));
          FUN_0033d3f8(*(int *)(temp_v34 + 0x1e74),0,&temp_v22,temp_v8 | 0xff,0);
        }
      }
      efctSetSpeed();
      if (*pcVar21 == '\r') {
        FUN_002bf380(2,0x1a,0x1a,temp_v28,temp_v30,0x8d);
      }
    }
  }
  temp_v19 = (unsigned long long)(unsigned int)temp_v17;
  temp_v20 = 0.305f;
  if ((*temp_v38 == '\b') || (*(short *)(temp_v34 + 0x1300) == 0)) goto LAB_001a3ea8;
  if ((*(char *)(temp_v5 + 0x1e60) != '\0') || (*temp_v38 != '\t')) {
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xe);
    if ((*(int *)(temp_v34 + 0x12dc) >= 7) && (*temp_v38 == '\x05' || *temp_v38 == '\x06')) {
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xb);
      FUN_002bf288(2,0x1a,0xbb,temp_v28,temp_v30,0xc9);
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xc);
      FUN_002bf288(2,0x1a,0xbc,temp_v28,temp_v30,0xce);
      temp_v7 = g_titleScene;
      if ((*(char *)(temp_v34 + 0x759) != '\0') && (*(char *)(temp_v34 + 0x75e) != '\0')) {
        temp_v6 = packNibblesAndByte(6,1,0);
        piVar17 = (int *)(temp_v7 + 0x12ac);
        temp_v10 = piVar17[*piVar17 + 2];
        piVar17[*piVar17 + 2] = temp_v6;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v10 != temp_v6) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        if ((*(char *)(temp_v34 + 0x7e5) != '\0') && (*(char *)(temp_v34 + 0x7ea) != '\0')) {
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xd);
          temp_v7 = vec2GetXInt(temp_v34 + 0x1e8);
          temp_v6 = vec2GetYInt(temp_v34 + 0x1e8);
          FUN_002bf288(2,0x1a,0xbd,(unsigned char *)((int)temp_v28 + temp_v7),temp_v6 + (int)temp_v30,0xd3)
          ;
        }
        else {
          efctSetSpeed();
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xd);
          FUN_002bf288(2,0x1a,0xbe,temp_v28,temp_v30,0xd3);
          FUN_002bf288(2,0x1a,0xbe,temp_v28,temp_v30,0xd4);
          efctSetSpeed();
        }
        temp_v7 = g_titleScene;
        temp_v6 = packNibblesAndByte(6,7,0);
        piVar17 = (int *)(temp_v7 + 0x12ac);
        temp_v10 = piVar17[*piVar17 + 2];
        piVar17[*piVar17 + 2] = temp_v6;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v10 != temp_v6) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
      }
    }
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xf);
    FUN_002bf288(2,0x1a,0x1f,temp_v28,temp_v30,0xd8);
    pcVar21 = (char *)(temp_v34 + 0x1e66);
    temp_v0 = *pcVar21;
    if (temp_v0 != '\r' && temp_v0 != '\x06') {
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xf);
      FUN_002bf380(2,0x1a,0,temp_v28,temp_v30,0xd8);
    }
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x10);
    FUN_002bf288(2,0x1a,0x2d,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x2e,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x38,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x39,temp_v28,temp_v30,0xd8);
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x11);
    FUN_002bf288(2,0x1a,0x4a,temp_v28,temp_v30,0xd8);
    temp_v7 = 0;
    do {
      unitGetStereoScreenPosition(&temp_v28,&temp_v30,temp_v7 + 0x12);
      temp_v6 = asdTMTexTableEntryAt(0x1a,temp_v7 + 0x7b);
      FUN_002bf288(2,0x1a,0x68,temp_v28,(int)*(short *)(temp_v6 + 10) + (int)temp_v30,0xd8);
      FUN_002bf288(2,0x1a,temp_v7 + 0x69,temp_v28,(int)temp_v30 + (int)*(short *)(temp_v6 + 10),0xdd);
      if (*(char *)(temp_v5 + 0x1e62) != '\0') {
        temp_v6 = asdTMTexTableEntryAt(0x1a,temp_v7 + 0x85);
        FUN_002bf288(2,0x1a,0x80,(unsigned char *)((int)*(short *)(temp_v6 + 8) + (int)temp_v28),
                     (int)*(short *)(temp_v6 + 10) + (int)temp_v30,0xd8);
      }
      temp_v17 = (float)temp_v19;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x17);
    if (*(char *)(temp_v5 + 0x1e60) != '\0') {
      if (*pcVar21 == '\0') {
        FUN_002bf288(2,0x1a,0x8a,temp_v28,temp_v30,0xd8);
        if (*temp_v38 != '\t') {
          temp_v7 = gameFlagIsSet(0x410);
          if (temp_v7 != 0) {
            FUN_002bf288(2,0x1a,0x8e,temp_v28,temp_v30,0xd8);
          }
        }
        else if (*(char *)(temp_v5 + 0x1eb9) == '\x01') {
          FUN_002bf288(2,0x1a,0x8e,temp_v28,temp_v30,0xd8);
        }
LAB_001a3ea8:
        if (*(char *)(temp_v5 + 0x1e60) == '\0') goto LAB_001a6a8c;
      }
      temp_v7 = temp_v34;
      puVar22 = (unsigned short *)(temp_v34 + 0x1300);
      if (*puVar22 != 0) {
        puVar18 = (unsigned short *)0x0;
        pcVar21 = (char *)(temp_v34 + 0x1e66);
        if (*pcVar21 != '\0') {
          puVar18 = (unsigned short *)(unsigned int)*puVar22;
          devilGetRecord();
        }
        temp_v6 = temp_v34;
        if (*temp_v38 != '\b') {
          if (*(char *)(temp_v34 + 0x12f3) == '\0') {
            unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xe);
            if (*pcVar21 != '\0') {
              if (*pcVar21 != '\r') {
                temp_v21 = FUN_002bd068(*puVar18);
                textFormatBuffer(temp_v35,&LAB_001a43d4,temp_v21);
              }
              else {
                textFormatBuffer(temp_v35,&LAB_001a43e0);
              }
            }
            else if (*temp_v38 != '\t') {
              temp_v21 = gameGetPlayerName();
              textFormatBuffer(temp_v35,&LAB_001a43d4,temp_v21);
            }
            else {
              textFormatBuffer(temp_v35,&LAB_001a43d4,temp_v34 + 0x189c);
            }
            temp_v21 = 0xffffffff;
            if ((*(unsigned short *)(temp_v7 + 0x1314) & 2) != 0) {
              temp_v21 = 0xdc0f14ff;
            }
            temp_v10 = asdTMTexTableEntryAt(0x1a,0x1e);
            VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v10 + 10),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            textDrawString(3,temp_v21,temp_v35);
            if (*pcVar21 != '\0') {
              temp_v21 = demonGetRaceLabel(*puVar18,0);
              textFormatBuffer(temp_v35,&LAB_001a43d4,temp_v21);
            }
            else {
              textFormatBuffer(temp_v35,&LAB_001a43e4);
            }
            temp_v10 = asdTMTexTableEntryAt(0x1a,0x1d);
            VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v10 + 10),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            textDrawString(3,0xffffffff,temp_v35);
          }
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xf);
          psVar24 = (short *)(unsigned int)*(unsigned short *)(temp_v7 + 0x1302);
          drawSetColorFromRGBA8(0xff);
          if (*(char *)(temp_v5 + 0x1e62) != '\0') {
            psVar24 = (short *)(unsigned int)*(unsigned short *)(temp_v34 + 0x18b2);
            psVar11 = (short *)(unsigned int)*(unsigned short *)(temp_v7 + 0x1302);
            psVar12 = psVar11;
            if (psVar24 < psVar11) {
              psVar12 = (short *)0xdc0f14ff;
            }
            if (psVar11 < psVar24) {
              psVar12 = (short *)0x72e027ff;
            }
            if (psVar24 != psVar11) {
              drawSetColorFromRGBA8(psVar12);
            }
            else {
              drawSetColorFromRGBA8(0xff);
            }
          }
          temp_v10 = asdTMTexTableEntryAt(0x1a,0x21);
          temp_v22 = psVar24;
          FUN_002bdf94(6,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,2,0xdd,&LAB_001a43f4);
          FUN_002bed3c();
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xf);
          temp_v10 = temp_v34;
          if (*pcVar21 != '\r' && *pcVar21 != '\x06') {
            psVar24 = *(short **)(temp_v34 + 0x1304);
            drawSetColorFromRGBA8(0x676767ff);
            if (*(char *)(temp_v5 + 0x1e62) != '\0') {
              puVar19 = (unsigned int *)(temp_v34 + 0x18b4);
              psVar24 = (short *)*puVar19;
              temp_v11 = drawSetComparisonColor(*(unsigned short *)(temp_v34 + 0x18b2),
                                    *(unsigned short *)(temp_v7 + 0x1302),0);
              if ((temp_v11 == 0) &&
                 (temp_v10 = drawSetComparisonColor(*(unsigned int *)(temp_v10 + 0x1304),*puVar19,0), temp_v10 == 0))
              {
                drawSetColorFromRGBA8(0x676767ff);
              }
            }
            temp_v10 = asdTMTexTableEntryAt(0x1a,0x2c);
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,8,0xdd,&LAB_001a43f4);
            FUN_002bed3c();
          }
          gameDataBlocksGetSaveData();
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x10);
          temp_v2 = *(short *)(temp_v7 + 0x1308);
          temp_v3 = *(short *)(temp_v7 + 0x130c);
          psVar24 = (short *)(int)temp_v3;
          if ((*pcVar21 == '\r') ||
             ((psVar12 = (short *)(int)temp_v2, *pcVar21 == '\x06' &&
              (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 == 0)))) {
            psVar12 = psVar24;
          }
          temp_v25 = 0.0f;
          if ((*pcVar21 == '\0' || *pcVar21 == '\x02') && (*temp_v38 != '\t')) {
            temp_v25 = (float)FUN_00288ddc((int)temp_v3,(int)(short)*puVar22);
          }
          if (*(char *)(temp_v5 + 0x1e62) != '\0') {
            psVar24 = (short *)(int)*(short *)(temp_v34 + 0x18bc);
            temp_v2 = *(short *)(temp_v34 + 0x18b8);
            psVar11 = (short *)(int)*(short *)(temp_v7 + 0x130c);
            psVar12 = psVar11;
            if ((int)psVar24 < (int)psVar11) {
              psVar12 = (short *)0xdc0f14ff;
            }
            if (psVar24 == psVar11) {
              psVar12 = (short *)0xffffffff;
            }
            if ((int)psVar11 < (int)psVar24) {
              drawSetColorFromRGBA8(0x72e027ff);
            }
            else {
              drawSetColorFromRGBA8(psVar12);
            }
            temp_v0 = *pcVar21;
            if ((temp_v0 == '\b' || temp_v0 == '\t') ||
               (psVar12 = (short *)(int)temp_v2, (temp_v0 == '\n' || temp_v0 == '\a') || temp_v0 == '\x03'))
            {
              psVar12 = psVar24;
            }
          }
          else if (temp_v25 != 0.0f) {
            drawSetColorFromRGBA8(0x6ef0ffff);
          }
          temp_v10 = isLowThreshold((int)(short)(int)psVar12,(int)(short)(int)psVar24);
          if (temp_v10 != 0) {
            drawSetColorFromRGBA8(0xdc0f14ff);
          }
          temp_v36 = asdTMTexTableEntryAt(0x1a,0x37);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
            temp_v0 = *temp_v38;
            temp_v15 = temp_v0 == '\x04';
            if (temp_v15) {
              temp_v0 = *pcVar21;
            }
            if (!(temp_v15 && temp_v0 == '\x06')) {
              temp_v22 = psVar12;
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a43f4);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
            }
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          if (*(char *)(temp_v5 + 0x1e62) != '\0') {
            temp_v12 = (int)*(short *)(temp_v7 + 0x130c);
            temp_v11 = (int)*(short *)(temp_v34 + 0x18bc);
            temp_v10 = temp_v11;
            if (temp_v11 == temp_v12) {
              temp_v10 = -1;
            }
            if (temp_v11 < temp_v12) {
              temp_v10 = -0x23f0eb01;
            }
            if (temp_v12 < temp_v11) {
              temp_v10 = 0x72e027ff;
            }
            drawSetColorFromRGBA8(temp_v10);
          }
          else if (temp_v25 != 0.0f) {
            temp_v10 = 0x6ef0ffff;
            drawSetColorFromRGBA8(temp_v10);
          }
          temp_v36 = asdTMTexTableEntryAt(0x1a,0x32);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a43f4);
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v36 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          temp_v10 = asdTMTexTableEntryAt(0x1a,0x33);
          FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0,1,0xdd,&LAB_001a48a4);
          temp_v27 = 0;
          temp_v24 = temp_v28;
          temp_v25 = temp_v30;
          temp_v26 = 0xdd;
          temp_v23 = (short *)0x46;
          temp_v22 = (short *)0x44;
          piVar17 = (int *)(temp_v34 + 0x1e68);
          temp_v37 = piVar17;
          FUN_002be90c(psVar12,psVar24,*piVar17,0,0x1a,0x43,0x45);
          if (*piVar17 != 0) {
            efctSetSpeed();
            temp_v24 = temp_v28;
            temp_v25 = temp_v30;
            temp_v26 = 0xde;
            temp_v27 = 1;
            temp_v23 = (short *)0x46;
            temp_v22 = (short *)0x44;
            FUN_002be90c(psVar12,psVar24,*temp_v37,0,0x1a,0x43,0x45);
            efctSetSpeed();
          }
          if ((*(char *)(temp_v5 + 0x1e62) != '\0') &&
             (temp_v10 = (int)*(short *)(temp_v34 + 0x18bc) - (int)*(short *)(temp_v7 + 0x130c),
             temp_v10 != 0)) {
            temp_v12 = asdTMTexTableEntryAt(0x1a,0xce);
            temp_v11 = temp_v10;
            if (temp_v10 < 0) {
              temp_v11 = -temp_v10;
            }
            if (temp_v11 - 10U < 0x5a) {
              temp_v12 = asdTMTexTableEntryAt(0x1a,0xcf);
            }
            else if (temp_v11 - 100U < 900) {
              temp_v12 = asdTMTexTableEntryAt(0x1a,0xd0);
            }
            else if (temp_v11 >= 1000) {
              temp_v12 = asdTMTexTableEntryAt(0x1a,0xd1);
            }
            if (temp_v10 < 0) {
              drawSetColorFromRGBA8(0xfa282d00);
              temp_v22 = (short *)&LAB_001a48ac;
              temp_v23 = (short *)temp_v11;
              FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v12 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v12 + 10),0,3,0xdd,&LAB_001a48b0);
            }
            else {
              drawSetColorFromRGBA8(0x72e02700);
              temp_v22 = (short *)&LAB_001a4c74;
              temp_v23 = (short *)temp_v11;
              FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v12 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v12 + 10),0,3,0xdd,&LAB_001a48b0);
            }
          }
          temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x130a);
          temp_v29 = (short *)(int)*(short *)(temp_v7 + 0x130e);
          if ((*pcVar21 == '\r') ||
             ((*pcVar21 == '\x06' && (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 == 0)))) {
            temp_v33 = temp_v29;
          }
          if (*(char *)(temp_v5 + 0x1e62) != '\0') {
            temp_v29 = (short *)(int)*(short *)(temp_v34 + 0x18be);
            temp_v33 = (short *)(int)*(short *)(temp_v34 + 0x18ba);
            psVar12 = (short *)(int)*(short *)(temp_v7 + 0x130e);
            psVar24 = temp_v29;
            if ((int)temp_v29 < (int)psVar12) {
              psVar24 = (short *)0xdc0f14ff;
            }
            if (temp_v29 == psVar12) {
              psVar24 = (short *)0xffffffff;
            }
            if ((int)psVar12 < (int)temp_v29) {
              drawSetColorFromRGBA8(0x72e027ff);
            }
            else {
              drawSetColorFromRGBA8(psVar24);
            }
            temp_v0 = *pcVar21;
            if ((temp_v0 == '\b' || temp_v0 == '\t') ||
               ((temp_v0 == '\n' || temp_v0 == '\a') || temp_v0 == '\x03')) {
              temp_v33 = temp_v29;
            }
          }
          temp_v10 = asdTMTexTableEntryAt(0x1a,0x42);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v11 = FUN_0029e9cc(*puVar22), temp_v11 != 0)))) {
            temp_v0 = *temp_v38;
            temp_v15 = temp_v0 == '\x04';
            if (temp_v15) {
              temp_v0 = *pcVar21;
            }
            if (!(temp_v15 && temp_v0 == '\x06')) {
              temp_v22 = temp_v33;
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,4,0xdd,&LAB_001a4c78);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,4,0xdd,&LAB_001a48a0);
            }
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          temp_v10 = asdTMTexTableEntryAt(0x1a,0x3d);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v11 = FUN_0029e9cc(*puVar22), temp_v11 != 0)))) {
            temp_v22 = temp_v29;
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,4,0xdd,&LAB_001a4c78);
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v10 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          temp_v10 = asdTMTexTableEntryAt(0x1a,0x3e);
          FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0,1,0xdd,&LAB_001a48a4);
          temp_v26 = 0;
          temp_v24 = (short *)romwright_f2u((float)(temp_v30));
          temp_v25 = 3.09687e-43f;
          temp_v22 = (short *)0x48;
          temp_v23 = temp_v28;
          piVar17 = (int *)(temp_v34 + 0x1e6c);
          FUN_002888a8(temp_v33,temp_v29,*piVar17,0,0x1a,0x47,0x49);
          if (*piVar17 != 0) {
            efctSetSpeed();
            temp_v23 = temp_v28;
            temp_v24 = (short *)romwright_f2u((float)(temp_v30));
            temp_v26 = 1;
            temp_v25 = 3.11088e-43f;
            temp_v22 = (short *)0x48;
            FUN_002888a8(temp_v33,temp_v29,*piVar17,0,0x1a,0x47,0x49);
            efctSetSpeed();
          }
          if ((*(char *)(temp_v5 + 0x1e62) != '\0') &&
             (psVar24 = (short *)((int)*(short *)(temp_v34 + 0x18be) -
                                 (int)*(short *)(temp_v7 + 0x130e)), psVar24 != (short *)0x0)) {
            temp_v10 = asdTMTexTableEntryAt(0x1a,0xd4);
            psVar12 = psVar24;
            if ((int)psVar24 < 0) {
              psVar12 = (short *)-(int)psVar24;
            }
            if (psVar12 + -5 < (short *)0x5a) {
              temp_v10 = asdTMTexTableEntryAt(0x1a,0xd5);
            }
            else if (psVar12 + -0x32 < (short *)0x384) {
              temp_v10 = asdTMTexTableEntryAt(0x1a,0xd6);
            }
            else if ((int)psVar12 >= 1000) {
              temp_v10 = asdTMTexTableEntryAt(0x1a,0xd7);
            }
            if ((int)psVar24 < 0) {
              drawSetColorFromRGBA8(0xfa282d00);
              temp_v22 = (short *)&LAB_001a500c;
              temp_v23 = psVar12;
              FUN_002bdf94(2,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0,3,0xdd,&LAB_001a5010);
            }
            else {
              drawSetColorFromRGBA8(0x72e02700);
              temp_v22 = (short *)&LAB_001a4c74;
              temp_v23 = psVar12;
              FUN_002bdf94(2,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0,3,0xdd,&LAB_001a5010);
            }
          }
          temp_v19 = (unsigned long long)(unsigned int)temp_v17;
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x11);
          FUN_002bed3c();
          temp_v10 = 0;
          do {
            temp_v12 = temp_v34 + temp_v10;
            temp_v11 = temp_v12 + 0x1000;
            temp_v1 = *(unsigned char *)(temp_v12 + 0x1332);
            if (*(char *)(temp_v5 + 0x1e62) != '\0') {
              temp_v1 = *(unsigned char *)(temp_v12 + 0x18e2);
            }
            psVar24 = (short *)(unsigned int)temp_v1;
            if (psVar24 == (short *)0x0) {
              temp_v13 = 0x50;
            }
            else if (psVar24 == (short *)0x1) {
              temp_v13 = 0x4b;
            }
            else if (psVar24 == (short *)0x2) {
              temp_v13 = 0x4f;
            }
            else if (psVar24 == (short *)0x3) {
              temp_v13 = 0x4c;
            }
            else if (psVar24 == (short *)0x4) {
              temp_v13 = 0x4d;
            }
            else if (psVar24 == (short *)0x5) {
              temp_v13 = 0x4e;
            }
            if ((*pcVar21 == '\r') ||
               ((*pcVar21 == '\x06' && (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 == 0)))) {
              temp_v13 = 0x51;
            }
            if ((*(char *)(temp_v5 + 0x1e62) != '\0') &&
               (temp_v8 = (unsigned int)*(unsigned char *)(temp_v12 + 0x18e2), temp_v8 != *(unsigned char *)(temp_v11 + 0x332))) {
              FUN_0028886c();
              if (0 < (int)temp_v8) {
                temp_v13 = temp_v13 + 7;
              }
              if ((int)temp_v8 < 0) {
                temp_v13 = temp_v13 + 0xe;
              }
            }
            temp_v11 = asdTMTexTableEntryAt(0x1a,temp_v10 + 0x60);
            FUN_002bf288(2,0x1a,temp_v13,(unsigned char *)((int)*(short *)(temp_v11 + 8) + (int)temp_v28),
                         (int)*(short *)(temp_v11 + 10) + (int)temp_v30,0xdd);
            temp_v11 = temp_v34;
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 8);
          temp_v13 = 0;
          do {
            psVar12 = (short *)0x0;
            drawSetColorFromRGBA8(0xff);
            unitGetStereoScreenPosition(&temp_v28,&temp_v30,temp_v13 + 0x12);
            temp_v36 = asdTMTexTableEntryAt(0x1a,temp_v13 + 0x7b);
            temp_v23 = (short *)asdTMTexTableEntryAt(0x1a,0x7a);
            if (temp_v13 != 0) {
              if (temp_v13 != 1) {
                if (temp_v13 != 2) {
                  if (temp_v13 != 3) {
                    if (temp_v13 == 4) {
                      psVar11 = (short *)(int)*(short *)(temp_v7 + 0x1322);
                      temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x1330);
                      psVar24 = psVar11;
                      if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                        psVar24 = (short *)(int)*(short *)(temp_v11 + 0x18d2);
                        temp_v33 = (short *)(int)*(short *)(temp_v11 + 0x18e0);
                        psVar12 = temp_v33;
                        if (psVar24 == psVar11) {
                          psVar12 = (short *)0xff;
                        }
                        if ((int)psVar24 < (int)psVar11) {
                          psVar12 = (short *)0xdc0f14ff;
                        }
                        if ((int)psVar11 < (int)psVar24) {
                          drawSetColorFromRGBA8(0x72e027ff);
                        }
                        else {
                          drawSetColorFromRGBA8(psVar12);
                        }
                        psVar12 = (short *)((int)*(short *)(temp_v11 + 0x18d2) -
                                           (int)*(short *)(temp_v7 + 0x1322));
                      }
                    }
                  }
                  else {
                    psVar24 = (short *)(int)*(short *)(temp_v7 + 0x1320);
                    temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x132e);
                    if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                      psVar11 = (short *)(int)*(short *)(temp_v11 + 0x18d0);
                      temp_v33 = (short *)(int)*(short *)(temp_v11 + 0x18de);
                      psVar12 = temp_v33;
                      if ((int)psVar11 < (int)psVar24) {
                        psVar12 = (short *)0xdc0f14ff;
                      }
                      if (psVar11 == psVar24) {
                        psVar12 = (short *)0xff;
                      }
                      if ((int)psVar24 < (int)psVar11) {
                        drawSetColorFromRGBA8(0x72e027ff);
                      }
                      else {
                        drawSetColorFromRGBA8(psVar12);
                      }
                      temp_v10 = (int)*(short *)(temp_v11 + 0x18d0);
                      temp_v12 = (int)*(short *)(temp_v7 + 0x1320);
                      psVar24 = psVar11;
                      psVar12 = (short *)(temp_v10 - temp_v12);
                    }
                  }
                }
                else {
                  psVar24 = (short *)(int)*(short *)(temp_v7 + 0x131e);
                  temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x132c);
                  if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                    psVar11 = (short *)(int)*(short *)(temp_v11 + 0x18ce);
                    temp_v33 = (short *)(int)*(short *)(temp_v11 + 0x18dc);
                    psVar12 = temp_v33;
                    if ((int)psVar11 < (int)psVar24) {
                      psVar12 = (short *)0xdc0f14ff;
                    }
                    if (psVar11 == psVar24) {
                      psVar12 = (short *)0xff;
                    }
                    if ((int)psVar24 < (int)psVar11) {
                      drawSetColorFromRGBA8(0x72e027ff);
                    }
                    else {
                      drawSetColorFromRGBA8(psVar12);
                    }
                    temp_v10 = (int)*(short *)(temp_v11 + 0x18ce);
                    temp_v12 = (int)*(short *)(temp_v7 + 0x131e);
                    psVar24 = psVar11;
                    psVar12 = (short *)(temp_v10 - temp_v12);
                  }
                }
              }
              else {
                psVar24 = (short *)(int)*(short *)(temp_v7 + 0x131c);
                temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x132a);
                if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                  psVar11 = (short *)(int)*(short *)(temp_v11 + 0x18cc);
                  temp_v33 = (short *)(int)*(short *)(temp_v11 + 0x18da);
                  psVar12 = temp_v33;
                  if ((int)psVar11 < (int)psVar24) {
                    psVar12 = (short *)0xdc0f14ff;
                  }
                  if (psVar11 == psVar24) {
                    psVar12 = (short *)0xff;
                  }
                  if ((int)psVar24 < (int)psVar11) {
                    drawSetColorFromRGBA8(0x72e027ff);
                  }
                  else {
                    drawSetColorFromRGBA8(psVar12);
                  }
                  temp_v10 = (int)*(short *)(temp_v11 + 0x18cc);
                  temp_v12 = (int)*(short *)(temp_v7 + 0x131c);
                  psVar24 = psVar11;
                  psVar12 = (short *)(temp_v10 - temp_v12);
                }
              }
            }
            else {
              psVar24 = (short *)(int)*(short *)(temp_v7 + 0x131a);
              temp_v33 = (short *)(int)*(short *)(temp_v7 + 0x1328);
              if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                psVar11 = (short *)(int)*(short *)(temp_v11 + 0x18ca);
                temp_v33 = (short *)(int)*(short *)(temp_v11 + 0x18d8);
                psVar12 = temp_v33;
                if ((int)psVar11 < (int)psVar24) {
                  psVar12 = (short *)0xdc0f14ff;
                }
                if (psVar11 == psVar24) {
                  psVar12 = (short *)0xff;
                }
                if ((int)psVar24 < (int)psVar11) {
                  drawSetColorFromRGBA8(0x72e027ff);
                }
                else {
                  drawSetColorFromRGBA8(psVar12);
                }
                temp_v10 = (int)*(short *)(temp_v11 + 0x18ca);
                temp_v12 = (int)*(short *)(temp_v7 + 0x131a);
                psVar24 = psVar11;
                psVar12 = (short *)(temp_v10 - temp_v12);
              }
            }
            if ((*pcVar21 != '\r') &&
               ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
              temp_v22 = psVar24;
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)((int)temp_v23 + 8) + (int)temp_v28),
                           (int)temp_v30 +
                           (int)*(short *)((int)temp_v23 + 10) + (int)*(short *)(temp_v36 + 10),1,3,
                           0xdd,&LAB_001a5514);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)((int)temp_v23 + 8) + (int)temp_v28),
                           (int)*(short *)(temp_v36 + 10) + (int)*(short *)((int)temp_v23 + 10) +
                           (int)temp_v30,1,3,0xdd,&LAB_001a551c);
            }
            if (*(char *)(temp_v5 + 0x1e62) != '\0') {
              temp_v36 = asdTMTexTableEntryAt(0x1a,temp_v13 + 0x85);
              temp_v10 = asdTMTexTableEntryAt(0x1a,0x84);
              if ((int)psVar12 >= 1) {
                FUN_002bdf94(0,(unsigned char *)
                               ((int)temp_v28 +
                               (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v36 + 8)),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v10 + 10),1,1,0xdd,
                             &LAB_001a5518);
              }
              else if ((int)psVar12 < 0) {
                FUN_002bdf94(0,(unsigned char *)
                               ((int)temp_v28 +
                               (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v36 + 8)),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v10 + 10),1,1,0xdd,
                             &LAB_001a500c);
              }
              temp_v10 = asdTMTexTableEntryAt(0x1a,0x83);
              if ((int)psVar12 >= 1) {
                temp_v22 = psVar12;
                FUN_002bdf94(0,(unsigned char *)
                               ((int)*(short *)(temp_v36 + 8) + (int)*(short *)(temp_v10 + 8) +
                               (int)temp_v28),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v10 + 10),1,3,0xdd,
                             &LAB_001a5514);
              }
              else if ((int)psVar12 < 0) {
                temp_v22 = (short *)-(int)psVar12;
                FUN_002bdf94(0,(unsigned char *)
                               ((int)*(short *)(temp_v36 + 8) + (int)*(short *)(temp_v10 + 8) +
                               (int)temp_v28),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v10 + 10),1,3,0xdd,
                             &LAB_001a5514);
              }
            }
            FUN_002bed3c();
            temp_v36 = asdTMTexTableEntryAt(0x1a,temp_v13 + 0x7b);
            temp_v23 = (short *)asdTMTexTableEntryAt(0x1a,0x6e);
            if ((*pcVar21 != '\r') &&
               ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
              if ((int)psVar24 < 200) {
                temp_v10 = (int)temp_v33 - (int)psVar12;
                temp_v23 = (short *)(int)(short)temp_v10;
                temp_v21 = 200;
                temp_v12 = asdTMTexTableEntryAt(0x1a,0x6e);
                temp_v22 = *(short **)(temp_v12 + 0xc);
                temp_v12 = __aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                temp_v32 = temp_v12 * (int)temp_v23 >> 0xc;
                if ((0 < (int)temp_v23) && (temp_v32 < 1)) {
                  temp_v32 = 1;
                }
                temp_v3 = temp_v22[1];
                temp_v4 = (short)(int)psVar24;
                temp_v2 = (short)(int)psVar12;
                if (temp_v10 < 0) {
                  temp_v22 = (short *)(int)(short)(temp_v4 - temp_v2);
                  temp_v21 = 200;
                  temp_v10 = asdTMTexTableEntryAt(0x1a,0x6e);
                  psVar11 = *(short **)(temp_v10 + 0xc);
                  temp_v10 = __aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                  temp_v32 = temp_v10 * (int)temp_v22 >> 0xc;
                  if ((0 < (int)temp_v22) && (temp_v32 < 1)) {
                    temp_v32 = 1;
                  }
                  temp_v3 = psVar11[1];
                }
                temp_v22 = (short *)0xdd;
                FUN_002b0750(2,0x1a,0x6e,temp_v28,(int)temp_v30 + (int)*(short *)(temp_v36 + 10),
                             temp_v32,(int)temp_v3);
                temp_v3 = (short)(int)temp_v33;
                if (*temp_v38 != '\x03') {
                  temp_v31 = 0;
                  if ((int)temp_v33 < (int)psVar24) {
                    temp_v21 = 200;
                    temp_v22 = (short *)(int)(short)(temp_v4 - temp_v3);
                    temp_v10 = asdTMTexTableEntryAt(0x1a,0x6f);
                    psVar11 = *(short **)(temp_v10 + 0xc);
                    temp_v10 = __aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                    temp_v23 = (short *)(temp_v10 * (int)temp_v22 >> 0xc);
                    if ((0 < (int)temp_v22) && ((int)temp_v23 < 1)) {
                      temp_v23 = (short *)0x1;
                    }
                    temp_v24 = (short *)(int)psVar11[1];
                    if ((0 < (int)psVar12) && (*(char *)(temp_v5 + 0x1eb8) != '\0')) {
                      temp_v21 = 200;
                      temp_v10 = asdTMTexTableEntryAt(0x1a,0x76);
                      psVar12 = *(short **)(temp_v10 + 0xc);
                      temp_v10 = __aeabi_idivmod((int)*psVar12 << 0xc,temp_v21);
                      temp_v31 = temp_v10 * temp_v2 >> 0xc;
                      if ((0 < temp_v2) && (temp_v31 < 1)) {
                        temp_v31 = 1;
                      }
                      temp_v25 = (float)(int)psVar12[1];
                      temp_v22 = (short *)0xdd;
                      FUN_002b0750(2,0x1a,0x76,(unsigned char *)((int)temp_v28 + temp_v32),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      efctSetSpeed();
                      temp_v10 = g_titleScene;
                      temp_v12 = packNibblesAndByte(6,1,0);
                      piVar17 = (int *)(temp_v10 + 0x12ac);
                      temp_v9 = piVar17[*piVar17 + 2];
                      piVar17[*piVar17 + 2] = temp_v12;
                      if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                        (**(romwright_code **)(temp_v10 + 0x12c8))(temp_v12);
                        *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                      }
                      temp_v22 = (short *)0xde;
                      FUN_002b0750(2,0x1a,0x77,(unsigned char *)((int)temp_v28 + temp_v32),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      temp_v10 = g_titleScene;
                      temp_v12 = packNibblesAndByte(6,7,0);
                      piVar17 = (int *)(temp_v10 + 0x12ac);
                      temp_v9 = piVar17[*piVar17 + 2];
                      piVar17[*piVar17 + 2] = temp_v12;
                      if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                        (**(romwright_code **)(temp_v10 + 0x12c8))();
                        *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                      }
                      efctSetSpeed();
                    }
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x6f,(unsigned char *)((int)temp_v28 + temp_v31 + temp_v32),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v23,temp_v24);
                  }
                  else if ((int)psVar24 < (int)temp_v33) {
                    temp_v21 = 200;
                    temp_v10 = (int)(short)(temp_v3 - temp_v4);
                    temp_v12 = asdTMTexTableEntryAt(0x1a,0x71);
                    temp_v22 = *(short **)(temp_v12 + 0xc);
                    temp_v12 = __aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                    temp_v23 = (short *)(temp_v12 * temp_v10 >> 0xc);
                    if ((0 < temp_v10) && ((int)temp_v23 < 1)) {
                      temp_v23 = (short *)0x1;
                    }
                    temp_v24 = (short *)(int)temp_v22[1];
                    if ((0 < (int)psVar12) && (*(char *)(temp_v5 + 0x1eb8) != '\0')) {
                      temp_v21 = 200;
                      temp_v10 = asdTMTexTableEntryAt(0x1a,0x76);
                      temp_v22 = *(short **)(temp_v10 + 0xc);
                      temp_v10 = __aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                      temp_v31 = temp_v10 * temp_v2 >> 0xc;
                      if ((0 < temp_v2) && (temp_v31 < 1)) {
                        temp_v31 = 1;
                      }
                      temp_v25 = (float)(int)temp_v22[1];
                      temp_v22 = (short *)0xdd;
                      temp_v27 = temp_v32 - (int)temp_v23;
                      FUN_002b0750(2,0x1a,0x76,(unsigned char *)(temp_v27 + (int)temp_v28),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      efctSetSpeed();
                      temp_v10 = g_titleScene;
                      temp_v12 = packNibblesAndByte(6,1,0);
                      piVar17 = (int *)(temp_v10 + 0x12ac);
                      temp_v9 = piVar17[*piVar17 + 2];
                      piVar17[*piVar17 + 2] = temp_v12;
                      if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                        (**(romwright_code **)(temp_v10 + 0x12c8))(temp_v12);
                        *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                      }
                      temp_v22 = (short *)0xde;
                      FUN_002b0750(2,0x1a,0x77,(unsigned char *)(temp_v27 + (int)temp_v28),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      temp_v10 = g_titleScene;
                      temp_v12 = packNibblesAndByte(6,7,0);
                      piVar17 = (int *)(temp_v10 + 0x12ac);
                      temp_v9 = piVar17[*piVar17 + 2];
                      piVar17[*piVar17 + 2] = temp_v12;
                      if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                        (**(romwright_code **)(temp_v10 + 0x12c8))();
                        *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                      }
                      efctSetSpeed();
                    }
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x71,
                                 (unsigned char *)
                                 (temp_v31 + (temp_v32 - (int)temp_v23) + (int)temp_v28),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v23,temp_v24);
                  }
                  else if (0 < (int)psVar12) {
                    temp_v21 = 200;
                    temp_v10 = asdTMTexTableEntryAt(0x1a,0x76);
                    psVar12 = *(short **)(temp_v10 + 0xc);
                    temp_v10 = __aeabi_idivmod((int)*psVar12 << 0xc,temp_v21);
                    temp_v31 = temp_v10 * temp_v2 >> 0xc;
                    if ((0 < temp_v2) && (temp_v31 < 1)) {
                      temp_v31 = 1;
                    }
                    temp_v25 = (float)(int)psVar12[1];
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x76,(unsigned char *)((int)temp_v28 + temp_v32),
                                 (int)temp_v30 + (int)*(short *)(temp_v36 + 10),temp_v31,temp_v25);
                    efctSetSpeed();
                    temp_v10 = g_titleScene;
                    temp_v12 = packNibblesAndByte(6,1,0);
                    piVar17 = (int *)(temp_v10 + 0x12ac);
                    temp_v9 = piVar17[*piVar17 + 2];
                    piVar17[*piVar17 + 2] = temp_v12;
                    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                      (**(romwright_code **)(temp_v10 + 0x12c8))();
                      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                    }
                    temp_v22 = (short *)0xde;
                    FUN_002b0750(2,0x1a,0x77,(unsigned char *)((int)temp_v28 + temp_v32),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25);
                    temp_v10 = g_titleScene;
                    temp_v12 = packNibblesAndByte(6,7,0);
                    piVar17 = (int *)(temp_v10 + 0x12ac);
                    temp_v9 = piVar17[*piVar17 + 2];
                    piVar17[*piVar17 + 2] = temp_v12;
                    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                      (**(romwright_code **)(temp_v10 + 0x12c8))();
                      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                    }
                    efctSetSpeed();
                  }
                }
                else if ((int)temp_v33 < (int)psVar24) {
                  temp_v21 = 200;
                  temp_v10 = asdTMTexTableEntryAt(0x1a,0x6f);
                  psVar12 = *(short **)(temp_v10 + 0xc);
                  temp_v10 = __aeabi_idivmod((int)*psVar12 << 0xc,temp_v21);
                  temp_v10 = temp_v10 * (short)(temp_v4 - temp_v3) >> 0xc;
                  if ((0 < (short)(temp_v4 - temp_v3)) && (temp_v10 < 1)) {
                    temp_v10 = 1;
                  }
                  temp_v22 = (short *)0xdd;
                  FUN_002b0750(2,0x1a,0x6f,(unsigned char *)((int)temp_v28 + temp_v32),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v10,(int)psVar12[1]
                              );
                }
                else if ((int)psVar24 < (int)temp_v33) {
                  temp_v21 = 200;
                  temp_v10 = asdTMTexTableEntryAt(0x1a,0x71);
                  psVar12 = *(short **)(temp_v10 + 0xc);
                  temp_v10 = __aeabi_idivmod((int)*psVar12 << 0xc,temp_v21);
                  temp_v10 = temp_v10 * (short)(temp_v3 - temp_v4) >> 0xc;
                  if ((0 < (short)(temp_v3 - temp_v4)) && (temp_v10 < 1)) {
                    temp_v10 = 1;
                  }
                  temp_v22 = (short *)0xdd;
                  FUN_002b0750(2,0x1a,0x71,(unsigned char *)((temp_v32 - temp_v10) + (int)temp_v28),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v10,(int)psVar12[1]
                              );
                }
              }
              else {
                temp_v10 = (int)*(short *)(temp_v36 + 10) + (int)temp_v30;
                if (psVar24 == (short *)0x3e7) {
                  FUN_002bf288(2,0x1a,0x74,temp_v28,temp_v10,0xdd);
                  FUN_002b659c((unsigned char *)((int)temp_v28 + (int)temp_v23[4]),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v23[5] + (int)temp_v30,
                               (int)**(short **)(temp_v23 + 6),(int)(*(short **)(temp_v23 + 6))[1]);
                  temp_v10 = g_titleScene;
                  temp_v12 = packNibblesAndByte(6,1,0);
                  piVar17 = (int *)(temp_v10 + 0x12ac);
                  temp_v9 = piVar17[*piVar17 + 2];
                  piVar17[*piVar17 + 2] = temp_v12;
                  if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                    (**(romwright_code **)(temp_v10 + 0x12c8))();
                    *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                  }
                  temp_v10 = vec2GetYInt(temp_v34 + 0x44);
                  temp_v2 = *(short *)(temp_v36 + 10);
                  temp_v10 = temp_v10 + (int)temp_v30;
                  temp_v12 = vec2GetXInt(temp_v34 + 0x44);
                  FUN_002bf288(2,0x1a,0x75,(unsigned char *)(temp_v12 + (int)temp_v28),temp_v10 + temp_v2,
                               0xdd);
                  temp_v10 = g_titleScene;
                  temp_v12 = packNibblesAndByte(6,7,0);
                  piVar17 = (int *)(temp_v10 + 0x12ac);
                  temp_v9 = piVar17[*piVar17 + 2];
                  piVar17[*piVar17 + 2] = temp_v12;
                  if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                    (*(romwright_code *)piVar17[7])();
                    *(unsigned char *)(piVar17 + 6) = 0;
                  }
                }
                else {
                  FUN_002bf288(2,0x1a,0x72,temp_v28,temp_v10,0xdd);
                  FUN_002b659c((unsigned char *)((int)temp_v28 + (int)temp_v23[4]),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v23[5] + (int)temp_v30,
                               (int)**(short **)(temp_v23 + 6),(int)(*(short **)(temp_v23 + 6))[1]);
                  temp_v10 = g_titleScene;
                  temp_v12 = packNibblesAndByte(6,1,0);
                  piVar17 = (int *)(temp_v10 + 0x12ac);
                  temp_v9 = piVar17[*piVar17 + 2];
                  piVar17[*piVar17 + 2] = temp_v12;
                  if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                    (**(romwright_code **)(temp_v10 + 0x12c8))();
                    *(unsigned char *)(temp_v10 + 0x12c4) = 0;
                  }
                  temp_v10 = vec2GetYInt(temp_v34 + 0x44);
                  temp_v2 = *(short *)(temp_v36 + 10);
                  temp_v10 = temp_v10 + (int)temp_v30;
                  temp_v12 = vec2GetXInt(temp_v34 + 0x44);
                  FUN_002bf288(2,0x1a,0x73,(unsigned char *)(temp_v12 + (int)temp_v28),temp_v10 + temp_v2,
                               0xdd);
                  temp_v10 = g_titleScene;
                  temp_v12 = packNibblesAndByte(6,7,0);
                  piVar17 = (int *)(temp_v10 + 0x12ac);
                  temp_v9 = piVar17[*piVar17 + 2];
                  piVar17[*piVar17 + 2] = temp_v12;
                  if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v12) {
                    (*(romwright_code *)piVar17[7])();
                    *(unsigned char *)(piVar17 + 6) = 0;
                  }
                }
                FUN_002b64b8();
              }
            }
            FUN_002bed3c();
            temp_v13 = temp_v13 + 1;
          } while (temp_v13 < 5);
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0x17);
          drawSetColorFromRGBA8(0xff);
          if (*pcVar21 == '\0') {
            psVar24 = (short *)(int)*(short *)(temp_v7 + 0x1310);
            if (*(char *)(temp_v5 + 0x1e62) != '\0') {
              FUN_002bf288(2,0x1a,0xe6,temp_v28,temp_v30,0xdd);
              psVar12 = (short *)((int)*(short *)(temp_v11 + 0x18c0) - (int)*(short *)(temp_v7 + 0x1310)
                                 );
              if ((int)psVar12 < 0) {
                psVar24 = (short *)-(int)psVar12;
              }
              if (0 < (int)psVar12) {
                psVar24 = psVar12;
              }
              if (psVar12 != (short *)0x0) {
                temp_v13 = asdTMTexTableEntryAt(0x1a,0xdb);
                if (psVar24 + -5 < (short *)0x5a) {
                  temp_v13 = asdTMTexTableEntryAt(0x1a,0xda);
                }
                else if (psVar24 + -0x32 < (short *)0x384) {
                  temp_v13 = asdTMTexTableEntryAt(0x1a,0xd9);
                }
                if ((int)psVar12 < 0) {
                  drawSetColorFromRGBA8(0xfa282d00);
                  temp_v22 = (short *)&LAB_001a6434;
                  temp_v23 = psVar24;
                  FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                               (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438);
                }
                else {
                  drawSetColorFromRGBA8(0x72e02700);
                  temp_v22 = (short *)&LAB_001a6444;
                  temp_v23 = psVar24;
                  FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                               (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438);
                }
              }
              temp_v10 = (int)*(short *)(temp_v11 + 0x18c0);
              temp_v12 = (int)*(short *)(temp_v7 + 0x1310);
              temp_v13 = temp_v10;
              if (temp_v10 < temp_v12) {
                temp_v13 = -0x23f0eb01;
              }
              if (temp_v10 == temp_v12) {
                temp_v13 = 0xff;
              }
              if (temp_v12 < temp_v10) {
                drawSetColorFromRGBA8(0x72e027ff);
              }
              else {
                drawSetColorFromRGBA8(temp_v13);
              }
              psVar24 = (short *)(int)*(short *)(temp_v11 + 0x18c0);
            }
            temp_v13 = asdTMTexTableEntryAt(0x1a,0x8d);
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v13 + 10),1,3,0xdd,&LAB_001a6450);
            if (*temp_v38 != '\t') {
              temp_v13 = gameFlagIsSet(0x410);
              if (temp_v13 != 0) {
                psVar24 = (short *)(int)*(short *)(temp_v7 + 0x1312);
                if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                  FUN_002bf288(2,0x1a,0xe7,temp_v28,temp_v30,0xdd);
                  psVar12 = (short *)((int)*(short *)(temp_v11 + 0x18c2) -
                                     (int)*(short *)(temp_v7 + 0x1312));
                  if ((int)psVar12 < 0) {
                    psVar24 = (short *)-(int)psVar12;
                  }
                  if (0 < (int)psVar12) {
                    psVar24 = psVar12;
                  }
                  if (psVar12 != (short *)0x0) {
                    temp_v13 = asdTMTexTableEntryAt(0x1a,0xe1);
                    if (psVar24 + -5 < (short *)0x5a) {
                      temp_v13 = asdTMTexTableEntryAt(0x1a,0xe0);
                    }
                    else if (psVar24 + -0x32 < (short *)0x384) {
                      temp_v13 = asdTMTexTableEntryAt(0x1a,0xdf);
                    }
                    if ((int)psVar12 < 0) {
                      drawSetColorFromRGBA8(0xfa282d00);
                      temp_v22 = (short *)&LAB_001a6434;
                      temp_v23 = psVar24;
                      FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                   (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,
                                   &LAB_001a6438);
                    }
                    else {
                      drawSetColorFromRGBA8(0x72e02700);
                      temp_v22 = (short *)&LAB_001a6444;
                      temp_v23 = psVar24;
                      FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                   (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,
                                   &LAB_001a6438);
                    }
                  }
                  temp_v10 = (int)*(short *)(temp_v11 + 0x18c2);
                  temp_v12 = (int)*(short *)(temp_v7 + 0x1312);
                  temp_v13 = temp_v10;
                  if (temp_v10 < temp_v12) {
                    temp_v13 = -0x23f0eb01;
                  }
                  if (temp_v10 == temp_v12) {
                    temp_v13 = 0xff;
                  }
                  if (temp_v12 < temp_v10) {
                    drawSetColorFromRGBA8(0x72e027ff);
                  }
                  else {
                    drawSetColorFromRGBA8(temp_v13);
                  }
                  psVar24 = (short *)(int)*(short *)(temp_v11 + 0x18c2);
                }
                temp_v13 = asdTMTexTableEntryAt(0x1a,0x91);
                temp_v22 = psVar24;
                FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v13 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v13 + 10) + (int)temp_v30,1,3,0xdd,&LAB_001a6450);
              }
            }
            else if (*(char *)(temp_v5 + 0x1eb9) == '\x01') {
              psVar24 = (short *)(int)*(short *)(temp_v7 + 0x1312);
              if (*(char *)(temp_v5 + 0x1e62) != '\0') {
                FUN_002bf288(2,0x1a,0xe7,temp_v28,temp_v30,0xdd);
                psVar12 = (short *)((int)*(short *)(temp_v11 + 0x18c2) -
                                   (int)*(short *)(temp_v7 + 0x1312));
                if ((int)psVar12 < 0) {
                  psVar24 = (short *)-(int)psVar12;
                }
                if (0 < (int)psVar12) {
                  psVar24 = psVar12;
                }
                if (psVar12 != (short *)0x0) {
                  temp_v13 = asdTMTexTableEntryAt(0x1a,0xe1);
                  if (psVar24 + -5 < (short *)0x5a) {
                    temp_v13 = asdTMTexTableEntryAt(0x1a,0xe0);
                  }
                  else if (psVar24 + -0x32 < (short *)0x384) {
                    temp_v13 = asdTMTexTableEntryAt(0x1a,0xdf);
                  }
                  if ((int)psVar12 < 0) {
                    drawSetColorFromRGBA8(0xfa282d00);
                    temp_v22 = (short *)&LAB_001a6434;
                    temp_v23 = psVar24;
                    FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                 (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438
                                );
                  }
                  else {
                    drawSetColorFromRGBA8(0x72e02700);
                    temp_v22 = (short *)&LAB_001a6444;
                    temp_v23 = psVar24;
                    FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                 (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438
                                );
                  }
                }
                temp_v10 = (int)*(short *)(temp_v11 + 0x18c2);
                temp_v12 = (int)*(short *)(temp_v7 + 0x1312);
                temp_v13 = temp_v10;
                if (temp_v10 < temp_v12) {
                  temp_v13 = -0x23f0eb01;
                }
                if (temp_v10 == temp_v12) {
                  temp_v13 = 0xff;
                }
                if (temp_v12 < temp_v10) {
                  drawSetColorFromRGBA8(0x72e027ff);
                }
                else {
                  drawSetColorFromRGBA8(temp_v13);
                }
                psVar24 = (short *)(int)*(short *)(temp_v11 + 0x18c2);
              }
              temp_v13 = asdTMTexTableEntryAt(0x1a,0x91);
              temp_v22 = psVar24;
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v13 + 10),1,3,0xdd,&LAB_001a6450);
            }
          }
          FUN_002bed3c();
          temp_v0 = *pcVar21;
          temp_v15 = temp_v0 == '\x04';
          if (temp_v15) {
            temp_v0 = *(char *)(temp_v5 + 0x1e62);
          }
          if (temp_v15 && temp_v0 == '\0') {
            FUN_002bf288(2,0x1a,0x93,temp_v28,temp_v30,0xdd);
          }
          temp_v10 = 0;
          temp_v13 = 0;
          if ((*(char *)(temp_v5 + 0x1e71) != '\0') ||
             ((*pcVar21 != '\r' &&
              ((*pcVar21 != '\x06' || (temp_v11 = FUN_0029e9cc(*puVar22), temp_v11 != 0)))))) {
            temp_v8 = 1;
            temp_v11 = 0;
            temp_v12 = 5;
            do {
              if (((unsigned int)*(unsigned short *)(temp_v7 + 0x1314) & (1 << (temp_v8 & 0xff))) != 0) {
                temp_v13 = temp_v13 + 1;
              }
              if (((unsigned int)*(unsigned short *)(temp_v7 + 0x1314) & (1 << ((temp_v8 + 1) & 0xff))) != 0) {
                temp_v11 = temp_v11 + 1;
              }
              temp_v12 = temp_v12 - 1;
              temp_v8 = temp_v8 + 2;
            } while (temp_v12 != 0);
            temp_v8 = 1;
            temp_v13 = 6 - (temp_v13 + temp_v11);
            do {
              if (((unsigned int)*(unsigned short *)(temp_v7 + 0x1314) & (1 << (temp_v8 & 0xff))) != 0) {
                unitGetStereoScreenPosition(&temp_v28,&temp_v30,(0x1d - temp_v10) - temp_v13);
                temp_v12 = temp_v13 + temp_v10;
                temp_v11 = asdTMTexTableEntryAt(0x1a,temp_v12 + 0xa9);
                FUN_00288844((unsigned char *)((int)*(short *)(temp_v11 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v11 + 10) + (int)temp_v30,0xd3);
                messageKindForward((int)(short)temp_v8,
                             (unsigned char *)((int)*(short *)(temp_v11 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v11 + 10) + (int)temp_v30,0xd3);
                temp_v11 = asdTMTexTableEntryAt(0x1a,temp_v12 + 0xaf);
                requestForward((int)(short)temp_v8,
                             (unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v11 + 8)),
                             (int)temp_v30 + (int)*(short *)(temp_v11 + 10),0xd3);
                temp_v10 = temp_v10 + 1;
                if (temp_v10 >= 6) break;
              }
              temp_v8 = temp_v8 + 1;
            } while ((int)temp_v8 < 0xb);
          }
          temp_v17 = (float)temp_v19;
          if ((*temp_v38 == '\x03') && (*(char *)(temp_v6 + 0x12f0) != '\0')) {
            unitGetStereoScreenPosition(&temp_v28,&temp_v30,10);
            FUN_002bf380(2,0x1a,1,temp_v28,temp_v30,0xdd);
            temp_v13 = 0;
LAB_001a6868:
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x133a);
            temp_v14 = 0x3d;
LAB_001a68b0:
            do {
              unitGetStereoScreenPosition(&temp_v28,&temp_v30,10);
              temp_v10 = asdTMTexTableEntryAt(0x1a,temp_v13 + 0xa2);
              if (*(char *)(temp_v6 + 0x12ee) == temp_v13) {
                FUN_002bf380(2,0x1a,3,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                             (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0xdd);
              }
              else {
                FUN_002bf380(2,0x1a,2,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v10 + 10) + (int)temp_v30,0xdd);
              }
              temp_v11 = asdTMTexTableEntryAt(0x1a,0xa0);
              itemDrawCategoryBadge(temp_v14,(unsigned char *)
                                  ((int)temp_v28 +
                                  (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8)),
                           (int)temp_v30 +
                           (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v11 + 10),0xe2,0);
              temp_v11 = asdTMTexTableEntryAt(0x1a,0xa1);
              if (temp_v8 != 0) {
                FUN_002be650(temp_v8,0);
                if (temp_v8 != 0) {
                  temp_v12 = (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8);
                  VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) +
                                      (int)temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((unsigned char *)((int)temp_v28 + temp_v12),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  textDrawString(2,0xff,temp_v8,temp_v12);
                }
              }
              else {
                textFormatBuffer(temp_v35,&LAB_001a6d40);
                VectorSignedToFloat((int)temp_v30 +
                                    (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v11 + 10),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((unsigned char *)
                                    ((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) +
                                    (int)temp_v28),(unsigned char)(in_fpscr >> 0x16) & 3);
                textDrawString(2,0xff,temp_v35,(int)*(short *)(temp_v11 + 10));
              }
              temp_v17 = (float)temp_v19;
              temp_v13 = temp_v13 + 1;
              if (temp_v13 >= 7) break;
              while( 1 ) {
                while( 1 ) {
                  temp_v8 = 0;
                  if (temp_v13 == 0) goto LAB_001a6868;
                  if (temp_v13 == 1) break;
                  if (temp_v13 != 2) {
                    if (temp_v13 == 3) {
                      temp_v14 = 0x12d;
                      temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x1340);
                    }
                    else if (temp_v13 == 4) {
                      temp_v14 = 0x1a5;
                      temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x1342);
                    }
                    else if (temp_v13 == 5) {
                      temp_v14 = 0x21d;
                      temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x1344);
                    }
                    else if (temp_v13 == 6) {
                      temp_v14 = 0x295;
                      temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x1346);
                    }
                    goto LAB_001a68b0;
                  }
                  temp_v10 = gameFlagIsSet(0x410);
                  if (temp_v10 != 0) {
                    temp_v14 = 0x30d;
                    temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x133e);
                    goto LAB_001a68b0;
                  }
                  temp_v13 = 3;
                }
                temp_v10 = gameFlagIsSet(0x410);
                if (temp_v10 != 0) break;
                temp_v13 = 2;
              }
              temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x133c);
              temp_v14 = 0xb5;
            } while( 1 );
          }
        }
        else {
          unitGetStereoScreenPosition(&temp_v28,&temp_v30,0xe);
          FUN_002bf288(2,0x1a,0xc2,temp_v28,temp_v30,0xdd);
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v5 + 0x1eb6);
          FUN_00288e68(temp_v8);
          temp_v13 = asdTMTexTableEntryAt(0x1a,0xc3);
          FUN_002b6c34((int)(short)temp_v8,
                       (unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0xe2,0,0);
          temp_v13 = asdTMTexTableEntryAt(0x1a,0xc4);
          temp_v21 = aocIndexValueOrDefault(temp_v8);
          VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v13 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(3,0xffffffff,temp_v21,(int)*(short *)(temp_v13 + 8));
        }
      }
    }
  }
LAB_001a6a8c:
  if (*(char *)(temp_v5 + 0x1eb4) != '\0') {
    renderCtxCalculateStereoParallax(g_titleScene);
    temp_v28 = (short *)(int)temp_v20;
    if (temp_v17 < *(float *)(temp_v34 + 0x294)) {
      efctSetSpeed();
      temp_v5 = g_titleScene;
      temp_v13 = packNibblesAndByte(6,1,0);
      piVar17 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = temp_v13;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x1a,0xc6,temp_v28,0,0xdd);
      temp_v5 = g_titleScene;
      temp_v13 = packNibblesAndByte(6,7,0);
      piVar17 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = temp_v13;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      efctSetSpeed();
    }
    if (temp_v17 < *(float *)(temp_v34 + 800)) {
      efctSetSpeed();
      temp_v5 = g_titleScene;
      temp_v13 = packNibblesAndByte(6,1,0);
      piVar17 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = temp_v13;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x1a,0xc6,temp_v28,0,0xdd);
      temp_v5 = g_titleScene;
      temp_v13 = packNibblesAndByte(6,7,0);
      piVar17 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = temp_v13;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      efctSetSpeed();
    }
  }
  efctSetSpeed();
  temp_v5 = g_titleScene;
  piVar17 = (int *)(g_titleScene + 0x124c);
  temp_v13 = *piVar17;
  temp_v7 = piVar17[temp_v13 + 2];
  *piVar17 = temp_v13 - 1;
  if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v7 != piVar17[temp_v13 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1268))();
    *(unsigned char *)(temp_v5 + 0x1264) = 0;
  }
  temp_v5 = g_titleScene;
  temp_v13 = packNibblesAndByte(6,7,0);
  piVar17 = (int *)(temp_v5 + 0x12ac);
  temp_v7 = piVar17[*piVar17 + 2];
  piVar17[*piVar17 + 2] = temp_v13;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
