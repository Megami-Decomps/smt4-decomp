/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208e4c` (_code @ 0x208e4c, 0x4198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002879dc(...);
int FUN_002df948(void);
int FUN_002dfb48(void);

int CONCAT44(...);
int asdMdlManagerMarkDestroy(...);
int FUN_002533f4(...);
int effectSpawnTypeTen(void);
int vec4Forward(...);
int FUN_0027eee0(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287a78(void);
int FUN_00287b0c(void);
int mathPositionHeadingDegrees(void);
int asdMdlManagerDestroy(void);
int dataTable00FindById(void);
int SBORROW4(...);

int FUN_002535ec(void);
int FUN_0025363c(...);
int FUN_00253860(...);
int FUN_00253c70(...);
int FUN_0025b4b0(...);
int FUN_00281e34(void);
int mathDistanceBetweenPoints(void);
int FUN_002a0428(...);
int randNextInRange(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of void: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
} void_stack;

extern int g_mapEnemy; /* 0x447600 */
extern int g_lmapScene; /* 0x447e88 */
extern int g_gameState; /* 0x49f91c */
extern signed char DAT_0049f942; /* 0x49f942 */
extern int DAT_0049f954; /* 0x49f954 */
extern int DAT_0049fadc; /* 0x49fadc */
extern int DAT_0049fae0; /* 0x49fae0 */
extern float DAT_0049fb84; /* 0x49fb84 */
extern float DAT_0049fb88; /* 0x49fb88 */
extern float DAT_0049fb8c; /* 0x49fb8c */
extern float DAT_0049fb90; /* 0x49fb90 */
extern short DAT_0049fb94; /* 0x49fb94 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_002533f4. */
/* Supplied declaration required: effectSpawnTypeTen. */
/* Supplied declaration required: FUN_002535ec. */
/* Supplied declaration required: FUN_0025363c. */
/* Supplied declaration required: FUN_00253860. */
extern int FUN_00253968(char *);
extern int FUN_00253ba0(char *);
/* Supplied declaration required: FUN_00253c70. */
extern int FUN_00256550(unsigned int);
/* Supplied declaration required: FUN_0025b4b0. */
/* Supplied declaration required: vec4Forward. */
extern int FUN_0025c05c(void);
/* Supplied declaration required: FUN_0027eee0. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002879dc. */
/* Supplied declaration required: FUN_00287a78. */
/* Supplied declaration required: mathDistanceBetweenPoints. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: dataTable00FindById. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: randNextInRange. */
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_002df948. */
/* Supplied declaration required: FUN_002dfb48. */


void FUN_00208e4c(void)

{
/* irregular: 34 goto(s); irregular input(s): in_fpscr; 29 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  char *pcVar9;
  unsigned int *puVar10;
  unsigned char *pbVar11;
  char temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  float temp_v11;
  char *pcVar17;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned int in_fpscr;
  float temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  float temp_v27;
  long long temp_v28;
  int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  int temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float fStack_7c;
  float fStack_78;
  int temp_v43;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int temp_v44;
  int temp_v45;
  int temp_v46;
  
  temp_v5 = g_mapEnemy;
  temp_v46 = gameGetMapBlock();
  temp_v2 = gameGetMapBlock();
  temp_v3 = 0;
  temp_v6 = 0;
  do {
    temp_v10 = temp_v2 + temp_v3 * 0x14;
    temp_v8 = temp_v2 + (temp_v3 + 1) * 0x14;
    temp_v6 = temp_v6 + 2;
    *(unsigned char *)(temp_v10 + 0xf20) = *(unsigned char *)(temp_v10 + 0xf20) & 0xef;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(temp_v8 + 0xf20) = *(unsigned char *)(temp_v8 + 0xf20) & 0xef;
  } while (temp_v6 < 0x10);
  temp_v2 = 0;
  if (0 < *(int *)(temp_v5 + 0x3040)) {
    *(int *)(temp_v5 + 0x3040) = *(int *)(temp_v5 + 0x3040) - 1;
  }
  do {
    temp_v3 = temp_v5 + temp_v2 * 0x180;
    pcVar17 = (char *)(temp_v3 + 0x34);
    if (*pcVar17 != '\0') {
      switch(*(unsigned int *)(temp_v3 + 0xb8)) {
      case 0:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        if ((*(char *)(temp_v3 + 0xb1) == '\0') || (temp_v6 = FUN_00253ba0(pcVar17), temp_v6 != 0)) {
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          *(int *)(temp_v3 + 0x1a0) = *(int *)(temp_v3 + 0x1a0) + 1;
          *(int *)(temp_v3 + 0xc4) = *(int *)(temp_v3 + 0xc4) + 1;
          *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
          *(unsigned int *)(temp_v3 + 100) = 1;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          temp_v6 = FUN_00253968(pcVar17);
          if (temp_v6 != 0) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
          temp_v16 = 0;
          if ((g_gameState == 10) && (temp_v6 = gameFlagIsSet(0x17), temp_v6 == 0)) {
            temp_v16 = 1;
          }
          if ((*(char *)(temp_v3 + 0xb1) == '\0') &&
             (temp_v4 = *(unsigned int *)(temp_v3 + 0xc4), (int)temp_v4 >= 0x169)) {
            if (!temp_v16) {
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0xb0);
            }
            if (!temp_v16 && temp_v4 == 0) {
              *(unsigned int *)(temp_v3 + 0xb8) = 9;
              *(unsigned int *)(temp_v3 + 0xbc) = 0;
              break;
            }
          }
          temp_v39 = temp_v30;
          temp_v41 = temp_v32;
          temp_v33 = *(float *)(g_lmapScene + 0x1c);
          temp_v35 = *(float *)(g_lmapScene + 0x24);
          temp_v18 = *(float *)(g_lmapScene + 0x20) - temp_v31;
          temp_v40 = temp_v31 + 35.0f;
          temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          if (*(int *)(temp_v3 + 0xc0) >= 9999) {
            temp_v22 = 600.0f;
          }
          else {
            temp_v22 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                               0x448caa),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          }
          temp_v7 = *(char *)(temp_v3 + 0xb1);
          temp_v17 = 0;
          temp_v14 = temp_v7 == '\0';
          if (temp_v14) {
            temp_v7 = *(char *)(temp_v3 + 0x171);
          }
          if (temp_v14 && temp_v7 == '\0') {
            temp_v15 = *(int *)(temp_v5 + 0x3040) == 0;
            temp_v14 = temp_v15 && !temp_v16;
            if (temp_v15 && !temp_v16) {
              temp_v14 = *(char *)(temp_v3 + 0xb0) == '\0';
            }
            if ((temp_v14) && (0 < *(int *)(temp_v5 + 0x303c))) {
              temp_v6 = 0;
              do {
                temp_v8 = g_mapEnemy + temp_v6 * 0x180;
                if (*(char *)(temp_v8 + 0x34) != '\0') {
                  switch(*(unsigned int *)(temp_v8 + 0xb8)) {
                  case 7:
                  case 8:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                    if (((char *)(temp_v8 + 0x34) != (char *)0x0) &&
                       (*(char *)(temp_v8 + 0x171) == '\0')) {
                      temp_v20 = *(float *)(g_lmapScene + 0x1c);
                      mathDistanceBetweenPoints();
                      temp_v11 = *(float *)(g_lmapScene + 0x1c);
                      mathDistanceBetweenPoints();
                      if (((int)(temp_v20 - temp_v11) < 0x43fa0000) ||
                         (((int)temp_v11 < 0x43960000 && ((int)temp_v20 >= 0x43c80001)))) {
                        temp_v17 = 1;
                      }
                    }
                    goto LAB_002091f4;
                  }
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x20);
            }
          }
LAB_002091f4:
          temp_v13 = 0;
          if ((*(char *)(temp_v3 + 0xb1) == '\0') &&
             ((((((!temp_v17 && (0 < *(int *)(temp_v5 + 0x303c))) || (*(char *)(temp_v3 + 0xb2) == '\0'))
                || ((DAT_0049f954 == 0x18 || DAT_0049f954 == 0x19 ||
                    (DAT_0049f954 == 0x1a || DAT_0049f954 == 5)))) ||
               ((DAT_0049f954 == 0x1f || DAT_0049f954 == 0x20 ||
                ((DAT_0049f954 == 0x21 || DAT_0049f954 == 0x22 ||
                 (DAT_0049f954 == 0x23 || DAT_0049f954 == 0x24)))))) ||
              ((*(char *)(g_lmapScene + 0x180) != '\0' &&
               ((temp_v4 = *(unsigned int *)(temp_v3 + 0xbc),
                temp_v6 = (int)(((long long)(int)temp_v4 * -0x77777777 + ((unsigned long long)temp_v4 << 0x20)) >>
                             0x20), ((temp_v6 >> 3) - (temp_v6 >> 0x1f)) * -0xf + temp_v4 != 0 ||
                (temp_v4 = randNextInRange(100), temp_v4 < 0x50)))))))) {
            temp_v13 = 1;
          }
          if ((DAT_0049fadc == 0 && !(unsigned char)(temp_v13 | temp_v16)) && ((int)romwright_fabs_4(temp_v18) < 0x42f00000)) {
            temp_v18 = *(float *)(g_lmapScene + 0x1c);
            mathDistanceBetweenPoints();
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 <= temp_v18) << 0x1d);
            if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
               (temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0), temp_v6 == -1)) {
              if (temp_v17) {
                temp_v6 = 0;
                do {
                  temp_v8 = g_mapEnemy + temp_v6 * 0x180;
                  if (*(char *)(temp_v8 + 0x34) != '\0') {
                    switch(*(unsigned int *)(temp_v8 + 0xb8)) {
                    case 7:
                    case 8:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                      if ((char *)(temp_v8 + 0x34) != (char *)0x0) {
                        *(unsigned char *)(temp_v8 + 0x170) = 1;
                      }
                      goto LAB_002093d8;
                    }
                  }
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < 0x20);
LAB_002093d8:
                *(unsigned int *)(temp_v5 + 0x3040) = 0x5a;
              }
              goto LAB_0020c7d0;
            }
          }
          temp_v4 = 9999;
          if (*(int *)(temp_v3 + 0xc0) < 9999) {
            if (!temp_v16) {
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0xb0);
            }
            if (!temp_v16 && temp_v4 == 0) {
              temp_v18 = *(float *)(temp_v3 + 0x3c);
              mathDistanceBetweenPoints();
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v22 - 200.0f) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                *(unsigned int *)(temp_v3 + 0xb8) = 9;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                break;
              }
              if (*(int *)(temp_v3 + 0xc0) < *(int *)(temp_v3 + 0xbc)) {
                *(unsigned int *)(temp_v3 + 0xb8) = 4;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                break;
              }
            }
          }
          if (*(int *)(temp_v3 + 0x1a0) != 0x1e || temp_v16) break;
          temp_v4 = randNextInRange(100);
          if (temp_v4 < 0xf) {
            FUN_00253860(pcVar17,0);
          }
          *(unsigned int *)(temp_v3 + 0x1a0) = 0;
        }
        else {
          *(unsigned int *)(temp_v3 + 0xb8) = 9;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 1:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(unsigned int *)(temp_v3 + 100) = 1;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        temp_v33 = *(float *)(g_lmapScene + 0x1c);
        temp_v35 = *(float *)(g_lmapScene + 0x24);
        temp_v22 = *(float *)(g_lmapScene + 0x20) - temp_v31;
        temp_v40 = temp_v31 + 35.0f;
        temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
        temp_v18 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                           0x448caa),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v39 = temp_v30;
        temp_v41 = temp_v32;
        temp_v4 = randNextInRange(100);
        if ((temp_v4 < 0x46) && ((int)romwright_fabs_4(temp_v22) < 0x42f00000)) {
          temp_v22 = *(float *)(g_lmapScene + 0x1c);
          mathDistanceBetweenPoints();
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v22) << 0x1d);
          if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
             (temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0), temp_v6 == -1)) {
LAB_0020c7d0:
            *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) + 1;
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 6;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            *(unsigned int *)(temp_v3 + 0x174) = 0;
            break;
          }
        }
        *(unsigned int *)(temp_v3 + 0xb8) = 0;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        temp_v6 = randNextInRange(100);
        *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
        *(unsigned int *)(temp_v3 + 0xc4) = 0;
        *(unsigned int *)(temp_v3 + 0x1a0) = 0;
        break;
      case 2:
        if (*(int *)(temp_v5 + 0x3038) < DAT_0049fae0) {
          if (*(char *)(temp_v3 + 0xb1) != '\0') {
LAB_002095d4:
            if (*(char *)(temp_v5 + 0x3049) == '\0') {
              temp_v6 = *(int *)(temp_v5 + 0x14);
              mathDistanceBetweenPoints();
              if (temp_v6 < 0x43160000) break;
            }
            temp_v6 = 0;
            do {
              temp_v8 = g_mapEnemy + temp_v6 * 0x180;
              pcVar9 = (char *)(temp_v8 + 0x34);
              temp_v16 = *pcVar9 != '\0';
              temp_v7 = '\0';
              if (temp_v16) {
                temp_v7 = *(char *)(temp_v8 + 0xb1);
              }
              if (temp_v16 && temp_v7 != '\0') {
                pcVar9 = *(char **)(temp_v8 + 0xb8);
              }
              if ((temp_v16 && temp_v7 != '\0') && pcVar9 != (char *)0x2) goto LAB_0020cf74;
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x20);
            temp_v6 = FUN_00253ba0(pcVar17);
            if (temp_v6 != 0) {
              *(unsigned int *)(temp_v3 + 0xd8) = 0;
LAB_002096e8:
              *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
              *(unsigned int *)(temp_v3 + 0xb8) = 3;
              *(unsigned int *)(temp_v3 + 0xbc) = 0;
              *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x3c);
              *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x40);
              *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x44);
              *(unsigned int *)(temp_v3 + 100) = 0;
              *(unsigned int *)(temp_v3 + 0x6c) = 1;
              if (*(char *)(temp_v3 + 0xb1) != '\0') {
                *(unsigned char *)(temp_v5 + 0x3049) = 1;
              }
              temp_v6 = temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8;
              if (*(char *)(temp_v6 + 0x3051) != '\0') {
                temp_v19 = asdMdlManagerClone(*(unsigned int *)(temp_v6 + 0x304c),0);
                *(unsigned int *)(temp_v3 + 0x1ac) = temp_v19;
                FUN_002a0428(temp_v19,1);
                *(unsigned char *)(temp_v3 + 0x1b1) = 1;
              }
              else {
                *(unsigned int *)(temp_v3 + 0x1ac) = *(unsigned int *)(temp_v6 + 0x304c);
                *(unsigned char *)(temp_v6 + 0x3051) = 1;
                *(unsigned char *)(temp_v3 + 0x1b1) = 0;
              }
              *(unsigned char *)(temp_v3 + 0x1b0) = 1;
            }
          }
          else {
            temp_v18 = *(float *)(temp_v5 + 0x14);
            mathDistanceBetweenPoints();
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= DAT_0049fb84) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              if ((*(char *)(temp_v3 + 0xb2) != '\0') && (DAT_0049fae0 / 2 > *(int *)(temp_v5 + 0x3038))
                 ) {
                temp_v4 = randNextInRange(100);
                if (temp_v4 >= 0x1e) goto LAB_00209658;
              }
              else {
                temp_v4 = randNextInRange(100);
                if (temp_v4 >= 0x50) goto LAB_00209658;
              }
            }
            else {
LAB_00209658:
              temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < DAT_0049fb90) << 0x1f) |
                      ((unsigned int)(temp_v18 == DAT_0049fb90) << 0x1e);
              in_fpscr = temp_v4 | ((unsigned int)((temp_v18 != temp_v18) || (DAT_0049fb90 != DAT_0049fb90)) << 0x1c);
              temp_v13 = (unsigned char)(temp_v4 >> 0x18);
              if ((((unsigned char)((temp_v13 >> 6) & 1) || temp_v13 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) ||
                  (*(char *)(temp_v3 + 0xb2) != '\0')) ||
                 (temp_v6 = randNextInRange(99), 100 - DAT_0049fb94 <= temp_v6)) {
                temp_v4 = in_fpscr & 0xfffffff;
                in_fpscr = temp_v4 | ((unsigned int)(DAT_0049fb8c <= temp_v18) << 0x1d);
                if (romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                  temp_v18 = *(float *)(temp_v5 + 0x18) - *(float *)(temp_v3 + 0x58);
                  temp_v22 = -DAT_0049fb88;
                  temp_v0 = temp_v4 | ((unsigned int)(temp_v22 < temp_v18) << 0x1f) |
                          ((unsigned int)(temp_v22 == temp_v18) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v22 != temp_v22) || (temp_v18 != temp_v18)) << 0x1c);
                  temp_v13 = (unsigned char)(temp_v0 >> 0x18);
                  temp_v12 = temp_v13 >> 7;
                  temp_v16 = (unsigned char)((temp_v13 >> 6) & 1);
                  temp_v13 = (unsigned char)(in_fpscr >> 0x1c) & 1;
                  if (temp_v16 || temp_v12 != temp_v13) {
                    in_fpscr = temp_v4 | ((unsigned int)(temp_v18 < DAT_0049fb88) << 0x1f) |
                               ((unsigned int)(temp_v18 == DAT_0049fb88) << 0x1e) |
                               ((unsigned int)((temp_v18 != temp_v18) || (DAT_0049fb88 != DAT_0049fb88)) << 0x1c);
                    temp_v13 = (unsigned char)(in_fpscr >> 0x18);
                    temp_v12 = temp_v13 >> 7;
                    temp_v16 = (unsigned char)((temp_v13 >> 6) & 1);
                    temp_v13 = (temp_v13 >> 4) & 1;
                  }
                  if (temp_v16 || temp_v12 != temp_v13) {
                    temp_v6 = *(int *)(temp_v3 + 0xd8) - 1;
                    *(int *)(temp_v3 + 0xd8) = temp_v6;
                    if (*(char *)(temp_v3 + 0xb1) != '\0') goto LAB_002095d4;
                    if (temp_v6 < 1) goto LAB_002096e8;
                  }
                }
              }
            }
          }
        }
        break;
      case 3:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if ((*(int *)(temp_v3 + 0xbc) < 0x15) || (temp_v6 = FUN_00253968(pcVar17), temp_v6 == 0)) {
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          *(unsigned int *)(temp_v3 + 100) = 0;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          temp_v6 = *(int *)(temp_v3 + 0xbc) + 1;
          *(int *)(temp_v3 + 0xbc) = temp_v6;
          *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x44);
          *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x3c);
          *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x40);
          if (temp_v6 == 1) {
            FUN_00253860(pcVar17,0);
          }
          if (*(int *)(temp_v3 + 0xbc) >= 0x3d) {
            if (*(int *)(temp_v3 + 0xac) == 0) {
              *(unsigned int *)(temp_v3 + 0xb8) = 0x11;
              *(unsigned int *)(temp_v3 + 0xbc) = 0;
              *(unsigned int *)(temp_v3 + 0xc0) = 0;
              *(unsigned int *)(temp_v3 + 0xc4) = 0;
              *(unsigned int *)(temp_v3 + 0x1a0) = 0;
              break;
            }
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(100);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 10;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v3 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 4:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        if ((*(char *)(temp_v3 + 0xb1) == '\0') || (temp_v6 = FUN_00253ba0(pcVar17), temp_v6 != 0)) {
          *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
          *(int *)(temp_v3 + 0x1a0) = *(int *)(temp_v3 + 0x1a0) + 1;
          *(int *)(temp_v3 + 0xc4) = *(int *)(temp_v3 + 0xc4) + 1;
          temp_v6 = FUN_00253968(pcVar17);
          if (temp_v6 != 0) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          temp_v23 = 0x420c0000;
          temp_v6 = 0;
          *(unsigned int *)(temp_v3 + 100) = 2;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          do {
            temp_v19 = randNextInRange(500);
            *(unsigned int *)(temp_v3 + 0xcc) = *(unsigned int *)(temp_v3 + 0x40);
            temp_v18 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v3 + 200) = temp_v18 + *(float *)(temp_v3 + 0x3c);
            temp_v19 = randNextInRange(500);
            temp_v18 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v3 + 0xd0) = temp_v18 + *(float *)(temp_v3 + 0x44);
            temp_v39 = temp_v30;
            temp_v41 = temp_v32;
            temp_v33 = *(float *)(temp_v3 + 200);
            temp_v35 = *(float *)(temp_v3 + 0xd0);
            temp_v40 = temp_v31 + (float)temp_v23;
            temp_v34 = *(float *)(temp_v3 + 0xcc) + (float)temp_v23;
            temp_v8 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
            if (temp_v8 == -1) {
              if (temp_v6 < 3) {
                temp_v33 = *(float *)(temp_v3 + 200);
                temp_v34 = *(float *)(temp_v3 + 0xcc);
                temp_v35 = *(float *)(temp_v3 + 0xd0);
                temp_v6 = 0;
                temp_v18 = 15.0f;
                temp_v22 = 1.0f;
                temp_v42 = temp_v33;
                fStack_7c = temp_v34;
                fStack_78 = temp_v35;
                do {
                  temp_v34 = temp_v34 + temp_v22;
                  while( 1 ) {
                    pfVar5 = &temp_v33;
                    FUN_0025363c(pfVar5,&temp_v42,1);
                    if ((pfVar5 != (float *)0x0) || (temp_v6 = temp_v6 + 1, temp_v6 >= 4)) {
                      *(unsigned int *)(temp_v3 + 0xbc) = 0;
                      *(unsigned int *)(temp_v3 + 0xb8) = 5;
                      *(float *)(temp_v3 + 200) = temp_v42;
                      *(float *)(temp_v3 + 0xcc) = fStack_7c;
                      *(float *)(temp_v3 + 0xd0) = fStack_78;
                      goto LAB_0020cf74;
                    }
                    if (temp_v6 == 0) break;
                    temp_v34 = temp_v34 - temp_v18;
                  }
                } while( 1 );
              }
              break;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 3);
        }
        *(unsigned int *)(temp_v3 + 0xb8) = 0;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        temp_v6 = randNextInRange(0x1e);
        *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
        break;
      case 5:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        if ((*(char *)(temp_v3 + 0xb1) != '\0') && (temp_v6 = FUN_00253ba0(pcVar17), temp_v6 == 0)) {
          *(unsigned int *)(temp_v3 + 0xb8) = 0;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          temp_v6 = randNextInRange(0x1e);
          *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
          break;
        }
        *(int *)(temp_v3 + 0x1a0) = *(int *)(temp_v3 + 0x1a0) + 1;
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        *(int *)(temp_v3 + 0xc4) = *(int *)(temp_v3 + 0xc4) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        if ((*(int *)(temp_v3 + 0xbc) >= 6) && (temp_v4 = randNextInRange(100), 4 >= temp_v4)) {
          temp_v39 = temp_v30;
          temp_v41 = temp_v32;
          temp_v33 = *(float *)(g_lmapScene + 0x1c);
          temp_v35 = *(float *)(g_lmapScene + 0x24);
          temp_v40 = temp_v31 + 35.0f;
          temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          temp_v6 = *(int *)(g_lmapScene + 0x1c);
          mathDistanceBetweenPoints();
          if (temp_v6 >= 0x44960000) goto LAB_00209c48;
        }
        else {
LAB_00209c48:
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          *(unsigned int *)(temp_v3 + 100) = 2;
          temp_v18 = *(float *)(temp_v3 + 200);
          mathDistanceBetweenPoints();
          if ((int)temp_v18 >= 0x41f00000) {
            temp_v18 = 1.0f / temp_v18;
            temp_v22 = (*(float *)(temp_v3 + 200) - temp_v30) * temp_v18;
            temp_v20 = (*(float *)(temp_v3 + 0xd0) - temp_v32) * temp_v18;
            temp_v18 = (*(float *)(temp_v3 + 0xcc) - temp_v31) * temp_v18;
            FUN_00281e34();
            temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
            FUN_002535ec();
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            temp_v30 = *(float *)(temp_v3 + 0x54) + temp_v22 * 5.0f;
            temp_v31 = *(float *)(temp_v3 + 0x58) + temp_v18 * 5.0f;
            temp_v32 = *(float *)(temp_v3 + 0x5c) + temp_v20 * 5.0f;
            if (((*(unsigned int *)(temp_v3 + 0xbc) & 3) == 0) ||
               ((int)romwright_fabs_4(*(float *)(temp_v3 + 0xcc) - temp_v31) >= 0x40a00001)) {
              temp_v31 = temp_v31 - 5.0f;
              pfVar5 = &temp_v30;
              FUN_0025363c(pfVar5,&temp_v42,0);
              if (pfVar5 != (float *)0x0) {
                *(unsigned int *)(temp_v3 + 0xb8) = 0;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                temp_v6 = randNextInRange(100);
                *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
                break;
              }
              temp_v30 = temp_v42;
              temp_v31 = fStack_7c;
              temp_v32 = fStack_78;
            }
            temp_v6 = *(int *)(temp_v3 + 0x54);
            mathDistanceBetweenPoints();
            if (temp_v6 >= 0x3f800000) {
              *(float *)(temp_v3 + 0x54) = temp_v30;
              *(float *)(temp_v3 + 0x58) = temp_v31;
              *(float *)(temp_v3 + 0x5c) = temp_v32;
              if (*(int *)(temp_v3 + 0x1a0) == 0x1e) {
                temp_v4 = randNextInRange(100);
                if (temp_v4 < 0xf) {
                  FUN_00253860(pcVar17,0);
                }
                *(unsigned int *)(temp_v3 + 0x1a0) = 0;
              }
              break;
            }
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(0x1e);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
            break;
          }
        }
        *(unsigned int *)(temp_v3 + 0xb8) = 0;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        temp_v6 = randNextInRange(100);
        *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
        break;
      case 6:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(unsigned int *)(temp_v3 + 100) = 2;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        mathDistanceBetweenPoints();
        temp_v22 = 1.0f;
        FUN_00281e34();
        temp_v18 = *(float *)(temp_v3 + 0x60);
        FUN_002535ec();
        *(float *)(temp_v3 + 0x60) = temp_v18;
        FUN_00287b0c();
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v18) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v18 = -temp_v18;
        }
        if (*(int *)(temp_v3 + 0xbc) == 1) {
          FUN_00253860(pcVar17,1);
        }
        if ((*(int *)(temp_v3 + 0xbc) >= 7) && ((int)temp_v18 < 0x42200000)) {
          *(unsigned int *)(temp_v3 + 100) = 4;
          *(unsigned int *)(temp_v3 + 0x68) = 0xffffffff;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          temp_v6 = *(int *)(temp_v3 + 0x1a8) * 0x10;
          temp_v8 = randNextInRange((*(short *)(temp_v6 + 0x448cb4) - 1) +
                                *(short *)(temp_v6 + 0x448cac) + *(short *)(temp_v6 + 0x448cb0));
          temp_v6 = *(int *)(temp_v3 + 0x1a8) * 0x10;
          temp_v10 = (int)*(short *)(temp_v6 + 0x448cac);
          if ((temp_v8 < temp_v10) || (*(char *)(temp_v3 + 0xb1) != '\0')) {
            *(unsigned int *)(temp_v3 + 0xb8) = 7;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            if (*(char *)(temp_v3 + 0x171) != '\0') {
              temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 + 0x448cae
                                                          ),(unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(temp_v3 + 0xe8) = temp_v19;
              temp_v19 = randNextInRange(3);
              temp_v18 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                                 0x448cae),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v18 + temp_v20 + temp_v22;
            }
            else {
              *(unsigned int *)(temp_v3 + 0xe8) = 0x40c00000;
              temp_v18 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                                 0x448cae),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            }
            *(float *)(temp_v3 + 0xec) = temp_v18;
            *(unsigned int *)(temp_v3 + 0xf0) = 0;
            *(unsigned int *)(temp_v3 + 0x100) = 0xb4;
          }
          else {
            if (temp_v10 + *(short *)(temp_v6 + 0x448cb0) <= temp_v8) {
              *(unsigned int *)(temp_v3 + 0xb8) = 0xf;
              *(unsigned int *)(temp_v3 + 0xbc) = 0;
              if (*(char *)(temp_v3 + 0x171) != '\0') {
                temp_v19 = randNextInRange(3);
                temp_v20 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                                   0x448cb6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = temp_v20 + temp_v18 + temp_v22;
                *(float *)(temp_v3 + 0xe8) = temp_v20;
                *(float *)(temp_v3 + 0xec) = temp_v20;
              }
              else {
                temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                            0x448cb6),(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v3 + 0xe8) = temp_v19;
                *(unsigned int *)(temp_v3 + 0xec) = temp_v19;
              }
              *(unsigned int *)(temp_v3 + 0xf0) = 0;
              *(unsigned int *)(temp_v3 + 0x100) = 0x82;
              *(unsigned short *)(temp_v3 + 0x16c) = 0;
              break;
            }
            *(unsigned int *)(temp_v3 + 0xb8) = 0xd;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            if (*(char *)(temp_v3 + 0x171) != '\0') {
              temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 + 0x448cae
                                                          ),(unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(temp_v3 + 0xe8) = temp_v19;
              temp_v19 = randNextInRange(3);
              temp_v18 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                                 0x448cb2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v18 + temp_v20 + temp_v22;
            }
            else {
              *(unsigned int *)(temp_v3 + 0xe8) = 0x40c00000;
              temp_v18 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x1a8) * 0x10 +
                                                                 0x448cb2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            }
            *(float *)(temp_v3 + 0x10c) = temp_v18;
            *(unsigned int *)(temp_v3 + 0x128) = *(unsigned int *)(temp_v3 + 0x60);
            *(unsigned int *)(temp_v3 + 0x130) = 0;
            *(unsigned int *)(temp_v3 + 0x134) = 0xf0;
          }
          *(unsigned short *)(temp_v3 + 0x16c) = 0;
        }
        break;
      case 7:
        temp_v44 = temp_v3 + 0x134;
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        if ((*(char *)(temp_v3 + 0xb1) != '\0') && (temp_v6 = FUN_00253ba0(pcVar17), temp_v6 == 0))
        goto LAB_0020a934;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v18 = *(float *)(temp_v3 + 0x5c);
        temp_v23 = CONCAT44(temp_v30,temp_v31);
        temp_v28 = (unsigned long long)(unsigned int)temp_v18 << 0x20;
        *(unsigned int *)(temp_v3 + 100) = 4;
        temp_v6 = *(int *)(temp_v3 + 0xf0) - 1;
        *(int *)(temp_v3 + 0xf0) = temp_v6;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        temp_v32 = temp_v18;
        if (temp_v6 < 1) {
          if (((*(int *)(temp_v3 + 0x100) >= 0) && (*(char *)(temp_v44 + 0x3c) == '\0')) ||
             (*(char *)(temp_v3 + 0xb1) != '\0')) {
            temp_v19 = randNextInRange(300);
            temp_v18 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v22 = *(float *)(temp_v3 + 0xec);
            temp_v18 = temp_v18 * 0.01f + 3.0f + *(float *)(temp_v3 + 0xe8);
            *(float *)(temp_v3 + 0xe8) = temp_v18;
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < temp_v22) << 0x1f) |
                    ((unsigned int)(temp_v18 == temp_v22) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v22 != temp_v22)) << 0x1c);
            temp_v13 = (unsigned char)(temp_v4 >> 0x18);
            if (!(unsigned char)((temp_v13 >> 6) & 1) && temp_v13 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v18 = temp_v22;
            }
            *(float *)(temp_v3 + 0xe8) = temp_v18;
          }
          else {
            if ((int)*(float *)(temp_v3 + 0xe8) < 0x40a00001) goto LAB_0020a934;
            *(float *)(temp_v3 + 0xe8) = *(float *)(temp_v3 + 0xe8) - 1.0f;
          }
          if (*(char *)(temp_v44 + 0x3d) == '\0') {
            temp_v6 = *(int *)(temp_v3 + 0x3c);
            mathDistanceBetweenPoints();
            if (temp_v6 >= 0x451c4001) goto LAB_0020a934;
          }
          if (*(char *)(temp_v3 + 0xb1) == '\0') {
            temp_v8 = *(int *)(g_lmapScene + 0x1c);
            mathDistanceBetweenPoints();
            temp_v17 = SBORROW4(temp_v8,0x453b8000);
            temp_v6 = temp_v8 - 0x453b8000;
            temp_v16 = temp_v8 == 0x453b8000;
            if (temp_v8 < 0x453b8001) {
              temp_v8 = *(int *)(temp_v3 + 0xd4);
              temp_v17 = SBORROW4(temp_v8,0x5a);
              temp_v6 = temp_v8 - 0x5a;
              temp_v16 = temp_v8 == 0x5a;
            }
            if (!temp_v16 && temp_v6 < 0 == temp_v17) goto LAB_0020a934;
          }
          temp_v22 = 25.0f;
          temp_v39 = temp_v30;
          temp_v41 = temp_v32;
          temp_v33 = *(float *)(g_lmapScene + 0x1c);
          temp_v35 = *(float *)(g_lmapScene + 0x24);
          temp_v40 = temp_v31 + 25.0f;
          temp_v34 = *(float *)(g_lmapScene + 0x20) + 25.0f;
          temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
          temp_v18 = (float)((unsigned long long)temp_v28 >> 0x20);
          if (temp_v6 != -1) {
            if (((*(char *)(temp_v44 + 0x3d) == '\0') && ((unsigned int)(temp_v40 - temp_v34) < 0xc1200000))
               && ((int)(temp_v40 - temp_v34) < 0x41200000)) {
              temp_v24 = CONCAT44(temp_v30,temp_v32);
              temp_v20 = *(float *)(g_lmapScene + 0x20);
              temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
              temp_v28 = CONCAT44(temp_v18,*(unsigned int *)(g_lmapScene + 0x24));
              temp_v37 = temp_v20 + temp_v22;
              temp_v38 = temp_v32;
              temp_v36 = temp_v19;
              temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v39,0);
              if ((temp_v6 != -1) || (temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v33,0), temp_v6 != -1)) {
                temp_v37 = temp_v20 + temp_v22;
                temp_v36 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                temp_v38 = (float)temp_v28;
                temp_v19 = temp_v36;
                temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v39,0);
                if ((temp_v6 != -1) || (temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v33,0), temp_v6 != -1))
                goto LAB_0020a4b4;
                *(unsigned int *)(temp_v3 + 0xb8) = 8;
                *(unsigned int *)(temp_v3 + 0xdc) = temp_v19;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                *(float *)(temp_v3 + 0xe0) = temp_v20;
                *(int *)(temp_v3 + 0xe4) = (int)temp_v28;
              }
              else {
                *(unsigned int *)(temp_v3 + 0xb8) = 8;
                *(unsigned int *)(temp_v3 + 0xdc) = temp_v19;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                *(float *)(temp_v3 + 0xe0) = temp_v20;
                *(int *)(temp_v3 + 0xe4) = (int)temp_v24;
              }
              break;
            }
LAB_0020a4b4:
            temp_v18 = (float)((unsigned long long)temp_v28 >> 0x20);
            *(int *)(temp_v3 + 0xd4) = *(int *)(temp_v3 + 0xd4) + 1;
            *(unsigned int *)(temp_v3 + 0xf0) = 0;
          }
          else {
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            temp_v6 = randNextInRange(2);
            *(int *)(temp_v3 + 0xf0) = temp_v6 + 2;
            temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
            temp_v9 = *(unsigned int *)(g_lmapScene + 0x20);
            *(unsigned int *)(temp_v3 + 0xfc) = *(unsigned int *)(g_lmapScene + 0x24);
            *(unsigned int *)(temp_v3 + 0xf4) = temp_v19;
            *(unsigned int *)(temp_v3 + 0xf8) = temp_v9;
          }
        }
        if (((*(char *)(temp_v3 + 0xb1) == '\0') &&
            (temp_v6 = *(int *)(temp_v3 + 0x100) - 1, *(int *)(temp_v3 + 0x100) = temp_v6, temp_v6 < 0)) &&
           ((int)*(float *)(temp_v3 + 0xe8) >= 0x40a00001)) {
          *(float *)(temp_v3 + 0xe8) = *(float *)(temp_v3 + 0xe8) - 1.0f;
        }
        if (*(int *)(temp_v3 + 0xd4) >= 0xf) {
          *(unsigned int *)(temp_v3 + 100) = 1;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
        }
        else {
          mathDistanceBetweenPoints();
          FUN_00281e34();
          temp_v22 = *(float *)(temp_v3 + 0x60);
          FUN_002535ec();
          temp_v20 = 0.017453292f;
          *(float *)(temp_v3 + 0x60) = temp_v22;
          temp_v22 = temp_v22 * 0.017453292f;
          FUN_0028250c();
          temp_v30 = temp_v30 + temp_v22 * *(float *)(temp_v3 + 0xe8);
          temp_v20 = *(float *)(temp_v3 + 0x60) * temp_v20;
          FUN_00282390();
          temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v3 + 0xe8);
        }
        temp_v25 = (unsigned long long)(unsigned int)temp_v18;
        temp_v18 = (float)temp_v23;
        temp_v6 = 0;
        temp_v22 = (float)((unsigned long long)temp_v23 >> 0x20);
        do {
          temp_v20 = temp_v22;
          if ((temp_v6 != temp_v2) && (temp_v8 = temp_v5 + temp_v6 * 0x180, *(char *)(temp_v8 + 0x34) != '\0')
             ) {
            mathDistanceBetweenPoints();
            if ((int)temp_v22 < 0x3f800000) {
              temp_v22 = 1.0f;
            }
            else if ((int)temp_v22 >= 0x42480000) goto LAB_0020a6f0;
            temp_v22 = 1.0f / temp_v22;
            temp_v30 = temp_v30 - (*(float *)(temp_v8 + 0x54) - temp_v20) * temp_v22 * 5.0f;
            temp_v31 = temp_v31 - (*(float *)(temp_v8 + 0x58) - temp_v18) * temp_v22 * 5.0f;
            temp_v32 = temp_v32 - (*(float *)(temp_v8 + 0x5c) - (float)temp_v25) * temp_v22 * 5.0f;
            break;
          }
LAB_0020a6f0:
          temp_v6 = temp_v6 + 1;
          temp_v22 = temp_v20;
        } while (temp_v6 < 0x20);
        temp_v31 = temp_v31 - 5.0f;
        FUN_0025363c(&temp_v30,&temp_v42,0);
        *(float *)(temp_v3 + 0x54) = temp_v42;
        *(float *)(temp_v3 + 0x58) = fStack_7c;
        *(float *)(temp_v3 + 0x5c) = fStack_78;
        temp_v1 = *(short *)(temp_v44 + 0x38) - 1;
        *(short *)(temp_v44 + 0x38) = temp_v1;
        if (temp_v1 < 1) {
          effectSpawnTypeTen();
          temp_v1 = randNextInRange(2);
          *(short *)(temp_v44 + 0x38) = temp_v1 + 9;
        }
        if (*(int *)(temp_v3 + 0xbc) >= 0x1e) break;
        vec4Forward(*(unsigned int *)(temp_v3 + 0x19c));
        break;
      case 8:
        temp_v44 = temp_v3 + 0x134;
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        if ((*(char *)(temp_v3 + 0xb1) == '\0') || (temp_v6 = FUN_00253ba0(pcVar17), temp_v6 != 0)) {
          temp_v6 = FUN_00253968(pcVar17);
          if (temp_v6 == 0) {
            temp_v30 = *(float *)(temp_v3 + 0x54);
            temp_v31 = *(float *)(temp_v3 + 0x58);
            temp_v23 = *(unsigned long long *)(temp_v3 + 0x54);
            temp_v18 = *(float *)(temp_v3 + 0x5c);
            *(unsigned int *)(temp_v3 + 100) = 4;
            temp_v6 = *(int *)(temp_v3 + 0xf0) - 1;
            *(int *)(temp_v3 + 0xf0) = temp_v6;
            *(unsigned int *)(temp_v3 + 0x6c) = 1;
            temp_v32 = temp_v18;
            if (temp_v6 < 1) {
              if (((*(int *)(temp_v3 + 0x100) >= 0) && (*(char *)(temp_v44 + 0x3c) == '\0')) ||
                 (*(char *)(temp_v3 + 0xb1) != '\0')) {
                temp_v19 = randNextInRange(300);
                temp_v22 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = *(float *)(temp_v3 + 0xec);
                temp_v22 = temp_v22 * 0.01f + 3.0f + *(float *)(temp_v3 + 0xe8);
                *(float *)(temp_v3 + 0xe8) = temp_v22;
                temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 < temp_v20) << 0x1f) |
                        ((unsigned int)(temp_v22 == temp_v20) << 0x1e);
                in_fpscr = temp_v4 | ((unsigned int)((temp_v22 != temp_v22) || (temp_v20 != temp_v20)) << 0x1c);
                temp_v13 = (unsigned char)(temp_v4 >> 0x18);
                if (!(unsigned char)((temp_v13 >> 6) & 1) && temp_v13 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v22 = temp_v20;
                }
                *(float *)(temp_v3 + 0xe8) = temp_v22;
              }
              else {
                if ((int)*(float *)(temp_v3 + 0xe8) < 0x40a00001) goto LAB_0020a934;
                *(float *)(temp_v3 + 0xe8) = *(float *)(temp_v3 + 0xe8) - 1.0f;
              }
              if (*(char *)(temp_v44 + 0x3d) == '\0') {
                temp_v6 = *(int *)(temp_v3 + 0x3c);
                mathDistanceBetweenPoints();
                if (temp_v6 >= 0x451c4001) goto LAB_0020a934;
              }
              if (*(char *)(temp_v3 + 0xb1) == '\0') {
                temp_v8 = *(int *)(g_lmapScene + 0x1c);
                mathDistanceBetweenPoints();
                temp_v17 = SBORROW4(temp_v8,0x453b8000);
                temp_v6 = temp_v8 - 0x453b8000;
                temp_v16 = temp_v8 == 0x453b8000;
                if (temp_v8 < 0x453b8001) {
                  temp_v8 = *(int *)(temp_v3 + 0xd4);
                  temp_v17 = SBORROW4(temp_v8,0x5a);
                  temp_v6 = temp_v8 - 0x5a;
                  temp_v16 = temp_v8 == 0x5a;
                }
                if (!temp_v16 && temp_v6 < 0 == temp_v17) goto LAB_0020a934;
              }
              temp_v39 = temp_v30;
              temp_v41 = temp_v32;
              temp_v33 = *(float *)(g_lmapScene + 0x1c);
              temp_v35 = *(float *)(g_lmapScene + 0x24);
              temp_v40 = temp_v31 + 25.0f;
              temp_v34 = *(float *)(g_lmapScene + 0x20) + 25.0f;
              temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
              if (temp_v6 != -1) {
                *(unsigned int *)(temp_v3 + 0xd4) = 0;
                temp_v6 = randNextInRange(2);
                *(int *)(temp_v3 + 0xf0) = temp_v6 + 2;
                *(unsigned int *)(temp_v3 + 0xf4) = *(unsigned int *)(temp_v3 + 0xdc);
                *(unsigned int *)(temp_v3 + 0xf8) = *(unsigned int *)(temp_v3 + 0xe0);
                *(unsigned int *)(temp_v3 + 0xfc) = *(unsigned int *)(temp_v3 + 0xe4);
                goto LAB_0020a9e0;
              }
            }
            else {
LAB_0020a9e0:
              temp_v22 = *(float *)(temp_v3 + 0xdc);
              mathDistanceBetweenPoints();
              temp_v20 = *(float *)(temp_v3 + 0xe8);
              temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v22) << 0x1f) |
                      ((unsigned int)(temp_v20 == temp_v22) << 0x1e);
              in_fpscr = temp_v4 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v22 != temp_v22)) << 0x1c);
              temp_v13 = (unsigned char)(temp_v4 >> 0x18);
              if ((unsigned char)((temp_v13 >> 6) & 1) || temp_v13 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                if (((*(char *)(temp_v3 + 0xb1) == '\0') &&
                    (temp_v6 = *(int *)(temp_v3 + 0x100) - 1, *(int *)(temp_v3 + 0x100) = temp_v6, temp_v6 < 0
                    )) && ((int)temp_v20 >= 0x40a00001)) {
                  *(float *)(temp_v3 + 0xe8) = temp_v20 - 1.0f;
                }
                if (*(int *)(temp_v3 + 0xd4) >= 0xf) {
                  *(unsigned int *)(temp_v3 + 100) = 1;
                  *(unsigned int *)(temp_v3 + 0x6c) = 1;
                }
                else {
                  mathDistanceBetweenPoints();
                  FUN_00281e34();
                  temp_v22 = *(float *)(temp_v3 + 0x60);
                  FUN_002535ec();
                  temp_v20 = 0.017453292f;
                  *(float *)(temp_v3 + 0x60) = temp_v22;
                  temp_v22 = temp_v22 * 0.017453292f;
                  FUN_0028250c();
                  temp_v30 = temp_v30 + temp_v22 * *(float *)(temp_v3 + 0xe8);
                  temp_v20 = *(float *)(temp_v3 + 0x60) * temp_v20;
                  FUN_00282390();
                  temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v3 + 0xe8);
                }
                temp_v6 = 0;
                do {
                  if ((temp_v6 != temp_v2) &&
                     (temp_v8 = temp_v5 + temp_v6 * 0x180, *(char *)(temp_v8 + 0x34) != '\0')) {
                    temp_v22 = (float)temp_v23;
                    mathDistanceBetweenPoints();
                    if ((int)temp_v22 < 0x3f800000) {
                      temp_v22 = 1.0f;
                    }
                    else if ((int)temp_v22 >= 0x42480000) goto LAB_0020abfc;
                    temp_v22 = 1.0f / temp_v22;
                    temp_v30 = temp_v30 - (*(float *)(temp_v8 + 0x54) - (float)temp_v23) * temp_v22 * 5.0f
                    ;
                    temp_v31 = temp_v31 -
                               (*(float *)(temp_v8 + 0x58) - (float)((unsigned long long)temp_v23 >> 0x20)) *
                               temp_v22 * 5.0f;
                    temp_v32 = temp_v32 - (*(float *)(temp_v8 + 0x5c) - temp_v18) * temp_v22 * 5.0f;
                    break;
                  }
LAB_0020abfc:
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < 0x20);
                temp_v31 = temp_v31 - 5.0f;
                FUN_0025363c(&temp_v30,&temp_v42,0);
                *(float *)(temp_v3 + 0x54) = temp_v42;
                *(float *)(temp_v3 + 0x58) = fStack_7c;
                *(float *)(temp_v3 + 0x5c) = fStack_78;
                temp_v1 = *(short *)(temp_v44 + 0x38) - 1;
                *(short *)(temp_v44 + 0x38) = temp_v1;
                if (temp_v1 < 1) {
                  effectSpawnTypeTen();
                  temp_v1 = randNextInRange(2);
                  *(short *)(temp_v44 + 0x38) = temp_v1 + 9;
                }
                temp_v6 = *(int *)(temp_v3 + 0xbc);
                if (temp_v6 < 0x1e) {
                  vec4Forward(*(unsigned int *)(temp_v3 + 0x19c));
                }
                break;
              }
            }
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            temp_v19 = 7;
            *(unsigned int *)(temp_v3 + 0xf0) = 0;
          }
          else {
            temp_v19 = 0x10;
            *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
          }
        }
        else {
          temp_v19 = 9;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
        }
        *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        break;
      case 9:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(unsigned int *)(temp_v3 + 100) = 1;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        if (*(char *)(temp_v3 + 0xb1) != '\0') {
          *(unsigned int *)(temp_v3 + 0xb8) = 10;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        else if (*(int *)(temp_v3 + 0xbc) >= 0x1f) {
          if (*(char *)(temp_v3 + 0xb0) == '\0') {
            *(unsigned int *)(temp_v3 + 0xb8) = 10;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
          *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 10:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v7 = '\x06';
        if (*(char *)(temp_v3 + 0xb1) != '\0') {
          *(unsigned int *)(temp_v3 + 0x6c) = 2;
          *(unsigned int *)(temp_v3 + 100) = 6;
          if (*(int *)(temp_v3 + 0xbc) >= 0x10) {
            puVar10 = *(unsigned int **)(temp_v3 + 0x1ac);
            if (puVar10 != (unsigned int *)0x0) {
              temp_v7 = *(char *)(temp_v3 + 0x1b0);
            }
            if (puVar10 != (unsigned int *)0x0 && temp_v7 != '\0') {
              if (*(char *)(temp_v3 + 0x1b1) != '\0') {
                asdMdlManagerMarkDestroy(puVar10);
                *(unsigned char *)(temp_v3 + 0x1b0) = 0;
                *(unsigned int *)(temp_v3 + 0xb8) = 0xc;
                *(unsigned int *)(temp_v3 + 0xbc) = 0;
                break;
              }
              temp_v6 = g_mapEnemy;
              *puVar10 = *puVar10 | 2;
              *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
              *(unsigned char *)(temp_v3 + 0x1b0) = 0;
              *(unsigned char *)(temp_v6 + *(int *)(temp_v3 + 0x1a8) * 8 + 0x3051) = 0;
            }
            *(unsigned int *)(temp_v3 + 0xb8) = 0xc;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          *(unsigned int *)(temp_v3 + 100) = 6;
          if (*(int *)(temp_v3 + 0xbc) >= 0x1f) {
            puVar10 = *(unsigned int **)(temp_v3 + 0x1ac);
            if (puVar10 != (unsigned int *)0x0) {
              temp_v7 = *(char *)(temp_v3 + 0x1b0);
            }
            if (puVar10 != (unsigned int *)0x0 && temp_v7 != '\0') {
              temp_v7 = *(char *)(temp_v3 + 0x1b1);
              goto joined_r0x0020ae6c;
            }
            *(unsigned int *)(temp_v3 + 0xb8) = 0xc;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
          }
        }
        break;
      case 0xb:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        temp_v7 = '\x06';
        temp_v6 = *(int *)(temp_v3 + 0xbc) + 1;
        *(int *)(temp_v3 + 0xbc) = temp_v6;
        *(unsigned int *)(temp_v3 + 0x6c) = 2;
        *(unsigned int *)(temp_v3 + 100) = 6;
        if (temp_v6 >= 0x10) {
          puVar10 = *(unsigned int **)(temp_v3 + 0x1ac);
          if (puVar10 != (unsigned int *)0x0) {
            temp_v7 = *(char *)(temp_v3 + 0x1b0);
          }
          if (puVar10 != (unsigned int *)0x0 && temp_v7 != '\0') {
            temp_v7 = *(char *)(temp_v3 + 0x1b1);
joined_r0x0020ae6c:
            if (temp_v7 != '\0') {
              asdMdlManagerMarkDestroy(puVar10);
              *(unsigned char *)(temp_v3 + 0x1b0) = 0;
            }
            else {
              temp_v6 = g_mapEnemy;
              *puVar10 = *puVar10 | 2;
              *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
              *(unsigned char *)(temp_v3 + 0x1b0) = 0;
              *(unsigned char *)(temp_v6 + *(int *)(temp_v3 + 0x1a8) * 8 + 0x3051) = 0;
            }
          }
          *(unsigned int *)(temp_v3 + 0xb8) = 0xc;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 0xc:
        temp_v8 = *(int *)(temp_v3 + 0xbc) + 1;
        *(int *)(temp_v3 + 0xbc) = temp_v8;
        temp_v6 = g_mapEnemy;
        if (temp_v8 >= 3) {
          if (*(int *)(temp_v3 + 0x1ac) != 0) {
            if (*(char *)(temp_v3 + 0x1b1) != '\0') {
              asdMdlManagerDestroy();
            }
            *(unsigned int *)(temp_v3 + 0x1ac) = 0;
            *pcVar17 = '\0';
            *(unsigned int *)(temp_v3 + 100) = 0;
            *(unsigned int *)(temp_v3 + 0x68) = 0xffffffff;
            *(unsigned int *)(temp_v3 + 0x6c) = 1;
            *(unsigned char *)(temp_v3 + 0x170) = 0;
            *(unsigned char *)(temp_v3 + 0x171) = 0;
            *(int *)(temp_v6 + 0x3038) = *(int *)(temp_v6 + 0x3038) - 1;
          }
          temp_v7 = '\0';
          *(unsigned int *)(temp_v3 + 0xb8) = 0;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          *(unsigned char *)(temp_v3 + 0x170) = 0;
          temp_v16 = *(char *)(temp_v3 + 0x84) == '\0';
          *(unsigned char *)(temp_v3 + 0x171) = 0;
          if (temp_v16) {
            temp_v7 = *(char *)(temp_v3 + 0xb1);
          }
          *pcVar17 = '\x01';
          temp_v6 = g_mapEnemy;
          if (!(temp_v16 && temp_v7 == '\0')) {
            *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v3 + 0x48);
            *(unsigned int *)(temp_v3 + 0x40) = *(unsigned int *)(temp_v3 + 0x4c);
            *(unsigned int *)(temp_v3 + 0x44) = *(unsigned int *)(temp_v3 + 0x50);
            *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x48);
            *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x4c);
            *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x50);
            temp_v19 = randNextInRange(0x168);
            temp_v19 = VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v3 + 100) = 1;
            *(unsigned int *)(temp_v3 + 0x6c) = 1;
            *(unsigned int *)(temp_v3 + 0x70) = 0;
            *(unsigned char *)(temp_v3 + 0x178) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 2;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(100);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            temp_v6 = randNextInRange(0x78);
            *(int *)(temp_v3 + 0xd8) = temp_v6 + 0x1e;
            *(unsigned char *)(temp_v3 + 0x170) = 0;
            *(unsigned char *)(temp_v3 + 0x171) = 0;
            temp_v6 = *(int *)(g_lmapScene + 0x1c);
            mathDistanceBetweenPoints();
            if (temp_v6 < 0x43fa0000) {
              *(int *)(temp_v3 + 0xd8) = *(int *)(temp_v3 + 0xd8) + 300;
            }
            else {
              if (temp_v6 < 0x44480000) {
                temp_v6 = *(int *)(temp_v3 + 0xd8) + 0xd2;
              }
              else {
                temp_v8 = 0x447a0000;
                if (temp_v6 >= 0x447a0000) {
                  temp_v8 = 0x44960000;
                }
                if (temp_v8 <= temp_v6) {
                  temp_v6 = 0xf0;
                  *(int *)(temp_v3 + 0xd8) = temp_v6;
                  break;
                }
                temp_v6 = *(int *)(temp_v3 + 0xd8) + 0x96;
              }
              *(int *)(temp_v3 + 0xd8) = temp_v6;
            }
            temp_v6 = 0xf0;
          }
          else {
            temp_v8 = gameGetMapBlock();
            if (DAT_0049f942 != '\0') {
              temp_v29 = (int)*(char *)(temp_v8 + 0x3a);
              temp_v6 = (int)*(char *)(temp_v8 + 0x3b);
            }
            else {
              temp_v29 = *(int *)(temp_v6 + 0xc);
              temp_v6 = *(int *)(temp_v6 + 0x10);
            }
            do {
              temp_v8 = temp_v29;
              FUN_002533f4(temp_v29,temp_v6,0);
              *(int *)(temp_v3 + 0xa4) = temp_v8;
              temp_v8 = FUN_0025c05c();
              *(int *)(temp_v3 + 0xa8) = temp_v8;
              dataTable00FindById();
              *(unsigned int *)(temp_v3 + 0x1a4) = (unsigned int)*(unsigned char *)(temp_v8 + 2);
              if ((*(int *)(temp_v3 + 0xa8) < 0x3e9) && (temp_v8 = gameFlagIsSet(0x52a), temp_v8 != 0)) {
                temp_v4 = (unsigned int)*(unsigned char *)(*(int *)(temp_v3 + 0xa8) + 0x447620);
                *(unsigned int *)(temp_v3 + 0x1a8) = temp_v4;
              }
              else {
                temp_v4 = 1;
                *(unsigned int *)(temp_v3 + 0x1a8) = 1;
              }
              temp_v8 = FUN_00256550(temp_v4);
            } while (temp_v8 == 0);
            *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v3 + 0x48);
            *(unsigned int *)(temp_v3 + 0x40) = *(unsigned int *)(temp_v3 + 0x4c);
            *(unsigned int *)(temp_v3 + 0x44) = *(unsigned int *)(temp_v3 + 0x50);
            *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x48);
            *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x4c);
            *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x50);
            temp_v19 = randNextInRange(0x168);
            temp_v19 = VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v3 + 100) = 1;
            *(unsigned int *)(temp_v3 + 0x6c) = 1;
            *(unsigned int *)(temp_v3 + 0x70) = 0;
            *(unsigned char *)(temp_v3 + 0x178) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 2;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(100);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            temp_v6 = randNextInRange(0x78);
            *(int *)(temp_v3 + 0xd8) = temp_v6 + 0x1e;
            *(unsigned char *)(temp_v3 + 0x170) = 0;
            *(unsigned char *)(temp_v3 + 0x171) = 0;
            temp_v6 = *(int *)(g_lmapScene + 0x1c);
            mathDistanceBetweenPoints();
            if (temp_v6 < 0x43fa0000) {
              temp_v6 = *(int *)(temp_v3 + 0xd8) + 300;
            }
            else if (temp_v6 < 0x44480000) {
              temp_v6 = *(int *)(temp_v3 + 0xd8) + 0xd2;
            }
            else {
              temp_v8 = 0x447a0000;
              if (temp_v6 >= 0x447a0000) {
                temp_v8 = 0x44960000;
              }
              if (temp_v8 <= temp_v6) break;
              temp_v6 = *(int *)(temp_v3 + 0xd8) + 0x96;
            }
          }
          *(int *)(temp_v3 + 0xd8) = temp_v6;
        }
        break;
      case 0xd:
        temp_v44 = temp_v3 + 0x134;
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v23 = *(unsigned long long *)(temp_v3 + 0x54);
        temp_v18 = *(float *)(temp_v3 + 0x5c);
        *(unsigned int *)(temp_v3 + 100) = 4;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        temp_v32 = temp_v18;
        if (*(char *)(temp_v44 + 0x3d) == '\0') {
          temp_v6 = *(int *)(temp_v3 + 0x3c);
          mathDistanceBetweenPoints();
          if (temp_v6 >= 0x44e10001) goto LAB_0020a934;
        }
        temp_v6 = *(int *)(temp_v3 + 0x130) - 1;
        *(int *)(temp_v3 + 0x130) = temp_v6;
        if (temp_v6 < 1) {
          if ((*(int *)(temp_v3 + 0x100) < 0) || (*(char *)(temp_v44 + 0x3c) != '\0')) {
            if ((int)*(float *)(temp_v3 + 0x108) < 0x40a00001) goto LAB_0020a934;
            *(float *)(temp_v3 + 0x108) = *(float *)(temp_v3 + 0x108) - 1.0f;
          }
          else {
            temp_v19 = randNextInRange(300);
            temp_v22 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = *(float *)(temp_v3 + 0x10c);
            temp_v22 = temp_v22 * 0.01f + 3.0f + *(float *)(temp_v3 + 0x108);
            *(float *)(temp_v3 + 0x108) = temp_v22;
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 < temp_v20) << 0x1f) |
                    ((unsigned int)(temp_v22 == temp_v20) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v22 != temp_v22) || (temp_v20 != temp_v20)) << 0x1c);
            temp_v13 = (unsigned char)(temp_v4 >> 0x18);
            if (!(unsigned char)((temp_v13 >> 6) & 1) && temp_v13 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v22 = temp_v20;
            }
            *(float *)(temp_v3 + 0x108) = temp_v22;
          }
          temp_v19 = *(unsigned int *)(temp_v5 + 0x14);
          FUN_00287a78();
          *(unsigned int *)(temp_v3 + 300) = temp_v19;
          temp_v22 = *(float *)(temp_v5 + 0x20) - *(float *)(temp_v3 + 0x108);
          *(float *)(temp_v3 + 0x110) = temp_v22;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v22) << 0x1d);
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v22 = -temp_v22;
            *(float *)(temp_v3 + 0x110) = temp_v22;
          }
          if ((int)temp_v22 < 0x3f800001) {
            temp_v22 = 1.0f;
          }
          *(float *)(temp_v3 + 0x110) = temp_v22;
          temp_v22 = *(float *)(temp_v5 + 0x14);
          mathDistanceBetweenPoints();
          *(float *)(temp_v3 + 0x114) = temp_v22;
          temp_v22 = temp_v22 / *(float *)(temp_v3 + 0x110);
          temp_v20 = 25.0f;
          *(float *)(temp_v3 + 0x118) = temp_v22;
          if ((int)temp_v22 >= 0x42200001) {
            temp_v22 = 40.0f;
          }
          *(float *)(temp_v3 + 0x118) = temp_v22;
          temp_v11 = *(float *)(temp_v5 + 0x2c);
          temp_v27 = *(float *)(temp_v5 + 0x30);
          temp_v26 = *(float *)(temp_v5 + 0x18);
          temp_v21 = *(float *)(temp_v5 + 0x1c);
          *(float *)(temp_v3 + 0x11c) = *(float *)(temp_v5 + 0x14) + *(float *)(temp_v5 + 0x28) * temp_v22;
          *(float *)(temp_v3 + 0x120) = temp_v26 + temp_v11 * temp_v22;
          *(float *)(temp_v3 + 0x124) = temp_v21 + temp_v27 * temp_v22;
          temp_v39 = *(float *)(temp_v5 + 0x14);
          temp_v41 = *(float *)(temp_v5 + 0x1c);
          temp_v33 = *(float *)(temp_v3 + 0x11c);
          temp_v35 = *(float *)(temp_v3 + 0x124);
          temp_v40 = *(float *)(temp_v5 + 0x18) + 25.0f;
          temp_v34 = *(float *)(temp_v3 + 0x120) + 25.0f;
          temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,&temp_v43);
          if (temp_v6 != -1) {
            *(unsigned int *)(temp_v3 + 0x11c) = temp_v43;
            *(unsigned int *)(temp_v3 + 0x120) = uStack_70;
            *(unsigned int *)(temp_v3 + 0x124) = uStack_6c;
          }
          if (*(int *)(temp_v3 + 0x114) < 0x44960001) {
            if (*(int *)(temp_v3 + 0x114) < 0x43fa0000) {
              if (*(int *)(temp_v3 + 300) < 0x42a00000) goto LAB_0020b4ec;
            }
            else if (*(int *)(temp_v3 + 0x108) >= 0x41700001) {
              temp_v22 = *(float *)(temp_v3 + 0x11c);
              mathDistanceBetweenPoints();
              in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)(*(float *)(temp_v3 + 0x114) <= temp_v22) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) goto LAB_0020b4ec;
            }
          }
          else {
LAB_0020b4ec:
            temp_v19 = *(unsigned int *)(temp_v5 + 0x18);
            temp_v9 = *(unsigned int *)(temp_v5 + 0x1c);
            *(unsigned int *)(temp_v3 + 0x11c) = *(unsigned int *)(temp_v5 + 0x14);
            *(unsigned int *)(temp_v3 + 0x120) = temp_v19;
            *(unsigned int *)(temp_v3 + 0x124) = temp_v9;
          }
          temp_v8 = *(int *)(temp_v3 + 0x114);
          temp_v17 = SBORROW4(temp_v8,0x453b8000);
          temp_v6 = temp_v8 - 0x453b8000;
          temp_v16 = temp_v8 == 0x453b8000;
          if (temp_v8 < 0x453b8001) {
            temp_v8 = *(int *)(temp_v3 + 0xd4);
            temp_v17 = SBORROW4(temp_v8,0x5a);
            temp_v6 = temp_v8 - 0x5a;
            temp_v16 = temp_v8 == 0x5a;
          }
          if (!temp_v16 && temp_v6 < 0 == temp_v17) goto LAB_0020a934;
          temp_v39 = temp_v30;
          temp_v41 = temp_v32;
          temp_v33 = *(float *)(temp_v3 + 0x11c);
          temp_v35 = *(float *)(temp_v3 + 0x124);
          temp_v40 = temp_v31 + temp_v20;
          temp_v34 = *(float *)(temp_v3 + 0x120) + temp_v20;
          temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
          if (temp_v6 != -1) {
            *(int *)(temp_v3 + 0xd4) = *(int *)(temp_v3 + 0xd4) + 1;
            *(unsigned int *)(temp_v3 + 0x130) = 0;
            temp_v22 = temp_v30;
            mathPositionHeadingDegrees();
            temp_v22 = temp_v22 * 0.017453292f;
            temp_v39 = temp_v30;
            temp_v40 = temp_v31;
            temp_v41 = temp_v32;
            temp_v33 = temp_v30;
            temp_v34 = temp_v31;
            temp_v35 = temp_v32;
            temp_v11 = temp_v22;
            FUN_0028250c();
            temp_v27 = 100.0f;
            temp_v33 = temp_v33 + temp_v22 * 100.0f;
            FUN_00282390();
            temp_v35 = temp_v35 + temp_v11 * temp_v27;
            temp_v40 = temp_v40 + temp_v20;
            temp_v34 = temp_v34 + temp_v20;
            temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
            if (temp_v6 != -1) {
              if (*(char *)(temp_v44 + 0x3d) == '\0') {
                temp_v39 = temp_v30;
                temp_v41 = temp_v32;
                temp_v33 = *(float *)(temp_v5 + 0x14);
                temp_v35 = *(float *)(temp_v5 + 0x1c);
                temp_v40 = temp_v31 + temp_v20;
                temp_v34 = *(float *)(temp_v5 + 0x18) + temp_v20;
                if (((unsigned int)(temp_v40 - temp_v34) < 0xc1200000) &&
                   ((int)(temp_v40 - temp_v34) < 0x41200000)) {
                  temp_v23 = CONCAT44(temp_v30,temp_v32);
                  temp_v18 = *(float *)(g_lmapScene + 0x20);
                  temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
                  temp_v24 = CONCAT44(temp_v20,*(unsigned int *)(g_lmapScene + 0x24));
                  temp_v37 = temp_v18 + temp_v20;
                  temp_v38 = temp_v32;
                  temp_v36 = temp_v19;
                  temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v39,0);
                  if ((temp_v6 != -1) || (temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v33,0), temp_v6 != -1)) {
                    temp_v37 = temp_v18 + (float)((unsigned long long)temp_v24 >> 0x20);
                    temp_v36 = (unsigned int)((unsigned long long)temp_v23 >> 0x20);
                    temp_v38 = (float)temp_v24;
                    temp_v19 = temp_v36;
                    temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v39,0);
                    temp_v9 = (unsigned int)temp_v24;
                    if ((temp_v6 != -1) || (temp_v6 = FUN_0025b4b0(&temp_v36,&temp_v33,0), temp_v6 != -1))
                    {
                      *(unsigned int *)(temp_v3 + 100) = 1;
                      *(unsigned int *)(temp_v3 + 0x6c) = 1;
                      break;
                    }
                    *(unsigned int *)(temp_v3 + 0xb8) = 0xe;
                    *(unsigned int *)(temp_v3 + 0xdc) = temp_v19;
                    *(unsigned int *)(temp_v3 + 0xbc) = 0;
                    *(float *)(temp_v3 + 0xe0) = temp_v18;
                    *(unsigned int *)(temp_v3 + 0xe4) = temp_v9;
                  }
                  else {
                    *(unsigned int *)(temp_v3 + 0xb8) = 0xe;
                    *(unsigned int *)(temp_v3 + 0xdc) = temp_v19;
                    *(unsigned int *)(temp_v3 + 0xbc) = 0;
                    *(float *)(temp_v3 + 0xe0) = temp_v18;
                    *(int *)(temp_v3 + 0xe4) = (int)temp_v23;
                  }
                  break;
                }
              }
              *(unsigned int *)(temp_v3 + 100) = 1;
              *(unsigned int *)(temp_v3 + 0x6c) = 1;
              break;
            }
            *(float *)(temp_v3 + 0x11c) = temp_v33;
            *(float *)(temp_v3 + 0x120) = temp_v34;
            *(float *)(temp_v3 + 0x124) = temp_v35;
            *(float *)(temp_v3 + 0x120) = temp_v31;
          }
          else {
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            temp_v6 = randNextInRange(2);
            *(int *)(temp_v3 + 0x130) = temp_v6 + 2;
          }
        }
        temp_v6 = *(int *)(temp_v3 + 0x134) - 1;
        *(int *)(temp_v3 + 0x134) = temp_v6;
        if ((temp_v6 < 0) && ((int)*(float *)(temp_v3 + 0x108) >= 0x40a00001)) {
          *(float *)(temp_v3 + 0x108) = *(float *)(temp_v3 + 0x108) - 1.0f;
        }
        temp_v6 = *(int *)(temp_v3 + 0x11c);
        mathDistanceBetweenPoints();
        if (temp_v6 >= 0x3f800001) {
          FUN_00281e34();
          temp_v19 = *(unsigned int *)(temp_v3 + 0x128);
          FUN_002535ec();
          *(unsigned int *)(temp_v3 + 0x128) = temp_v19;
        }
        temp_v8 = *(int *)(temp_v3 + 0x114);
        temp_v17 = SBORROW4(0x43c80000,temp_v8);
        temp_v6 = 0x43c80000 - temp_v8;
        temp_v16 = temp_v8 == 0x43c80000;
        if (temp_v8 >= 0x43c80000) {
          temp_v8 = *(int *)(temp_v3 + 0xd4);
          temp_v17 = SBORROW4(temp_v8,0xf);
          temp_v6 = temp_v8 - 0xf;
          temp_v16 = temp_v8 == 0xf;
        }
        if (!(temp_v16 || temp_v6 < 0 != temp_v17)) {
          mathDistanceBetweenPoints();
          FUN_00281e34();
          temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
          FUN_002535ec();
          *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
        }
        else {
          temp_v6 = *(int *)(temp_v3 + 0x60);
          FUN_002535ec();
          *(int *)(temp_v3 + 0x60) = temp_v6;
          FUN_0027eee0();
          if ((temp_v6 >= 0x41200001) && ((int)*(float *)(temp_v3 + 0x108) >= 0x40a00001)) {
            *(float *)(temp_v3 + 0x108) = *(float *)(temp_v3 + 0x108) - 1.0f;
          }
        }
        temp_v20 = 0.017453292f;
        temp_v22 = *(float *)(temp_v3 + 0x128) * 0.017453292f;
        FUN_0028250c();
        temp_v30 = temp_v30 + temp_v22 * *(float *)(temp_v3 + 0x108);
        temp_v20 = *(float *)(temp_v3 + 0x128) * temp_v20;
        FUN_00282390();
        temp_v6 = 0;
        temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v3 + 0x108);
        do {
          if ((temp_v6 != temp_v2) && (temp_v8 = temp_v5 + temp_v6 * 0x180, *(char *)(temp_v8 + 0x34) != '\0')
             ) {
            temp_v22 = (float)temp_v23;
            mathDistanceBetweenPoints();
            if ((int)temp_v22 < 0x3f800000) {
              temp_v22 = 1.0f;
            }
            else if ((int)temp_v22 >= 0x42480000) goto LAB_0020ba2c;
            temp_v22 = 1.0f / temp_v22;
            temp_v30 = temp_v30 - (*(float *)(temp_v8 + 0x54) - (float)temp_v23) * temp_v22 * 5.0f;
            temp_v31 = temp_v31 -
                       (*(float *)(temp_v8 + 0x58) - (float)((unsigned long long)temp_v23 >> 0x20)) * temp_v22 *
                       5.0f;
            temp_v32 = temp_v32 - (*(float *)(temp_v8 + 0x5c) - temp_v18) * temp_v22 * 5.0f;
            break;
          }
LAB_0020ba2c:
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x20);
        temp_v31 = temp_v31 - 5.0f;
        FUN_0025363c(&temp_v30,&temp_v42,0);
        *(float *)(temp_v3 + 0x54) = temp_v42;
        *(float *)(temp_v3 + 0x58) = fStack_7c;
        *(float *)(temp_v3 + 0x5c) = fStack_78;
        temp_v1 = *(short *)(temp_v44 + 0x38) - 1;
        *(short *)(temp_v44 + 0x38) = temp_v1;
        if (temp_v1 < 1) {
          effectSpawnTypeTen();
          temp_v1 = randNextInRange(2);
          *(short *)(temp_v44 + 0x38) = temp_v1 + 9;
        }
        temp_v6 = *(int *)(temp_v3 + 0xbc);
        if (temp_v6 < 0x1e) {
          vec4Forward(*(unsigned int *)(temp_v3 + 0x19c));
        }
        break;
      case 0xe:
        temp_v45 = temp_v3 + 0x134;
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
        }
        else {
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v23 = *(unsigned long long *)(temp_v3 + 0x54);
          temp_v18 = *(float *)(temp_v3 + 0x5c);
          *(unsigned int *)(temp_v3 + 100) = 4;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          temp_v32 = temp_v18;
          if (*(char *)(temp_v45 + 0x3d) == '\0') {
            temp_v6 = *(int *)(temp_v3 + 0x3c);
            mathDistanceBetweenPoints();
            if (temp_v6 >= 0x44e10001) goto LAB_0020a934;
          }
          temp_v6 = *(int *)(temp_v3 + 0x130) - 1;
          *(int *)(temp_v3 + 0x130) = temp_v6;
          if (temp_v6 < 1) {
            if ((*(int *)(temp_v3 + 0x100) < 0) || (*(char *)(temp_v45 + 0x3c) != '\0')) {
              if ((int)*(float *)(temp_v3 + 0x108) < 0x40a00001) goto LAB_0020a934;
              *(float *)(temp_v3 + 0x108) = *(float *)(temp_v3 + 0x108) - 1.0f;
            }
            else {
              temp_v19 = randNextInRange(300);
              temp_v22 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = *(float *)(temp_v3 + 0x10c);
              temp_v22 = temp_v22 * 0.01f + 3.0f + *(float *)(temp_v3 + 0x108);
              *(float *)(temp_v3 + 0x108) = temp_v22;
              temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 < temp_v20) << 0x1f) |
                      ((unsigned int)(temp_v22 == temp_v20) << 0x1e);
              in_fpscr = temp_v4 | ((unsigned int)((temp_v22 != temp_v22) || (temp_v20 != temp_v20)) << 0x1c);
              temp_v13 = (unsigned char)(temp_v4 >> 0x18);
              if (!(unsigned char)((temp_v13 >> 6) & 1) && temp_v13 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v22 = temp_v20;
              }
              *(float *)(temp_v3 + 0x108) = temp_v22;
            }
            temp_v19 = *(unsigned int *)(temp_v5 + 0x14);
            FUN_00287a78();
            *(unsigned int *)(temp_v3 + 300) = temp_v19;
            temp_v22 = *(float *)(temp_v5 + 0x20) - *(float *)(temp_v3 + 0x108);
            *(float *)(temp_v3 + 0x110) = temp_v22;
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v22) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v22 = -temp_v22;
              *(float *)(temp_v3 + 0x110) = temp_v22;
            }
            if ((int)temp_v22 < 0x3f800001) {
              temp_v22 = 1.0f;
            }
            *(float *)(temp_v3 + 0x110) = temp_v22;
            temp_v22 = *(float *)(temp_v5 + 0x14);
            mathDistanceBetweenPoints();
            *(float *)(temp_v3 + 0x114) = temp_v22;
            temp_v20 = temp_v22 / *(float *)(temp_v3 + 0x110);
            *(float *)(temp_v3 + 0x118) = temp_v20;
            if ((int)temp_v20 >= 0x42200001) {
              temp_v20 = 40.0f;
            }
            temp_v17 = SBORROW4((int)temp_v22,0x453b8000);
            temp_v6 = (int)temp_v22 - 0x453b8000;
            temp_v16 = temp_v22 == 3000.0f;
            *(float *)(temp_v3 + 0x118) = temp_v20;
            *(unsigned int *)(temp_v3 + 0x11c) = *(unsigned int *)(temp_v3 + 0xdc);
            *(unsigned int *)(temp_v3 + 0x120) = *(unsigned int *)(temp_v3 + 0xe0);
            *(unsigned int *)(temp_v3 + 0x124) = *(unsigned int *)(temp_v3 + 0xe4);
            if ((int)temp_v22 < 0x453b8001) {
              temp_v8 = *(int *)(temp_v3 + 0xd4);
              temp_v17 = SBORROW4(temp_v8,0x5a);
              temp_v6 = temp_v8 - 0x5a;
              temp_v16 = temp_v8 == 0x5a;
            }
            if (!temp_v16 && temp_v6 < 0 == temp_v17) goto LAB_0020a934;
            temp_v39 = temp_v30;
            temp_v41 = temp_v32;
            temp_v33 = *(float *)(temp_v5 + 0x14);
            temp_v35 = *(float *)(temp_v5 + 0x1c);
            temp_v40 = temp_v31 + 25.0f;
            temp_v34 = *(float *)(temp_v5 + 0x18) + 25.0f;
            temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
            if (temp_v6 != -1) {
              *(unsigned int *)(temp_v3 + 0xd4) = 0;
              temp_v6 = randNextInRange(2);
              *(int *)(temp_v3 + 0xf0) = temp_v6 + 2;
              goto LAB_0020bd68;
            }
          }
          else {
LAB_0020bd68:
            temp_v22 = *(float *)(temp_v3 + 0xdc);
            mathDistanceBetweenPoints();
            temp_v20 = *(float *)(temp_v3 + 0x108);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v22) << 0x1f) |
                    ((unsigned int)(temp_v20 == temp_v22) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v22 != temp_v22)) << 0x1c);
            temp_v13 = (unsigned char)(temp_v4 >> 0x18);
            if ((unsigned char)((temp_v13 >> 6) & 1) || temp_v13 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v6 = *(int *)(temp_v3 + 0x134) - 1;
              *(int *)(temp_v3 + 0x134) = temp_v6;
              if ((temp_v6 < 0) && ((int)temp_v20 >= 0x40a00001)) {
                *(float *)(temp_v3 + 0x108) = temp_v20 - 1.0f;
              }
              temp_v6 = *(int *)(temp_v3 + 0x11c);
              mathDistanceBetweenPoints();
              if (temp_v6 >= 0x3f800001) {
                FUN_00281e34();
                temp_v19 = *(unsigned int *)(temp_v3 + 0x128);
                FUN_002535ec();
                *(unsigned int *)(temp_v3 + 0x128) = temp_v19;
              }
              temp_v8 = *(int *)(temp_v3 + 0x114);
              temp_v17 = SBORROW4(0x43c80000,temp_v8);
              temp_v6 = 0x43c80000 - temp_v8;
              temp_v16 = temp_v8 == 0x43c80000;
              if (temp_v8 >= 0x43c80000) {
                temp_v8 = *(int *)(temp_v3 + 0xd4);
                temp_v17 = SBORROW4(temp_v8,0xf);
                temp_v6 = temp_v8 - 0xf;
                temp_v16 = temp_v8 == 0xf;
              }
              if (!(temp_v16 || temp_v6 < 0 != temp_v17)) {
                mathDistanceBetweenPoints();
                FUN_00281e34();
                temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
                FUN_002535ec();
                *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
              }
              else {
                temp_v6 = *(int *)(temp_v3 + 0x60);
                FUN_002535ec();
                *(int *)(temp_v3 + 0x60) = temp_v6;
                FUN_0027eee0();
                if ((temp_v6 >= 0x41200001) && ((int)*(float *)(temp_v3 + 0x108) >= 0x40a00001)) {
                  *(float *)(temp_v3 + 0x108) = *(float *)(temp_v3 + 0x108) - 1.0f;
                }
              }
              temp_v20 = 0.017453292f;
              temp_v22 = *(float *)(temp_v3 + 0x128) * 0.017453292f;
              FUN_0028250c();
              temp_v30 = temp_v30 + temp_v22 * *(float *)(temp_v3 + 0x108);
              temp_v20 = *(float *)(temp_v3 + 0x128) * temp_v20;
              FUN_00282390();
              temp_v6 = 0;
              temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v3 + 0x108);
              do {
                if ((temp_v6 != temp_v2) &&
                   (temp_v8 = temp_v5 + temp_v6 * 0x180, *(char *)(temp_v8 + 0x34) != '\0')) {
                  temp_v22 = (float)temp_v23;
                  mathDistanceBetweenPoints();
                  if ((int)temp_v22 < 0x3f800000) {
                    temp_v22 = 1.0f;
                  }
                  else if ((int)temp_v22 >= 0x42480000) goto LAB_0020c014;
                  temp_v22 = 1.0f / temp_v22;
                  temp_v30 = temp_v30 - (*(float *)(temp_v8 + 0x54) - (float)temp_v23) * temp_v22 * 5.0f;
                  temp_v31 = temp_v31 -
                             (*(float *)(temp_v8 + 0x58) - (float)((unsigned long long)temp_v23 >> 0x20)) *
                             temp_v22 * 5.0f;
                  temp_v32 = temp_v32 - (*(float *)(temp_v8 + 0x5c) - temp_v18) * temp_v22 * 5.0f;
                  break;
                }
LAB_0020c014:
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x20);
              temp_v31 = temp_v31 - 5.0f;
              FUN_0025363c(&temp_v30,&temp_v42,0);
              *(float *)(temp_v3 + 0x54) = temp_v42;
              *(float *)(temp_v3 + 0x58) = fStack_7c;
              *(float *)(temp_v3 + 0x5c) = fStack_78;
              temp_v1 = *(short *)(temp_v45 + 0x38) - 1;
              *(short *)(temp_v45 + 0x38) = temp_v1;
              if (temp_v1 < 1) {
                effectSpawnTypeTen();
                temp_v1 = randNextInRange(2);
                *(short *)(temp_v45 + 0x38) = temp_v1 + 9;
              }
              temp_v6 = *(int *)(temp_v3 + 0xbc);
              if (temp_v6 < 0x1e) {
                vec4Forward(*(unsigned int *)(temp_v3 + 0x19c));
              }
              break;
            }
          }
          *(unsigned int *)(temp_v3 + 0xd4) = 0;
          temp_v19 = 0xd;
          *(unsigned int *)(temp_v3 + 0xf0) = 0;
        }
        *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        break;
      case 0xf:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
        }
        else {
          temp_v11 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          *(unsigned int *)(temp_v3 + 100) = 4;
          *(unsigned int *)(temp_v3 + 0x6c) = 1;
          temp_v18 = temp_v11;
          temp_v30 = temp_v11;
          temp_v22 = temp_v32;
          temp_v20 = temp_v31;
          if (*(int *)(temp_v3 + 0xf0) < 8) {
            temp_v19 = *(unsigned int *)(g_lmapScene + 0x20);
            temp_v9 = *(unsigned int *)(g_lmapScene + 0x24);
            *(unsigned int *)(temp_v3 + 0xf4) = *(unsigned int *)(g_lmapScene + 0x1c);
            *(unsigned int *)(temp_v3 + 0xf8) = temp_v19;
            *(unsigned int *)(temp_v3 + 0xfc) = temp_v9;
            mathPositionHeadingDegrees();
            *(float *)(temp_v3 + 0x104) = temp_v11;
            *(int *)(temp_v3 + 0xf0) = *(int *)(temp_v3 + 0xf0) + 1;
          }
          temp_v6 = *(int *)(temp_v3 + 0x100) - 1;
          *(int *)(temp_v3 + 0x100) = temp_v6;
          if ((-1 < temp_v6) && (*(char *)(temp_v3 + 0x170) == '\0')) {
            temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
            FUN_002535ec();
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            temp_v27 = 0.017453292f;
            temp_v39 = temp_v30;
            temp_v40 = temp_v31;
            temp_v41 = temp_v32;
            temp_v11 = *(float *)(temp_v3 + 0x104) * 0.017453292f;
            FUN_0028250c();
            temp_v26 = 100.0f;
            temp_v39 = temp_v39 + temp_v11 * 100.0f;
            temp_v11 = *(float *)(temp_v3 + 0x104) * temp_v27;
            FUN_00282390();
            temp_v35 = temp_v22;
            temp_v41 = temp_v41 + temp_v11 * temp_v26;
            temp_v40 = temp_v40 + 25.0f;
            temp_v34 = temp_v20 + 25.0f;
            temp_v33 = temp_v18;
            temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
            if (temp_v6 == -1) {
              temp_v18 = *(float *)(temp_v3 + 0x60) * temp_v27;
              FUN_0028250c();
              temp_v30 = temp_v30 + temp_v18 * *(float *)(temp_v3 + 0xe8);
              temp_v27 = *(float *)(temp_v3 + 0x60) * temp_v27;
              FUN_00282390();
              temp_v32 = temp_v32 + temp_v27 * *(float *)(temp_v3 + 0xe8);
              temp_v31 = temp_v31 - 5.0f;
              FUN_0025363c(&temp_v30,&temp_v42,0);
              *(float *)(temp_v3 + 0x54) = temp_v42;
              *(float *)(temp_v3 + 0x58) = fStack_7c;
              *(float *)(temp_v3 + 0x5c) = fStack_78;
              temp_v1 = *(short *)(temp_v3 + 0x16c) - 1;
              *(short *)(temp_v3 + 0x16c) = temp_v1;
              if (temp_v1 < 1) {
                effectSpawnTypeTen();
                temp_v1 = randNextInRange(2);
                *(short *)(temp_v3 + 0x16c) = temp_v1 + 5;
              }
              if (*(int *)(temp_v3 + 0xbc) < 0x1e) {
                vec4Forward(*(unsigned int *)(temp_v3 + 0x19c));
              }
              break;
            }
          }
LAB_0020a934:
          temp_v19 = 9;
          *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) - 1;
        }
        *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        break;
      case 0x10:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(int *)(temp_v3 + 0xbc) == 0) {
          *(unsigned int *)(temp_v3 + 0x74) = *(unsigned int *)(temp_v3 + 0x54);
          *(unsigned int *)(temp_v3 + 0x78) = *(unsigned int *)(temp_v3 + 0x58);
          *(unsigned int *)(temp_v3 + 0x7c) = *(unsigned int *)(temp_v3 + 0x5c);
          *(unsigned int *)(temp_v3 + 0x80) = 10;
          FUN_00253860(pcVar17,2);
        }
        temp_v30 = *(float *)(temp_v3 + 0x74);
        temp_v31 = *(float *)(temp_v3 + 0x78);
        temp_v32 = *(float *)(temp_v3 + 0x7c);
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        *(unsigned int *)(temp_v3 + 100) = 5;
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        temp_v6 = *(int *)(temp_v3 + 0x80);
        if (0 < temp_v6) {
          temp_v22 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          if ((*(unsigned int *)(temp_v3 + 0xbc) & 1) != 0) {
            temp_v30 = temp_v30 + temp_v22;
            temp_v32 = temp_v32 + temp_v18;
          }
          else {
            temp_v30 = temp_v30 - temp_v22;
            temp_v32 = temp_v32 - temp_v18;
          }
          *(int *)(temp_v3 + 0x80) = *(int *)(temp_v3 + 0x80) - 1;
        }
        *(float *)(temp_v3 + 0x54) = temp_v30;
        *(float *)(temp_v3 + 0x58) = temp_v31;
        *(float *)(temp_v3 + 0x5c) = temp_v32;
        break;
      case 0x11:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(char *)(temp_v3 + 0xb0) != '\0') {
          pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
          temp_v13 = *pbVar11;
          if ((temp_v13 & 0x20) != 0) {
            *pbVar11 = temp_v13 & 0xdf;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x12;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
        }
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 0x12:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        temp_v6 = *(int *)(temp_v3 + 0xbc) + 1;
        *(int *)(temp_v3 + 0xbc) = temp_v6;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        *(unsigned int *)(temp_v3 + 100) = 6;
        if (temp_v6 >= 0x1f) {
          temp_v6 = temp_v46 + temp_v2 * 0x14;
          *(unsigned char *)(temp_v6 + 0xf20) = *(unsigned char *)(temp_v6 + 0xf20) & 0xdf;
          temp_v6 = temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14;
          temp_v30 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2c),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v31 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2e),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v32 = (float)VectorSignedToFloat((int)*(short *)(temp_v46 +
                                                                *(int *)(temp_v3 + 0x88) * 0x14 +
                                                               0xf30),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14;
          temp_v19 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf32),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (((int)*(char *)(temp_v6 + 0xf21) == *(int *)(temp_v5 + 0xc)) &&
             ((int)*(char *)(temp_v6 + 0xf22) == *(int *)(temp_v5 + 0x10))) {
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 3;
            *(float *)(temp_v3 + 0x3c) = temp_v30;
            *(float *)(temp_v3 + 0x40) = temp_v31;
            *(float *)(temp_v3 + 0x44) = temp_v32;
            *(float *)(temp_v3 + 0x50) = temp_v32;
            *(float *)(temp_v3 + 0x48) = temp_v30;
            *(float *)(temp_v3 + 0x4c) = temp_v31;
            *(float *)(temp_v3 + 0x54) = temp_v30;
            *(float *)(temp_v3 + 0x58) = temp_v31;
            *(float *)(temp_v3 + 0x5c) = temp_v32;
          }
          else {
            *(unsigned int *)(temp_v3 + 0xb8) = 0x13;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(100);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            temp_v6 = randNextInRange(0x96);
            *(int *)(temp_v3 + 0xd8) = temp_v6 + 1;
            *(unsigned char *)(temp_v3 + 0x170) = 0;
            *(unsigned char *)(temp_v3 + 0x171) = 0;
          }
        }
        break;
      case 0x13:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        pbVar11 = (unsigned char *)(temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14 + 0xf20);
        temp_v13 = *pbVar11;
        if ((temp_v13 & 0x20) != 0) {
          *pbVar11 = temp_v13 & 0xdf;
          temp_v6 = temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14;
          temp_v30 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2c),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v31 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2e),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v32 = (float)VectorSignedToFloat((int)*(short *)(temp_v46 +
                                                                *(int *)(temp_v3 + 0x88) * 0x14 +
                                                               0xf30),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = temp_v46 + *(int *)(temp_v3 + 0x88) * 0x14;
          temp_v19 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf32),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (((int)*(char *)(temp_v6 + 0xf21) == *(int *)(temp_v5 + 0xc)) &&
             ((int)*(char *)(temp_v6 + 0xf22) == *(int *)(temp_v5 + 0x10))) {
            *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(float *)(temp_v3 + 0x3c) = temp_v30;
            *(unsigned int *)(temp_v3 + 0xb8) = 3;
            *(float *)(temp_v3 + 0x40) = temp_v31;
            *(float *)(temp_v3 + 0x44) = temp_v32;
            *(float *)(temp_v3 + 0x5c) = temp_v32;
            *(float *)(temp_v3 + 0x48) = temp_v30;
            *(float *)(temp_v3 + 0x4c) = temp_v31;
            *(float *)(temp_v3 + 0x50) = temp_v32;
            *(float *)(temp_v3 + 0x54) = temp_v30;
            *(float *)(temp_v3 + 0x58) = temp_v31;
          }
        }
        break;
      case 0x14:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        *(unsigned int *)(temp_v3 + 100) = 1;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        *(unsigned char *)(temp_v3 + 0x171) = 1;
        temp_v6 = FUN_00253968(pcVar17);
        if (temp_v6 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        temp_v39 = temp_v30;
        temp_v41 = temp_v32;
        temp_v33 = *(float *)(g_lmapScene + 0x1c);
        temp_v35 = *(float *)(g_lmapScene + 0x24);
        temp_v40 = temp_v31 + 35.0f;
        temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
        if ((int)romwright_fabs_4(*(float *)(g_lmapScene + 0x20) - temp_v31) < 0x42f00000) {
          temp_v6 = *(int *)(g_lmapScene + 0x1c);
          mathDistanceBetweenPoints();
          if ((temp_v6 < 0x44bb8000) && (temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0), temp_v6 == -1))
          goto LAB_0020c7d0;
        }
        temp_v19 = 0x15;
        *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
        *(unsigned int *)(temp_v3 + 0xbc) = 0;
        break;
      case 0x15:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if ((*(int *)(temp_v3 + 0xbc) >= 0x15) && (temp_v6 = FUN_00253968(pcVar17), temp_v6 != 0)) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
          break;
        }
        *(unsigned int *)(temp_v3 + 0x6c) = 3;
        *(unsigned int *)(temp_v3 + 100) = 0;
        if (*(int *)(temp_v3 + 0xbc) == 0) {
          pcVar9 = pcVar17;
          FUN_002dfb48();
          if (pcVar9 == (char *)0x0) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v5 = randNextInRange(0x1e);
            *(int *)(temp_v3 + 0xc0) = temp_v5 + 0x1e;
            return;
          }
          *(unsigned char *)(temp_v3 + 0x171) = 1;
        }
        if (*(int *)(temp_v3 + 0xbc) == 1) {
          FUN_00253860(pcVar17,0);
        }
        temp_v6 = *(int *)(temp_v3 + 0xbc) + 1;
        *(int *)(temp_v3 + 0xbc) = temp_v6;
        if (temp_v2 * 2 + 0x14 < temp_v6) {
          temp_v39 = *(float *)(temp_v3 + 0x54);
          temp_v41 = *(float *)(temp_v3 + 0x5c);
          temp_v33 = *(float *)(g_lmapScene + 0x1c);
          temp_v35 = *(float *)(g_lmapScene + 0x24);
          temp_v40 = *(float *)(temp_v3 + 0x58) + 35.0f;
          temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
          if (temp_v6 != -1) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            temp_v6 = randNextInRange(0x1e);
            *(int *)(temp_v3 + 0xc0) = temp_v6 + 0x1e;
          }
          else {
            *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) + 1;
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 6;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            *(unsigned int *)(temp_v3 + 0x174) = 0;
          }
        }
        break;
      case 0x16:
        if (*(int *)(temp_v5 + 0x3038) < DAT_0049fae0) {
          temp_v6 = *(int *)(temp_v5 + 0x14);
          mathDistanceBetweenPoints();
          if (temp_v6 < 0x44bb8000) {
            *(unsigned int *)(temp_v3 + 0xd8) = 0;
            *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x15;
            *(unsigned int *)(temp_v3 + 0xbc) = 1;
            *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x3c);
            *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x40);
            *(unsigned int *)(temp_v3 + 100) = 0;
            *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x44);
            *(unsigned int *)(temp_v3 + 0x6c) = 3;
            *(unsigned char *)(temp_v3 + 0x171) = 1;
            temp_v6 = temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8;
            temp_v7 = *(char *)(temp_v6 + 0x3051);
          }
          else {
            FUN_002dfb48();
            if (pcVar17 == (char *)0x0) {
              *(unsigned int *)(temp_v3 + 0xb8) = 0;
              *(unsigned int *)(temp_v3 + 0xbc) = 0;
              break;
            }
            *(unsigned int *)(temp_v3 + 0xd8) = 0;
            *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
            *(unsigned int *)(temp_v3 + 100) = 0;
            *(unsigned int *)(temp_v3 + 0x6c) = 3;
            *(unsigned int *)(temp_v3 + 0xb8) = 0x15;
            *(unsigned int *)(temp_v3 + 0xbc) = 1;
            *(unsigned char *)(temp_v3 + 0x171) = 1;
            temp_v6 = temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8;
            temp_v7 = *(char *)(temp_v6 + 0x3051);
          }
          if (temp_v7 != '\0') {
            temp_v19 = asdMdlManagerClone(*(unsigned int *)(temp_v6 + 0x304c),0);
            *(unsigned int *)(temp_v3 + 0x1ac) = temp_v19;
            FUN_002a0428(temp_v19,1);
            *(unsigned char *)(temp_v3 + 0x1b1) = 1;
          }
          else {
            *(unsigned int *)(temp_v3 + 0x1ac) = *(unsigned int *)(temp_v6 + 0x304c);
            *(unsigned char *)(temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8 + 0x3051) = 1;
            *(unsigned char *)(temp_v3 + 0x1b1) = 0;
          }
          *(unsigned char *)(temp_v3 + 0x1b0) = 1;
        }
        else {
          *(unsigned int *)(temp_v3 + 0xb8) = 0;
          *(unsigned int *)(temp_v3 + 0xbc) = 0;
        }
        break;
      case 0x18:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(int *)(temp_v3 + 0xbc) == 0) {
          if (DAT_0049fae0 <= *(int *)(temp_v5 + 0x3038)) break;
          *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
          temp_v6 = temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8;
          temp_v16 = *(char *)(temp_v6 + 0x3051) == '\0';
          if (!temp_v16) {
            temp_v19 = asdMdlManagerClone(*(unsigned int *)(temp_v6 + 0x304c),0);
            *(unsigned int *)(temp_v3 + 0x1ac) = temp_v19;
            FUN_002a0428(temp_v19,1);
          }
          else {
            *(unsigned int *)(temp_v3 + 0x1ac) = *(unsigned int *)(temp_v6 + 0x304c);
            *(unsigned char *)(temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8 + 0x3051) = 1;
          }
          *(unsigned char *)(temp_v3 + 0x1b1) = !temp_v16;
          *(unsigned char *)(temp_v3 + 0x1b0) = 1;
          *(unsigned int *)(temp_v3 + 0x6c) = 3;
          *(unsigned int *)(temp_v3 + 100) = 0;
          FUN_00253860(pcVar17);
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        if (*(int *)(temp_v3 + 0xbc) >= 11) {
          temp_v6 = FUN_00253968(pcVar17);
          if (temp_v6 != 0) {
            temp_v19 = 0x10;
            *(unsigned int *)(temp_v3 + 0xb8) = temp_v19;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            break;
          }
          if (*(int *)(temp_v3 + 0xbc) >= 0x15) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(unsigned int *)(temp_v3 + 0xc0) = 9999;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0x6c) = 1;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
          }
        }
        break;
      case 0x19:
        if (*(short *)(temp_v3 + 0x16e) != -1) {
          FUN_00253c70(pcVar17);
        }
        if (*(int *)(temp_v3 + 0xbc) == 0) {
          if (DAT_0049fae0 <= *(int *)(temp_v5 + 0x3038)) break;
          *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
          temp_v6 = temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8;
          temp_v16 = *(char *)(temp_v6 + 0x3051) == '\0';
          if (!temp_v16) {
            temp_v19 = asdMdlManagerClone(*(unsigned int *)(temp_v6 + 0x304c),0);
            *(unsigned int *)(temp_v3 + 0x1ac) = temp_v19;
            FUN_002a0428(temp_v19,1);
          }
          else {
            *(unsigned int *)(temp_v3 + 0x1ac) = *(unsigned int *)(temp_v6 + 0x304c);
            *(unsigned char *)(temp_v5 + *(int *)(temp_v3 + 0x1a8) * 8 + 0x3051) = 1;
          }
          *(unsigned char *)(temp_v3 + 0x1b1) = !temp_v16;
          *(unsigned char *)(temp_v3 + 0x1b0) = 1;
        }
        temp_v30 = *(float *)(temp_v3 + 0x54);
        temp_v31 = *(float *)(temp_v3 + 0x58);
        temp_v32 = *(float *)(temp_v3 + 0x5c);
        *(int *)(temp_v3 + 0xbc) = *(int *)(temp_v3 + 0xbc) + 1;
        *(unsigned int *)(temp_v3 + 100) = 3;
        *(unsigned int *)(temp_v3 + 0x6c) = 1;
        if ((int)*(float *)(temp_v3 + 0x158) >= *(int *)(temp_v3 + 0xbc)) {
          temp_v18 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0xbc),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v30 = *(float *)(temp_v3 + 0x138) + *(float *)(temp_v3 + 0x15c) * temp_v18;
          temp_v31 = *(float *)(temp_v3 + 0x13c) + *(float *)(temp_v3 + 0x160) * temp_v18;
          temp_v32 = *(float *)(temp_v3 + 0x140) + *(float *)(temp_v3 + 0x164) * temp_v18;
          temp_v18 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0xbc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = *(float *)(temp_v3 + 0x168);
          temp_v18 = (180.0f / *(float *)(temp_v3 + 0x158)) * temp_v18 * 0.017453292f;
          FUN_0028250c();
          temp_v31 = temp_v31 + temp_v18 * temp_v22;
          *(float *)(temp_v3 + 0x54) = temp_v30;
          *(float *)(temp_v3 + 0x58) = temp_v31;
          *(float *)(temp_v3 + 0x5c) = temp_v32;
        }
        else {
          *(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x148);
          *(unsigned int *)(temp_v3 + 0x58) = *(unsigned int *)(temp_v3 + 0x14c);
          *(unsigned int *)(temp_v3 + 0x5c) = *(unsigned int *)(temp_v3 + 0x150);
        }
        if (*(int *)(temp_v3 + 0xbc) >= (int)*(float *)(temp_v3 + 0x158) - 4) {
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          mathDistanceBetweenPoints();
          FUN_00281e34();
          temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
          FUN_002535ec();
          *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
        }
        else {
          temp_v19 = *(unsigned int *)(temp_v3 + 0x60);
          FUN_002535ec();
          *(unsigned int *)(temp_v3 + 0x60) = temp_v19;
        }
        if (*(int *)(temp_v3 + 0xbc) == (int)*(float *)(temp_v3 + 0x158) - 4) {
          FUN_002df948();
        }
        if (*(int *)(temp_v3 + 0xbc) == (int)*(float *)(temp_v3 + 0x158)) {
          FUN_002879dc(0xf,0x1e,0);
        }
        if (*(int *)(temp_v3 + 0xbc) == 4) {
          FUN_00253860(pcVar17,1);
        }
        if ((int)*(float *)(temp_v3 + 0x158) < *(int *)(temp_v3 + 0xbc)) {
          temp_v39 = *(float *)(temp_v3 + 0x54);
          temp_v41 = *(float *)(temp_v3 + 0x5c);
          temp_v33 = *(float *)(g_lmapScene + 0x1c);
          temp_v35 = *(float *)(g_lmapScene + 0x24);
          temp_v40 = *(float *)(temp_v3 + 0x58) + 35.0f;
          temp_v34 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          temp_v6 = FUN_0025b4b0(&temp_v33,&temp_v39,0);
          if (temp_v6 != -1) {
            *(unsigned int *)(temp_v3 + 0xb8) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 0;
            *(unsigned int *)(temp_v3 + 0xc0) = 10;
          }
          else {
            *(int *)(temp_v5 + 0x303c) = *(int *)(temp_v5 + 0x303c) + 1;
            *(unsigned int *)(temp_v3 + 0xd4) = 0;
            *(unsigned int *)(temp_v3 + 0xb8) = 6;
            *(unsigned int *)(temp_v3 + 0xc4) = 0;
            *(unsigned int *)(temp_v3 + 0xbc) = 6;
            *(unsigned int *)(temp_v3 + 0x1a0) = 0;
            *(unsigned int *)(temp_v3 + 0x174) = 0;
          }
        }
      }
    }
LAB_0020cf74:
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x20) {
      temp_v2 = 0;
      do {
        temp_v3 = temp_v5 + temp_v2 * 0x180;
        if (*(char *)(temp_v3 + 0x34) != '\0') {
          temp_v30 = *(float *)(temp_v3 + 0x54);
          temp_v31 = *(float *)(temp_v3 + 0x58);
          temp_v32 = *(float *)(temp_v3 + 0x5c);
          temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
          mathDistanceBetweenPoints();
          *(unsigned int *)(temp_v3 + 0x70) = temp_v19;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x20);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
