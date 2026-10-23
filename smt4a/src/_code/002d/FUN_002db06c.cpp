/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db06c` (_code @ 0x2db06c, 0x2310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, int);
int FUN_0027376c(...);
int FUN_00294774(...);
int controllerSetDestination(...);
int animationSelectClip(...);

int soundVolumeSettingGet(void);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_001f3f34(void);
int soundAllocateSpatialActor(...);
int FUN_0025ef68(int *, int *, int);
int FUN_002826dc(int *, int *, int, int);
int distSpatial(void);
int FUN_002d1f40(int, int, int);
int FUN_003250ac(int *);
int mathPositionHeadingDegrees(void);
int FUN_003d4ed8(...);
int FUN_003fd7c0(...);
int FUN_003fd924(...);
int controllerSetRotationEulerDegrees(...);
int FUN_004ff98c(...);
int VectorSignedToFloat(int, int);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int *g_lmapScene; /* 0x581288 */
extern float DAT_0058128c; /* 0x58128c */
extern signed char DAT_005f161c; /* 0x5f161c */
extern signed char DAT_005f161d; /* 0x5f161d */
extern unsigned char DAT_005f17ac; /* 0x5f17ac */
extern unsigned short DAT_005f17c2; /* 0x5f17c2 */
extern int DAT_005f19a0; /* 0x5f19a0 */
extern signed char DAT_005f19a4; /* 0x5f19a4 */
extern float DAT_005f19a8; /* 0x5f19a8 */
extern float DAT_005f19ac; /* 0x5f19ac */
extern float DAT_005f19b8; /* 0x5f19b8 */
extern float DAT_005f19bc; /* 0x5f19bc */
extern unsigned char DAT_005f19d4; /* 0x5f19d4 */
extern float DAT_005f19d8; /* 0x5f19d8 */
extern float DAT_005f19dc; /* 0x5f19dc */
extern float DAT_005f19e0; /* 0x5f19e0 */
extern int DAT_005f19e4; /* 0x5f19e4 */
extern short DAT_005f19e8; /* 0x5f19e8 */
extern float DAT_005f1aa0; /* 0x5f1aa0 */
extern signed char DAT_005f1ad6; /* 0x5f1ad6 */
extern signed char DAT_005f1adc; /* 0x5f1adc */
extern unsigned char g_lmapMain; /* 0x5f1afc */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern signed char DAT_005f1c7c; /* 0x5f1c7c */
extern signed char DAT_005f1c7d; /* 0x5f1c7d */
extern signed char DAT_005f1c7e; /* 0x5f1c7e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: soundVolumeSettingGet. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: soundAllocateSpatialActor. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_0027376c. */
/* Supplied declaration required: FUN_002826dc. */
/* Supplied declaration required: FUN_00294774. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: animationSelectClip. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_004ff98c. */
extern int FUN_004ffa14(unsigned int);


void FUN_002db06c(void)

{
/* irregular: 16 goto(s); irregular input(s): in_fpscr; 23 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  float *pfVar12;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  int temp_v18;
  float temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int iStack_a8;
  int temp_v23;
  float temp_v24;
  int temp_v25;
  unsigned char *temp_v26;
  int temp_v27;
  float temp_v28;
  int iStack_7c;
  int temp_v29;
  float temp_v30;
  int iStack_68;
  int temp_v31;
  
  temp_v0 = gameFlagsGetBlock();
  soundVolumeSettingGet();
  piVar2 = g_lmapScene;
  if (((*g_lmapScene == 0xd || *g_lmapScene == 0x15) && (g_lmapScene[0x60] != 0)) &&
     (g_lmapScene[1] == 0xb)) {
    temp_v1 = *(int *)(g_lmapScene[0x60] + 4);
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) | 3;
  }
  temp_v31 = temp_v0 + 0x1000;
  temp_v18 = 0x40a00000;
  temp_v20 = -0x383cb000;
  temp_v1 = 0x41200000;
  temp_v11 = 0.017453292f;
  temp_v12 = 160.0f;
  temp_v16 = 0x410000003e4ccccd;
  temp_v10 = 0.0f;
  temp_v26 = &g_lmapMain;
  if (*(int *)(temp_v0 + 0x109c) != 0) {
    if (DAT_005f1bc4 != '\0') {
      temp_v4 = *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4);
      if (DAT_005f1c7c != '\0') {
        temp_v4 = temp_v4 | 3;
      }
      else {
        temp_v4 = temp_v4 & 0xfffffffc;
      }
      *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) = temp_v4;
      temp_v4 = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4);
      if (DAT_005f1c7d != '\0') {
        temp_v4 = temp_v4 | 3;
      }
      else {
        temp_v4 = temp_v4 & 0xfffffffc;
      }
      *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = temp_v4;
    }
    temp_v2 = 0;
    if (DAT_005f1adc != '\0') {
      temp_v2 = piVar2[0x74];
    }
    if ((DAT_005f1adc != '\0' && temp_v2 != 0x11) && temp_v2 != 0x12) {
      piVar2[0x74] = 0x11;
      DAT_005f19e8 = 0;
      *(unsigned int *)(temp_v0 + 0x109c) = 0;
      DAT_0058128c = 0.0f;
      piVar2[0x8a] = 5;
      piVar2[0x8c] = 0;
      piVar2[0x75] = 0;
      piVar2[0x90] = 0;
      piVar2[0x8e] = 5;
      *(unsigned char *)(piVar2 + 0x8f) = 1;
      FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
      FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
    }
    piVar2 = g_lmapScene;
    switch(g_lmapScene[0x74]) {
    case 1:
      DAT_0058128c = DAT_0058128c + (float)temp_v16;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      if (temp_v26[200] == '\0') {
        if ((char)piVar2[0x1b] != '\0') {
          temp_v0 = 3;
          piVar2[0x8a] = 3;
          piVar2[0x8c] = 0;
          piVar2[0x90] = temp_v18;
LAB_002db2e8:
          piVar2[0x8e] = temp_v0;
        }
        else {
          piVar2[0x8c] = piVar2[0x8c] + 1;
          if ((piVar2[0x8a] == 9) &&
             (temp_v0 = FUN_004ffa14(*(unsigned int *)(piVar2[0x60] + 4)), temp_v0 != 0)) {
            g_lmapScene[0x8c] = 0;
          }
          else {
            piVar2 = g_lmapScene;
            if (g_lmapScene[0x8c] >= 901) {
              temp_v0 = 9;
              g_lmapScene[0x90] = (int)temp_v10;
              piVar2[0x8a] = 9;
              goto LAB_002db2e8;
            }
          }
          piVar2 = g_lmapScene;
          g_lmapScene[0x8a] = 0;
          piVar2[0x90] = temp_v18;
          piVar2[0x8e] = 0;
        }
      }
      piVar2 = g_lmapScene;
      g_lmapScene[0x91] = (int)temp_v10;
      temp_v15 = (float)piVar2[7];
      temp_v14 = *(unsigned long long *)(piVar2 + 8);
      temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bc124();
      temp_v15 = temp_v15 + temp_v9 * DAT_005f19b8;
      temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bbf0c();
      temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20) + temp_v9 * DAT_005f19b8;
      temp_v17 = (float)temp_v14 + DAT_005f1aa0 + temp_v12;
      temp_v9 = DAT_0058128c;
      FUN_001bc124();
      piVar2 = g_lmapScene;
      g_lmapScene[0x7c] = (int)temp_v15;
      piVar2[0x7d] = (int)(temp_v17 + temp_v9 * (float)((unsigned long long)temp_v16 >> 0x20));
      piVar2[0x7e] = (int)temp_v13;
      if (*(char *)((int)piVar2 + 0x23d) == '\x01') {
        mathPositionHeadingDegrees();
      }
      controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[0x60] + 4));
      controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
      break;
    case 2:
      g_lmapScene[0x91] = (int)temp_v10;
      if (DAT_005f161c != '\0') {
        temp_v0 = *piVar2;
        if (((temp_v0 != 8 && temp_v0 != 10) && (temp_v0 != 0xc && temp_v0 != 0xe)) &&
           (temp_v0 != 0x14 && temp_v0 != 0x16)) goto LAB_002dcd94;
LAB_002db724:
        DAT_005f19e8 = 0;
        DAT_0058128c = temp_v10;
        piVar2[0x8a] = 2;
        piVar2[0x8c] = 0;
        piVar2[0x74] = 8;
        piVar2[0x75] = 0;
        piVar2[0x90] = temp_v1;
        piVar2[0x8e] = 2;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        temp_v3 = 1;
        temp_v5 = *(unsigned int *)(piVar2[0x60] + 4);
      }
      else {
        DAT_0058128c = DAT_0058128c + (float)temp_v16;
        if (DAT_005f1c7e != '\0') {
          DAT_0058128c = temp_v10;
        }
        temp_v2 = piVar2[0x75];
        piVar2[0x75] = temp_v2 + 1;
        if (temp_v2 + 1 == 0x19) {
          soundAllocateSpatialActor(0x10002ea);
        }
        piVar2 = g_lmapScene;
        if (g_lmapScene[0x75] == 1) {
          temp_v17 = (float)g_lmapScene[7];
          temp_v15 = (float)g_lmapScene[8];
          temp_v13 = (float)g_lmapScene[9];
          g_lmapScene[0x82] = (int)temp_v17;
          piVar2[0x83] = (int)temp_v15;
          piVar2[0x84] = (int)temp_v13;
          temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
          FUN_001bc124();
          temp_v19 = (float)((unsigned long long)temp_v16 >> 0x20);
          temp_v17 = temp_v17 + temp_v9 * DAT_005f19b8;
          temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
          FUN_001bbf0c();
          temp_v13 = temp_v13 + temp_v9 * DAT_005f19b8;
          temp_v12 = temp_v15 + DAT_005f1aa0 + temp_v12;
          temp_v9 = temp_v10;
          FUN_001bc124();
          piVar2 = g_lmapScene;
          piVar5 = g_lmapScene + 7;
          g_lmapScene[0x7c] = (int)temp_v17;
          piVar2[0x7d] = (int)(temp_v12 + temp_v10 * temp_v19);
          piVar2[0x7e] = (int)temp_v13;
          piVar2[0x7f] = *piVar5;
          piVar2[0x80] = piVar2[8];
          piVar2[0x81] = piVar2[9];
          temp_v10 = (float)piVar2[0x13] * temp_v11;
          FUN_001bc124();
          piVar2 = g_lmapScene;
          g_lmapScene[0x7f] =
               (int)((float)g_lmapScene[0x7f] + temp_v10 * *(float *)(temp_v0 + 0x1528));
          temp_v11 = (float)piVar2[0x13] * temp_v11;
          FUN_001bbf0c();
          piVar2 = g_lmapScene;
          piVar5 = g_lmapScene + 0x76;
          g_lmapScene[0x81] =
               (int)((float)g_lmapScene[0x81] + temp_v11 * *(float *)(temp_v0 + 0x1528));
          piVar2[0x80] = (int)((float)piVar2[0x80] + 120.0f);
          FUN_003250ac(piVar5);
          mathPositionHeadingDegrees();
          piVar2 = g_lmapScene;
          g_lmapScene[0x86] = (int)temp_v17;
          piVar2[0x87] = piVar2[0x13];
          piVar2[0x79] = DAT_005f19a0;
          controllerSetRotationEulerDegrees(*(unsigned int *)(piVar2[0x60] + 4));
          controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
          DAT_0058128c = temp_v9;
          FUN_003fd924(*(unsigned int *)(g_lmapScene[0x60] + 4),1,2);
          return;
        }
        temp_v5 = *(unsigned int *)(g_lmapScene[0x60] + 4);
        temp_v0 = FUN_004ff98c(temp_v5);
        if ((temp_v0 == 10) && (temp_v0 = FUN_004ffa14(temp_v5), piVar2 = g_lmapScene, temp_v0 != 0)) {
          *(unsigned char *)(g_lmapScene + 0x8b) = 1;
          piVar2[0x8a] = 3;
          piVar2[0x8e] = 3;
          piVar2[0x90] = (int)temp_v10;
          *(unsigned char *)(piVar2 + 0x8f) = 1;
          piVar2[0x74] = 3;
        }
        piVar2 = g_lmapScene;
        if (DAT_005f161d == '\0') break;
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 5;
        piVar2[0x75] = 0;
        piVar2[0x8e] = 5;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        DAT_005f19e8 = 0;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
        temp_v3 = 1;
        temp_v5 = *(unsigned int *)(g_lmapScene[99] + 4);
      }
      FUN_003fd7c0(temp_v5,temp_v3,2);
      break;
    case 3:
      if (DAT_005f161c == '\0') {
        DAT_0058128c = DAT_0058128c + 1.0f;
        if (DAT_005f1c7e != '\0') {
          DAT_0058128c = temp_v10;
        }
        temp_v9 = (float)g_lmapScene[0x82];
        distSpatial();
        temp_v17 = (float)g_lmapScene[0x79];
        temp_v22 = g_lmapScene[0x7c];
        iStack_a8 = g_lmapScene[0x7d];
        temp_v23 = g_lmapScene[0x7e];
        if (DAT_005f19a4 != '\x01') {
          if (DAT_005f19a4 == '\x02') {
            temp_v13 = (float)g_lmapScene[0x76];
            temp_v6 = temp_v13 < temp_v10;
            temp_v7 = temp_v13 == temp_v10;
            temp_v8 = (temp_v13 != temp_v13) || (temp_v10 != temp_v10);
            if (!temp_v7 && !temp_v6) {
              temp_v15 = (float)g_lmapScene[0x78];
              temp_v6 = temp_v15 < temp_v10;
              temp_v7 = temp_v15 == temp_v10;
              temp_v8 = (temp_v15 != temp_v15) || (temp_v10 != temp_v10);
            }
            if (!(temp_v7 || temp_v6 != temp_v8)) {
              temp_v13 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] - temp_v13 * DAT_005f19a8);
              temp_v13 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              temp_v13 = (float)g_lmapScene[0x7e] + temp_v13 * DAT_005f19a8;
              g_lmapScene[0x7e] = (int)temp_v13;
            }
            else {
              temp_v6 = temp_v10 <= temp_v13;
              if (!temp_v6) {
                temp_v6 = temp_v10 <= (float)g_lmapScene[0x78];
              }
              if (!temp_v6) {
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v13 * DAT_005f19a8);
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                temp_v13 = (float)g_lmapScene[0x7e] - temp_v13 * DAT_005f19a8;
                g_lmapScene[0x7e] = (int)temp_v13;
              }
              else if ((temp_v10 > temp_v13) && ((float)g_lmapScene[0x78] > temp_v10)) {
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] - temp_v13 * DAT_005f19a8);
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                temp_v13 = (float)g_lmapScene[0x7e] - temp_v13 * DAT_005f19a8;
                g_lmapScene[0x7e] = (int)temp_v13;
              }
              else if ((temp_v13 > temp_v10) && (temp_v10 > (float)g_lmapScene[0x78])) {
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v13 * DAT_005f19a8);
                temp_v13 = DAT_0058128c / DAT_005f19ac;
                FUN_001bc124();
                temp_v13 = (float)g_lmapScene[0x7e] + temp_v13 * DAT_005f19a8;
                g_lmapScene[0x7e] = (int)temp_v13;
              }
            }
          }
        }
        else {
          temp_v13 = DAT_0058128c / DAT_005f19ac;
          FUN_001bc124();
          g_lmapScene[0x7d] = (int)((float)g_lmapScene[0x7d] + temp_v13 * DAT_005f19a8);
        }
        piVar2 = g_lmapScene;
        pfVar12 = (float *)(g_lmapScene + 0x77);
        temp_v13 = (float)g_lmapScene[0x78];
        g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + (float)g_lmapScene[0x76] * temp_v17);
        piVar2[0x7d] = (int)((float)piVar2[0x7d] + *pfVar12 * temp_v17);
        piVar2[0x7e] = (int)((float)piVar2[0x7e] + temp_v13 * temp_v17);
        temp_v27 = g_lmapScene[0x7c];
        iStack_7c = g_lmapScene[0x7e];
        piVar2 = &temp_v27;
        temp_v28 = (float)g_lmapScene[0x7d] + 30.0f;
        FUN_002826dc(piVar2,&temp_v22,0,1);
        if (piVar2 == (int *)0x0) {
          piVar2 = &temp_v27;
          FUN_0025ef68(piVar2,&temp_v22,1);
          if (piVar2 != (int *)0x0) goto LAB_002dba80;
        }
        else {
LAB_002dba80:
          FUN_002d1f40(4,8,0);
          piVar2 = g_lmapScene;
          g_lmapScene[0x74] = 8;
          DAT_005f17ac = 0;
          DAT_005f17c2 = 0;
          piVar2[0x8a] = 5;
          piVar2[0x75] = 0;
          piVar2[0x8e] = 5;
          piVar2[0x90] = (int)temp_v10;
          *(unsigned char *)(piVar2 + 0x8f) = 1;
          FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
        }
        piVar2 = g_lmapScene;
        g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
        DAT_005f19d4 = 1;
        DAT_005f19d8 = (float)piVar2[0x7c];
        DAT_005f19dc = (float)piVar2[0x7d];
        DAT_005f19e0 = (float)piVar2[0x7e];
        DAT_005f19e4 = piVar2[0x86];
        DAT_005f19e8 = 1;
        if (*(float *)(temp_v0 + 0x1528) <= temp_v9) {
          piVar2[0x74] = 8;
          DAT_005f17ac = 0;
          DAT_005f17c2 = 0;
          piVar2[0x8a] = 5;
          piVar2[0x75] = 0;
          piVar2[0x8e] = 5;
          piVar2[0x90] = (int)temp_v10;
          *(unsigned char *)(piVar2 + 0x8f) = 1;
          FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
        }
        piVar2 = g_lmapScene;
        if (DAT_005f161d != '\0') {
          g_lmapScene[0x74] = 8;
          DAT_005f17ac = 0;
          DAT_005f17c2 = 0;
          piVar2[0x8a] = 5;
          piVar2[0x75] = 0;
          piVar2[0x8e] = 5;
          piVar2[0x90] = (int)temp_v10;
          *(unsigned char *)(piVar2 + 0x8f) = 1;
          DAT_005f19e8 = 0;
          FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
          piVar2 = g_lmapScene;
        }
        goto joined_r0x002dbf24;
      }
      temp_v0 = *g_lmapScene;
      if (((temp_v0 == 8 || temp_v0 == 10) || (temp_v0 == 0xc || temp_v0 == 0xe)) ||
         (temp_v0 == 0x14 || temp_v0 == 0x16)) goto LAB_002db724;
      goto LAB_002dcd94;
    case 4:
      if (DAT_005f161c != '\0') {
        temp_v0 = *g_lmapScene;
        if (((temp_v0 == 8 || temp_v0 == 10) || (temp_v0 == 0xc || temp_v0 == 0xe)) ||
           (temp_v0 == 0x14 || temp_v0 == 0x16)) goto LAB_002db724;
        goto LAB_002dcd94;
      }
      DAT_0058128c = DAT_0058128c + 0.7f;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      temp_v9 = (float)g_lmapScene[0x82];
      distSpatial();
      temp_v13 = 70.0f;
      temp_v21 = g_lmapScene[0x7c];
      temp_v22 = g_lmapScene[0x7d];
      iStack_a8 = g_lmapScene[0x7e];
      temp_v17 = DAT_0058128c / DAT_005f19ac;
      FUN_001bc124();
      piVar2 = g_lmapScene;
      g_lmapScene[0x7d] = (int)((float)g_lmapScene[0x7d] + temp_v17 * DAT_005f19a8);
      temp_v17 = (float)piVar2[0x86] * temp_v11;
      FUN_001bc124();
      piVar2 = g_lmapScene;
      g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v17 * temp_v13);
      temp_v17 = (float)piVar2[0x86] * temp_v11;
      FUN_001bbf0c();
      piVar2 = g_lmapScene;
      g_lmapScene[0x7e] = (int)((float)g_lmapScene[0x7e] + temp_v17 * temp_v13);
      temp_v24 = (float)piVar2[0x7d] + (float)piVar2[0x77] * 30.0f;
      piVar2[0x7d] = (int)temp_v24;
      temp_v23 = piVar2[0x7c];
      temp_v25 = piVar2[0x7e];
      temp_v24 = temp_v24 + 30.0f;
      piVar2 = &temp_v23;
      FUN_002826dc(piVar2,&temp_v21,0,1);
      if (piVar2 == (int *)0x0) {
        piVar2 = &temp_v23;
        FUN_0025ef68(piVar2,&temp_v21,1);
        if (piVar2 != (int *)0x0) goto LAB_002dbd84;
      }
      else {
LAB_002dbd84:
        FUN_002d1f40(4,8,0);
        piVar2 = g_lmapScene;
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 5;
        piVar2[0x75] = 0;
        piVar2[0x8e] = 5;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
        FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
      }
      piVar2 = g_lmapScene;
      DAT_005f19d4 = 1;
      DAT_005f19d8 = (float)g_lmapScene[0x7c];
      DAT_005f19dc = (float)g_lmapScene[0x7d];
      DAT_005f19e0 = (float)g_lmapScene[0x7e];
      DAT_005f19e4 = g_lmapScene[0x86];
      DAT_005f19e8 = 1;
      if (*(float *)(temp_v0 + 0x1528) <= temp_v9) {
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 5;
        piVar2[0x75] = 0;
        piVar2[0x8e] = 5;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
        FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
      }
      piVar2 = g_lmapScene;
      if (DAT_005f161d != '\0') {
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 5;
        piVar2[0x75] = 0;
        piVar2[0x8e] = 5;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        DAT_005f19e8 = 0;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
        FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
        piVar2 = g_lmapScene;
      }
joined_r0x002dbf24:
      g_lmapScene = piVar2;
      if (DAT_005f1ad6 != '\0') {
        piVar2[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 0xb;
        piVar2[0x75] = 0;
        piVar2[0x90] = (int)temp_v10;
        piVar2[0x8e] = 0xb;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),3,2);
        temp_v3 = 2;
        temp_v5 = *(unsigned int *)(g_lmapScene[99] + 4);
        FUN_003fd7c0(temp_v5,temp_v3,2);
      }
      break;
    case 5:
      temp_v0 = g_lmapScene[0x75];
      g_lmapScene[0x75] = temp_v0 + 1;
      if (temp_v0 + 1 >= 2) {
        piVar2[0x74] = 6;
        piVar2[0x75] = 0;
      }
      if (DAT_005f161d != '\0') {
        piVar2[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 5;
        piVar2[0x75] = 0;
        piVar2[0x8e] = 5;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        DAT_005f19e8 = 0;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),2);
        FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),1,2);
      }
      piVar2 = g_lmapScene;
      if (DAT_005f1ad6 != '\0') {
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 0xb;
        piVar2[0x75] = 0;
        piVar2[0x90] = (int)temp_v10;
        piVar2[0x8e] = 0xb;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),3,2);
        temp_v3 = 2;
        temp_v5 = *(unsigned int *)(g_lmapScene[99] + 4);
        FUN_003fd7c0(temp_v5,temp_v3,2);
      }
      break;
    case 6:
      if (DAT_005f161c != '\0') {
        temp_v0 = *g_lmapScene;
        if (((temp_v0 == 8 || temp_v0 == 10) || (temp_v0 == 0xc || temp_v0 == 0xe)) ||
           (temp_v0 == 0x14 || temp_v0 == 0x16)) goto LAB_002db724;
        goto LAB_002dcd94;
      }
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19d4 = 1;
      DAT_005f19d8 = (float)piVar2[0x7c];
      DAT_005f19dc = (float)piVar2[0x7d];
      DAT_005f19e0 = (float)piVar2[0x7e];
      DAT_005f19e4 = piVar2[0x13];
      DAT_005f19e8 = 1;
      if (piVar2[0x75] >= 2) {
        piVar2[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 0xb;
        piVar2[0x75] = 0;
        piVar2[0x90] = (int)temp_v10;
        piVar2[0x8e] = 0xb;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),3,2);
        FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),2);
      }
      piVar2 = g_lmapScene;
      if (DAT_005f1ad6 != '\0') {
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar2[0x8a] = 0xb;
        piVar2[0x75] = 0;
        piVar2[0x90] = (int)temp_v10;
        piVar2[0x8e] = 0xb;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),3,2);
        temp_v3 = 2;
        temp_v5 = *(unsigned int *)(g_lmapScene[99] + 4);
        FUN_003fd7c0(temp_v5,temp_v3,2);
      }
      break;
    case 8:
      VectorSignedToFloat(g_lmapScene[0x75],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3f34();
      piVar2 = g_lmapScene;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19e8 = 0;
      if (piVar2[0x8a] == 0xb) {
        if (piVar2[0x75] == 1) {
          soundAllocateSpatialActor(0x10002eb);
        }
        if (g_lmapScene[0x75] == 5) {
          FUN_003d4ed8(0x1000237);
        }
        if (g_lmapScene[0x75] == 0xf) {
          FUN_003d4ed8(0x1000238);
        }
        if (g_lmapScene[0x75] == 0x23) {
          FUN_003d4ed8(0x1000239);
        }
        if (g_lmapScene[0x75] == 0x36) {
          soundAllocateSpatialActor(0x10002ec);
        }
      }
      if (g_lmapScene[0x8a] == 5) {
        if (g_lmapScene[0x75] == 0x19) {
          soundAllocateSpatialActor(0x10002ed);
          goto LAB_002dc4e4;
        }
      }
      else {
LAB_002dc4e4:
        if (g_lmapScene[0x8a] == 2) {
          g_lmapScene[0x91] = temp_v20;
        }
      }
      temp_v2 = *(int *)(g_lmapScene[0x60] + 4);
      temp_v0 = FUN_004ff98c(temp_v2);
      if (temp_v0 == 5) {
        if (g_lmapScene[0x75] == 0x32) {
          FUN_0027376c(3);
          FUN_00294774(3);
        }
        piVar2 = g_lmapScene;
        if (g_lmapScene[0x75] >= 0x37) {
          *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 1;
          temp_v2 = *(int *)(piVar2[99] + 4);
          *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 1;
        }
      }
      temp_v0 = FUN_004ff98c(temp_v2);
      if (temp_v0 == 0xb) {
        if (g_lmapScene[0x75] == 0x56) {
          FUN_0027376c(3);
          FUN_00294774(3);
        }
        piVar2 = g_lmapScene;
        if (g_lmapScene[0x75] >= 0x5b) {
          *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 1;
          temp_v2 = *(int *)(piVar2[99] + 4);
          *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 1;
        }
      }
      temp_v0 = FUN_004ff98c(temp_v2);
      if (temp_v0 == 2) {
        if (g_lmapScene[0x75] == 0x2d) {
          FUN_0027376c(3);
        }
        piVar2 = g_lmapScene;
        if (g_lmapScene[0x75] >= 0x32) {
          *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 1;
          *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) | 1;
        }
        FUN_00294774(3);
      }
      temp_v5 = *(unsigned int *)(g_lmapScene[0x60] + 4);
      temp_v0 = FUN_004ff98c(temp_v5);
      if (((temp_v0 == 5) || (temp_v0 = FUN_004ff98c(temp_v5), temp_v0 == 0xb)) ||
         (temp_v0 = FUN_004ff98c(temp_v5), temp_v0 == 2)) {
        temp_v0 = FUN_004ffa14(temp_v5);
        piVar2 = g_lmapScene;
joined_r0x002dc288:
        g_lmapScene = piVar2;
        if (temp_v0 != 0) {
          *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) & 0xfffffffe;
          *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) =
               *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) & 0xfffffffe;
          DAT_005f19d4 = 0;
          DAT_005f19d8 = (float)piVar2[0x7c];
          DAT_005f19dc = (float)piVar2[0x7d];
          DAT_005f19e0 = (float)piVar2[0x7e];
          DAT_005f19e4 = piVar2[0x13];
          DAT_005f19e8 = 0;
          piVar2[0x74] = 9;
          piVar2[0x8a] = 1;
          piVar2[0x90] = (int)temp_v10;
          piVar2[0x75] = 0;
          piVar2[0x92] = 0;
          piVar2[0x8e] = 1;
          FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),0,2);
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),0,2);
          *(unsigned char *)(g_lmapScene + 0x8f) = 1;
        }
      }
      break;
    case 9:
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19e8 = 0;
      temp_v17 = (float)piVar2[9];
      temp_v13 = (float)piVar2[7];
      temp_v15 = (float)piVar2[8];
      temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bc124();
      temp_v13 = temp_v13 + temp_v9 * DAT_005f19b8;
      temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bbf0c();
      temp_v17 = temp_v17 + temp_v9 * DAT_005f19b8;
      temp_v9 = temp_v15 + DAT_005f1aa0 + temp_v12;
      controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[0x60] + 4));
      controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
      piVar2 = g_lmapScene;
      pfVar12 = (float *)(g_lmapScene + 0x7c);
      g_lmapScene[0x7e] = (int)temp_v17;
      *pfVar12 = temp_v13;
      piVar2[0x7d] = (int)temp_v9;
      DAT_005f19d8 = temp_v13;
      DAT_005f19dc = temp_v9;
      DAT_005f19e0 = temp_v17;
      if (piVar2[0x75] == 0x50) {
        piVar2[0x8e] = 0;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
      }
      temp_v5 = *(unsigned int *)(piVar2[0x60] + 4);
      temp_v0 = FUN_004ff98c(temp_v5);
      if ((temp_v0 == 1) && (temp_v0 = FUN_004ffa14(temp_v5), piVar2 = g_lmapScene, temp_v0 != 0)) {
        if (g_lmapScene[0x8e] == 0) {
          g_lmapScene[0x92] = 0;
          DAT_0058128c = temp_v10;
          piVar2[0x91] = (int)temp_v10;
          piVar2[0x8c] = 0;
          piVar2[0x8a] = 0;
          piVar2[0x74] = 1;
          piVar2[0x75] = 0;
          piVar2[0x90] = temp_v1;
          *(unsigned char *)(piVar2 + 0x8f) = 1;
          temp_v3 = 0;
          temp_v5 = *(unsigned int *)(piVar2[99] + 4);
          FUN_003fd7c0(temp_v5,temp_v3,2);
          break;
        }
        g_lmapScene[0x8e] = 0;
        piVar2[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar2 + 0x8f) = 1;
      }
      break;
    case 10:
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      piVar2[0x91] = (int)temp_v10;
      if (DAT_005f19e8 == 0) {
        temp_v13 = (float)piVar2[7];
        temp_v17 = (float)piVar2[8];
        temp_v15 = (float)piVar2[9];
        temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bc124();
        temp_v13 = temp_v13 + temp_v9 * DAT_005f19b8;
        temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bbf0c();
        piVar2 = g_lmapScene;
        temp_v17 = temp_v17 + DAT_005f1aa0;
        temp_v9 = temp_v9 * DAT_005f19b8;
        g_lmapScene[0x7c] = (int)temp_v13;
        piVar2[0x7d] = (int)(temp_v17 + temp_v12);
        piVar2[0x7e] = (int)(temp_v15 + temp_v9);
        piVar2[0x86] = piVar2[0x13];
        DAT_005f19d4 = 1;
        DAT_005f19d8 = (float)piVar2[0x7c];
        DAT_005f19dc = (float)piVar2[0x7d];
        DAT_005f19e0 = (float)piVar2[0x7e];
        DAT_005f19e4 = piVar2[0x86];
        DAT_005f19e8 = 1;
      }
      if (g_lmapScene[0x75] == 1) {
        soundAllocateSpatialActor(0x10002eb);
      }
      if (g_lmapScene[0x75] == 5) {
        FUN_003d4ed8(0x1000237);
      }
      if (g_lmapScene[0x75] == 0xf) {
        FUN_003d4ed8(0x1000238);
      }
      if (g_lmapScene[0x75] == 0x1e) {
        FUN_003d4ed8(0x1000239);
      }
      if (g_lmapScene[0x75] == 0x36) {
        soundAllocateSpatialActor(0x10002ec);
      }
      if (g_lmapScene[0x75] == 0x5a) {
        FUN_0027376c(3);
        FUN_00294774(3);
      }
      piVar2 = g_lmapScene;
      if (g_lmapScene[0x75] >= 0x5f) {
        *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
             *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 1;
        temp_v0 = *(int *)(piVar2[99] + 4);
        *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
      }
      temp_v5 = *(unsigned int *)(piVar2[0x60] + 4);
      temp_v0 = FUN_004ff98c(temp_v5);
      if (temp_v0 == 4) {
        temp_v0 = FUN_004ffa14(temp_v5);
        piVar2 = g_lmapScene;
        goto joined_r0x002dc288;
      }
    }
  }
  piVar2 = g_lmapScene;
  if (g_lmapScene[0x74] == 0xf) {
    DAT_005f19e8 = 0;
    g_lmapScene[0x91] = (int)temp_v10;
    piVar2[0x75] = piVar2[0x75] + 1;
    temp_v13 = (float)piVar2[7];
    temp_v17 = (float)piVar2[8];
    temp_v15 = (float)piVar2[9];
    temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bc124();
    temp_v13 = temp_v13 + temp_v9 * DAT_005f19b8;
    temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bbf0c();
    piVar2 = g_lmapScene;
    temp_v9 = temp_v9 * DAT_005f19b8;
    temp_v17 = temp_v17 + DAT_005f1aa0;
    g_lmapScene[0x7c] = (int)temp_v13;
    piVar2[0x7d] = (int)(temp_v17 + temp_v12);
    piVar2[0x7e] = (int)(temp_v15 + temp_v9);
    FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),1,2);
    piVar2 = g_lmapScene;
    if (g_lmapScene[0x8a] != 6) {
      g_lmapScene[0x8a] = 6;
      temp_v5 = *(unsigned int *)(piVar2[99] + 4);
      FUN_003fd7c0(temp_v5,0,2);
      FUN_003fd924(temp_v5,6,2);
    }
    else if (g_lmapScene[0x75] == 0x3c) {
      g_lmapScene[0x74] = 0xb;
      piVar2[0x8a] = 2;
      *(unsigned char *)(piVar2 + 0x8b) = 1;
      piVar2[0x75] = 0;
      FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),1);
    }
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[0x60] + 4));
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
  }
  if (g_lmapScene[0x74] == 0xb) {
    DAT_005f19e8 = 0;
    temp_v13 = (float)g_lmapScene[7];
    temp_v17 = (float)g_lmapScene[8];
    temp_v15 = (float)g_lmapScene[9];
    temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bc124();
    temp_v13 = temp_v13 + temp_v9 * DAT_005f19b8;
    temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bbf0c();
    piVar2 = g_lmapScene;
    temp_v17 = temp_v17 + DAT_005f1aa0;
    temp_v9 = temp_v9 * DAT_005f19b8;
    g_lmapScene[0x7c] = (int)temp_v13;
    piVar2[0x7d] = (int)(temp_v17 + temp_v12);
    piVar2[0x7e] = (int)(temp_v15 + temp_v9);
    piVar2[0x91] = temp_v20;
    if (piVar2[0x8a] != 2) {
      piVar2[0x8a] = 2;
      FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),1,2);
      FUN_003fd924(*(unsigned int *)(g_lmapScene[99] + 4),2);
    }
    else {
      piVar2[0x75] = piVar2[0x75] + 1;
      temp_v0 = FUN_004ff98c(*(unsigned int *)(piVar2[0x60] + 4));
      if (temp_v0 == 2) {
        if (g_lmapScene[0x75] == 0x2d) {
          FUN_0027376c(3);
        }
        piVar2 = g_lmapScene;
        if (g_lmapScene[0x75] >= 0x32) {
          *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 1;
          *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) | 1;
        }
        FUN_00294774(3);
      }
      temp_v5 = *(unsigned int *)(g_lmapScene[0x60] + 4);
      temp_v0 = FUN_004ff98c(temp_v5);
      if ((temp_v0 == 2) && (temp_v0 = FUN_004ffa14(temp_v5), piVar2 = g_lmapScene, temp_v0 != 0)) {
        DAT_005f19d4 = 0;
        DAT_005f19d8 = (float)g_lmapScene[0x7c];
        DAT_005f19dc = (float)g_lmapScene[0x7d];
        DAT_005f19e0 = (float)g_lmapScene[0x7e];
        DAT_005f19e4 = g_lmapScene[0x13];
        DAT_005f19e8 = 0;
        g_lmapScene[0x74] = 0;
        *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) | 3;
        *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) | 3;
        piVar2[0x75] = 0;
      }
    }
  }
  if (g_lmapScene[0x74] == 0x11) {
    temp_v5 = *(unsigned int *)(g_lmapScene[0x60] + 4);
    temp_v0 = FUN_004ff98c(temp_v5);
    if ((temp_v0 != 5) || (temp_v0 = FUN_004ffa14(temp_v5), temp_v0 == 0)) goto LAB_002dccc8;
    g_lmapScene[0x74] = 0x12;
LAB_002dccd8:
    piVar2 = g_lmapScene;
    *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 3;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) | 3;
    if (DAT_005f1adc == '\0') {
      *(unsigned int *)(temp_v31 + 0x9c) = 1;
      DAT_005f19d4 = 0;
      DAT_005f19d8 = (float)piVar2[0x7c];
      DAT_005f19dc = (float)piVar2[0x7d];
      DAT_005f19e0 = (float)piVar2[0x7e];
      DAT_005f19e4 = piVar2[0x13];
      DAT_005f19e8 = 0;
      piVar2[0x74] = 9;
      piVar2[0x8a] = 1;
      piVar2[0x90] = (int)temp_v10;
      piVar2[0x75] = 0;
      piVar2[0x92] = 0;
      piVar2[0x8e] = 1;
      FUN_003fd7c0(*(unsigned int *)(piVar2[0x60] + 4),0,2);
      FUN_003fd7c0(*(unsigned int *)(g_lmapScene[99] + 4),0,2);
      *(unsigned char *)(g_lmapScene + 0x8f) = 1;
    }
  }
  else {
LAB_002dccc8:
    if (g_lmapScene[0x74] == 0x12) goto LAB_002dccd8;
  }
LAB_002dcd94:
  temp_v5 = *(unsigned int *)(g_lmapScene[0x60] + 4);
  controllerSetDestination(temp_v5,g_lmapScene + 0x7c);
  temp_v0 = FUN_004ff98c(temp_v5);
  if ((temp_v0 != g_lmapScene[0x8a]) || ((char)g_lmapScene[0x8b] != '\0')) {
    FUN_003fd924(temp_v5,g_lmapScene[0x8a],2);
    *(unsigned char *)(g_lmapScene + 0x8b) = 0;
  }
  temp_v29 = g_lmapScene[0x7c];
  iStack_68 = g_lmapScene[0x7e];
  temp_v30 = (float)g_lmapScene[0x7d] + (float)g_lmapScene[0x91];
  temp_v5 = *(unsigned int *)(g_lmapScene[99] + 4);
  controllerSetDestination(temp_v5,&temp_v29);
  temp_v0 = FUN_004ff98c(temp_v5);
  if ((temp_v0 != g_lmapScene[0x8e]) || ((char)g_lmapScene[0x8f] != '\0')) {
    FUN_003fd924(temp_v5,g_lmapScene[0x8e],2);
    animationSelectClip(temp_v5,0,2);
    *(unsigned char *)(g_lmapScene + 0x8f) = 0;
  }
  piVar2 = g_lmapScene;
  if (g_lmapScene[0x74] == 0xe) {
    *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) & 0xfffffffc;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) & 0xfffffffc;
    DAT_005f19e8 = 0;
    DAT_0058128c = DAT_0058128c + (float)temp_v16;
    if (DAT_005f1c7e != '\0') {
      DAT_0058128c = temp_v10;
    }
    piVar2[0x91] = (int)temp_v10;
    temp_v14 = romwright_piece_4_4(temp_v18,piVar2[0x95]);
    temp_v0 = piVar2[0x97];
    temp_v17 = (float)piVar2[0x96] - 20.0f;
    temp_v9 = DAT_0058128c;
    FUN_001bc124();
    piVar2 = g_lmapScene;
    g_lmapScene[0x7c] = (int)temp_v14;
    piVar2[0x7d] = (int)(temp_v17 + temp_v9 * (float)((unsigned long long)temp_v16 >> 0x20));
    piVar2[0x7e] = temp_v0;
    if (*(char *)((int)piVar2 + 0x23d) == '\x01') {
      mathPositionHeadingDegrees();
    }
    temp_v18 = (int)((unsigned long long)temp_v14 >> 0x20);
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[0x60] + 4));
  }
  piVar2 = g_lmapScene;
  if (g_lmapScene[0x74] == 0x10) {
    *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) & 0xfffffffc;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) & 0xfffffffc;
    DAT_0058128c = DAT_0058128c + (float)temp_v16;
    piVar2[0x75] = piVar2[0x75] + 1;
    if (DAT_005f1c7e != '\0') {
      DAT_0058128c = temp_v10;
    }
    if (temp_v26[200] == '\0') {
      if ((char)piVar2[0x1b] != '\0') {
        temp_v0 = 3;
        piVar2[0x8a] = 3;
        piVar2[0x8c] = 0;
        piVar2[0x90] = temp_v18;
LAB_002dd03c:
        piVar2[0x8e] = temp_v0;
      }
      else {
        piVar2[0x8c] = piVar2[0x8c] + 1;
        if ((piVar2[0x8a] == 9) &&
           (temp_v0 = FUN_004ffa14(*(unsigned int *)(piVar2[0x60] + 4)), temp_v0 != 0)) {
          g_lmapScene[0x8c] = 0;
        }
        else {
          piVar2 = g_lmapScene;
          if (g_lmapScene[0x8c] >= 901) {
            temp_v0 = 9;
            g_lmapScene[0x90] = (int)temp_v10;
            piVar2[0x8a] = 9;
            goto LAB_002dd03c;
          }
        }
        piVar2 = g_lmapScene;
        g_lmapScene[0x8a] = 0;
        piVar2[0x90] = temp_v18;
        piVar2[0x8e] = 0;
      }
    }
    piVar2 = g_lmapScene;
    temp_v19 = (float)((unsigned long long)temp_v16 >> 0x20);
    g_lmapScene[0x91] = (int)temp_v10;
    temp_v17 = (float)piVar2[7];
    temp_v15 = (float)piVar2[8];
    temp_v13 = (float)piVar2[9];
    temp_v9 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bc124();
    temp_v17 = temp_v17 + temp_v9 * DAT_005f19b8;
    temp_v11 = (*(float *)(g_lmapView + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bbf0c();
    temp_v13 = temp_v13 + temp_v11 * DAT_005f19b8;
    temp_v12 = temp_v15 + DAT_005f1aa0 + temp_v12;
    temp_v11 = DAT_0058128c;
    FUN_001bc124();
    piVar2 = g_lmapScene;
    g_lmapScene[0x7c] = (int)temp_v17;
    piVar2[0x7d] = (int)(temp_v12 + temp_v11 * temp_v19);
    piVar2[0x7e] = (int)temp_v13;
    controllerSetRotationEulerDegrees(*(unsigned int *)(piVar2[0x60] + 4));
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
  }
  piVar2 = g_lmapScene;
  if (g_lmapScene[0x74] == 0xc) {
    *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) & 0xfffffffc;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) & 0xfffffffc;
    piVar2[0x75] = piVar2[0x75] + 1;
    DAT_005f19e8 = 0;
    temp_v16 = CONCAT44(temp_v10,piVar2[0x95]);
    temp_v10 = (float)piVar2[0x96] - 20.0f;
    temp_v0 = piVar2[0x97];
    controllerSetRotationEulerDegrees(*(unsigned int *)(piVar2[0x60] + 4));
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
    piVar2 = g_lmapScene;
    g_lmapScene[0x7c] = (int)temp_v16;
    piVar2[0x7d] = (int)temp_v10;
    piVar2[0x7e] = temp_v0;
    if (*(char *)((int)piVar2 + 0x23d) == '\x01') {
      mathPositionHeadingDegrees();
    }
    temp_v5 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[0x60] + 4));
    controllerSetRotationEulerDegrees(*(unsigned int *)(g_lmapScene[99] + 4));
    if (g_lmapScene[0x75] == 1) {
      FUN_0027376c(1);
      FUN_00294774(1);
    }
    temp_v0 = FUN_004ffa14(*(unsigned int *)(g_lmapScene[0x60] + 4));
    piVar2 = g_lmapScene;
    if (temp_v0 != 0) {
      *(unsigned int *)(*(int *)(g_lmapScene[99] + 4) + 4) =
           *(unsigned int *)(*(int *)(g_lmapScene[99] + 4) + 4) & 0xfffffffc;
      DAT_0058128c = (float)temp_v5;
      piVar2[0x8a] = 0;
      piVar2[0x74] = 0xe;
      piVar2[0x75] = 0;
      piVar2[0x90] = temp_v1;
      piVar2[0x8e] = 0;
      *(unsigned char *)(piVar2 + 0x8f) = 1;
      return;
    }
  }
  piVar2 = g_lmapScene;
  if (g_lmapScene[0x74] == 0xd) {
    g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
    DAT_005f19e8 = 0;
    *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(piVar2[0x60] + 4) + 4) & 0xfffffffc;
    *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar2[99] + 4) + 4) & 0xfffffffc;
    if (piVar2[0x75] == 0x11) {
      FUN_0027376c(2);
      FUN_00294774(2);
    }
    temp_v0 = FUN_004ffa14(*(unsigned int *)(g_lmapScene[0x60] + 4));
    piVar2 = g_lmapScene;
    if (temp_v0 != 0) {
      piVar5 = g_lmapScene + 0x74;
      g_lmapScene[0x8a] = 0;
      *piVar5 = 0xe;
      piVar2[0x75] = 0;
      piVar2[0x90] = temp_v1;
      piVar2[0x8e] = 0;
      *(unsigned char *)(piVar2 + 0x8f) = 1;
      return;
    }
  }
  return;
}

} /* extern "C" */
