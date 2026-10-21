/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003541c0` (_code @ 0x3541c0, 0x1240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ffaf0(...);

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_001f3f34(void);
int FUN_0025ef68(...);
int FUN_002826dc(...);
int FUN_002b5cb4(void);
int FUN_002d1f40(...);
int FUN_003250ac(int *);
int mathPositionHeadingDegrees(void);
int FUN_003d4ed8(...);
int controllerSetDestination(...);
int FUN_003fd7c0(...);
int FUN_003fd924(...);
int FUN_003fdb18(...);
int VectorSignedToFloat(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
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
extern signed char DAT_005f1adc; /* 0x5f1adc */
extern signed char DAT_005f1c7e; /* 0x5f1c7e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_002826dc. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fdb18. */
extern int FUN_004ff970(unsigned int);
extern int FUN_004ff98c(unsigned int);
extern int FUN_004ff9b4(unsigned int);
extern int FUN_004ffa14(unsigned int);
/* Supplied declaration required: FUN_004ffaf0. */


void FUN_003541c0(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int temp_v15;
  float temp_v16;
  int temp_v17;
  int iStack_7c;
  int temp_v18;
  float temp_v19;
  int temp_v20;
  int temp_v21;
  
  piVar5 = &temp_v15;
  piVar6 = &temp_v15;
  temp_v0 = gameFlagsGetBlock();
  piVar4 = g_lmapScene;
  if (((*g_lmapScene == 0xd || *g_lmapScene == 0x15) && (g_lmapScene[99] != 0)) &&
     (g_lmapScene[1] == 0xb)) {
    temp_v1 = *(int *)(g_lmapScene[99] + 4);
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
  }
  temp_v21 = temp_v0 + 0x1000;
  temp_v11 = 0.017453292f;
  temp_v12 = 175.0f;
  temp_v10 = 0.0f;
  if (*(int *)(temp_v0 + 0x109c) != 0) {
    temp_v1 = 0;
    if (DAT_005f1adc != '\0') {
      temp_v1 = piVar4[0x74];
    }
    if ((DAT_005f1adc != '\0' && temp_v1 != 0x11) && temp_v1 != 0x12) {
      piVar4[0x74] = 0x11;
      DAT_005f19e8 = 0;
      *(unsigned int *)(temp_v0 + 0x109c) = 0;
      DAT_005f17ac = 0;
      DAT_005f17c2 = 0;
      piVar4[0x75] = 0;
      *(unsigned char *)(piVar4 + 0x8f) = 1;
      FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
    }
    piVar4 = g_lmapScene;
    switch(g_lmapScene[0x74]) {
    case 1:
      temp_v9 = 180.0f;
      DAT_0058128c = DAT_0058128c + 0.2f;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      piVar4[0x91] = (int)temp_v10;
      temp_v7 = (float)piVar4[9];
      temp_v8 = (float)piVar4[7];
      temp_v13 = (float)piVar4[8];
      temp_v6 = ((float)piVar4[0x13] + 180.0f) * temp_v11;
      FUN_001bc124();
      temp_v14 = 50.0f;
      temp_v8 = temp_v8 + temp_v6 * 50.0f;
      temp_v9 = ((float)g_lmapScene[0x13] + temp_v9) * temp_v11;
      FUN_001bbf0c();
      temp_v7 = temp_v7 + temp_v9 * temp_v14;
      temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v9 * DAT_005f19b8;
      temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bbf0c();
      temp_v7 = temp_v7 + temp_v9 * DAT_005f19b8;
      temp_v6 = temp_v13 + DAT_005f1aa0 + temp_v12;
      temp_v9 = DAT_0058128c;
      FUN_001bc124();
      piVar4 = g_lmapScene;
      g_lmapScene[0x7c] = (int)temp_v8;
      piVar4[0x7d] = (int)(temp_v6 + temp_v9 * 8.0f);
      piVar4[0x7e] = (int)temp_v7;
      if (*(char *)((int)piVar4 + 0x23d) == '\x01') {
        mathPositionHeadingDegrees();
      }
      FUN_003fdb18(*(unsigned int *)(g_lmapScene[99] + 4));
      break;
    case 2:
      g_lmapScene[0x91] = (int)temp_v10;
      if (DAT_005f161c != '\0') {
        controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
        return;
      }
      DAT_0058128c = DAT_0058128c + 0.2f;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      temp_v1 = piVar4[0x75];
      piVar4[0x75] = temp_v1 + 1;
      if (temp_v1 + 1 == 1) {
        temp_v7 = (float)piVar4[7];
        temp_v8 = (float)piVar4[8];
        temp_v6 = (float)piVar4[9];
        piVar4[0x82] = (int)temp_v7;
        piVar4[0x83] = (int)temp_v8;
        piVar4[0x84] = (int)temp_v6;
        temp_v13 = 180.0f;
        temp_v9 = ((float)piVar4[0x13] + 180.0f) * temp_v11;
        FUN_001bc124();
        temp_v14 = 50.0f;
        temp_v7 = temp_v7 + temp_v9 * 50.0f;
        temp_v9 = ((float)g_lmapScene[0x13] + temp_v13) * temp_v11;
        FUN_001bbf0c();
        temp_v6 = temp_v6 + temp_v9 * temp_v14;
        temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bc124();
        temp_v7 = temp_v7 + temp_v9 * DAT_005f19b8;
        temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bbf0c();
        temp_v6 = temp_v6 + temp_v9 * DAT_005f19b8;
        temp_v8 = temp_v8 + DAT_005f1aa0 + temp_v12;
        temp_v9 = temp_v10;
        FUN_001bc124();
        piVar4 = g_lmapScene;
        piVar5 = g_lmapScene + 7;
        g_lmapScene[0x7c] = (int)temp_v7;
        piVar4[0x7d] = (int)(temp_v8 + temp_v10 * 8.0f);
        piVar4[0x7e] = (int)temp_v6;
        piVar4[0x7f] = *piVar5;
        piVar4[0x80] = piVar4[8];
        piVar4[0x81] = piVar4[9];
        temp_v6 = (float)piVar4[0x13] * temp_v11;
        temp_v10 = temp_v9;
        FUN_001bc124();
        piVar4 = g_lmapScene;
        g_lmapScene[0x7f] = (int)((float)g_lmapScene[0x7f] + temp_v6 * *(float *)(temp_v0 + 0x1528));
        temp_v9 = (float)piVar4[0x13] * temp_v11;
        FUN_001bbf0c();
        piVar4 = g_lmapScene;
        piVar5 = g_lmapScene + 0x76;
        g_lmapScene[0x81] = (int)((float)g_lmapScene[0x81] + temp_v9 * *(float *)(temp_v0 + 0x1528));
        piVar4[0x80] = (int)((float)piVar4[0x80] + 120.0f);
        FUN_003250ac(piVar5);
        mathPositionHeadingDegrees();
        piVar4 = g_lmapScene;
        g_lmapScene[0x86] = (int)temp_v7;
        piVar4[0x87] = piVar4[0x13];
        piVar4[0x79] = DAT_005f19a0;
        FUN_003fdb18(*(unsigned int *)(piVar4[99] + 4));
        DAT_0058128c = temp_v10;
        g_lmapScene[0x74] = 3;
      }
      if (DAT_005f161d == '\0') break;
      goto LAB_00354dac;
    case 3:
      if (DAT_005f161c != '\0') {
        controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
        return;
      }
      DAT_0058128c = DAT_0058128c + 1.0f;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      temp_v9 = (float)g_lmapScene[0x82];
      FUN_002b5cb4();
      temp_v6 = (float)g_lmapScene[0x79];
      temp_v16 = (float)g_lmapScene[0x7c];
      temp_v17 = g_lmapScene[0x7d];
      iStack_7c = g_lmapScene[0x7e];
      if (DAT_005f19a4 != '\x01') {
        if (DAT_005f19a4 == '\x02') {
          temp_v7 = (float)g_lmapScene[0x76];
          temp_v3 = temp_v7 < temp_v10;
          temp_v4 = temp_v7 == temp_v10;
          temp_v5 = (temp_v7 != temp_v7) || (temp_v10 != temp_v10);
          if (!temp_v4 && !temp_v3) {
            temp_v8 = (float)g_lmapScene[0x78];
            temp_v3 = temp_v8 < temp_v10;
            temp_v4 = temp_v8 == temp_v10;
            temp_v5 = (temp_v8 != temp_v8) || (temp_v10 != temp_v10);
          }
          if (!(temp_v4 || temp_v3 != temp_v5)) {
            temp_v7 = DAT_0058128c / DAT_005f19ac;
            FUN_001bc124();
            g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] - temp_v7 * DAT_005f19a8);
            temp_v7 = DAT_0058128c / DAT_005f19ac;
            FUN_001bc124();
            g_lmapScene[0x7e] = (int)((float)g_lmapScene[0x7e] + temp_v7 * DAT_005f19a8);
          }
          else {
            temp_v3 = temp_v10 <= temp_v7;
            if (!temp_v3) {
              temp_v3 = temp_v10 <= (float)g_lmapScene[0x78];
            }
            if (!temp_v3) {
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v7 * DAT_005f19a8);
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              g_lmapScene[0x7e] = (int)((float)g_lmapScene[0x7e] - temp_v7 * DAT_005f19a8);
            }
            else if ((temp_v10 > temp_v7) && ((float)g_lmapScene[0x78] > temp_v10)) {
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] - temp_v7 * DAT_005f19a8);
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              temp_v7 = (float)g_lmapScene[0x7e] - temp_v7 * DAT_005f19a8;
              g_lmapScene[0x7e] = (int)temp_v7;
            }
            else if ((temp_v7 > temp_v10) && (temp_v10 > (float)g_lmapScene[0x78])) {
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v7 * DAT_005f19a8);
              temp_v7 = DAT_0058128c / DAT_005f19ac;
              FUN_001bc124();
              temp_v7 = (float)g_lmapScene[0x7e] + temp_v7 * DAT_005f19a8;
              g_lmapScene[0x7e] = (int)temp_v7;
            }
          }
        }
      }
      else {
        temp_v7 = DAT_0058128c / DAT_005f19ac;
        FUN_001bc124();
        g_lmapScene[0x7d] = (int)((float)g_lmapScene[0x7d] + temp_v7 * DAT_005f19a8);
      }
      piVar4 = g_lmapScene;
      pfVar1 = (float *)(g_lmapScene + 0x77);
      temp_v7 = (float)g_lmapScene[0x78];
      g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + (float)g_lmapScene[0x76] * temp_v6);
      piVar4[0x7d] = (int)((float)piVar4[0x7d] + *pfVar1 * temp_v6);
      piVar4[0x7e] = (int)((float)piVar4[0x7e] + temp_v7 * temp_v6);
      temp_v20 = g_lmapScene[0x7e];
      temp_v18 = g_lmapScene[0x7c];
      piVar4 = &temp_v18;
      temp_v19 = (float)g_lmapScene[0x7d] + 30.0f;
      FUN_002826dc(piVar4,&temp_v16,0);
      if (piVar4 == (int *)0x0) {
        piVar4 = &temp_v18;
        FUN_0025ef68(piVar4,&temp_v16,0);
        if (piVar4 != (int *)0x0) goto LAB_00354acc;
      }
      else {
LAB_00354acc:
        FUN_002d1f40(4,8,0);
        piVar4 = g_lmapScene;
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar4[0x75] = 0;
        piVar4[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      }
      piVar4 = g_lmapScene;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19d4 = 1;
      DAT_005f19d8 = (float)piVar4[0x7c];
      DAT_005f19dc = (float)piVar4[0x7d];
      DAT_005f19e0 = (float)piVar4[0x7e];
      DAT_005f19e4 = piVar4[0x86];
      DAT_005f19e8 = 1;
      if (*(float *)(temp_v0 + 0x1528) <= temp_v9) {
        piVar4[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar4[0x75] = 0;
        piVar4[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      }
      goto joined_r0x00354f08;
    case 4:
      if (DAT_005f161c != '\0') {
        controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
        return;
      }
      DAT_0058128c = DAT_0058128c + 0.7f;
      if (DAT_005f1c7e != '\0') {
        DAT_0058128c = temp_v10;
      }
      temp_v9 = (float)g_lmapScene[0x82];
      FUN_002b5cb4();
      temp_v7 = 70.0f;
      temp_v20 = g_lmapScene[0x7e];
      temp_v18 = g_lmapScene[0x7c];
      temp_v19 = (float)g_lmapScene[0x7d];
      temp_v6 = DAT_0058128c / DAT_005f19ac;
      FUN_001bc124();
      piVar4 = g_lmapScene;
      g_lmapScene[0x7d] = (int)((float)g_lmapScene[0x7d] + temp_v6 * DAT_005f19a8);
      temp_v6 = (float)piVar4[0x86] * temp_v11;
      FUN_001bc124();
      piVar4 = g_lmapScene;
      g_lmapScene[0x7c] = (int)((float)g_lmapScene[0x7c] + temp_v6 * temp_v7);
      temp_v6 = (float)piVar4[0x86] * temp_v11;
      FUN_001bbf0c();
      piVar4 = g_lmapScene;
      g_lmapScene[0x7e] = (int)((float)g_lmapScene[0x7e] + temp_v6 * temp_v7);
      temp_v16 = (float)piVar4[0x7d] + (float)piVar4[0x77] * 30.0f;
      piVar4[0x7d] = (int)temp_v16;
      temp_v15 = piVar4[0x7c];
      temp_v17 = piVar4[0x7e];
      temp_v16 = temp_v16 + 30.0f;
      FUN_002826dc(&temp_v15,&temp_v18,0);
      if ((piVar5 != (int *)0x0) || (FUN_0025ef68(&temp_v15,&temp_v18,0), piVar6 != (int *)0x0)) {
        FUN_002d1f40(4,8,0);
        piVar4 = g_lmapScene;
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar4[0x75] = 0;
        piVar4[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      }
      piVar4 = g_lmapScene;
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
        piVar4[0x75] = 0;
        piVar4[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      }
joined_r0x00354f08:
      if (DAT_005f161d != '\0') {
LAB_00354dac:
        piVar4 = g_lmapScene;
        g_lmapScene[0x74] = 8;
        DAT_005f17ac = 0;
        DAT_005f17c2 = 0;
        piVar4[0x75] = 0;
        piVar4[0x90] = (int)temp_v10;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        DAT_005f19e8 = 0;
        FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      }
      break;
    case 5:
      temp_v0 = g_lmapScene[0x75];
      g_lmapScene[0x75] = temp_v0 + 1;
      if (temp_v0 + 1 >= 2) {
        piVar4[0x74] = 6;
        piVar4[0x75] = 0;
      }
      controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
      return;
    case 6:
      if (DAT_005f161c == '\0') {
        g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
        DAT_005f19d4 = 1;
        DAT_005f19d8 = (float)piVar4[0x7c];
        DAT_005f19dc = (float)piVar4[0x7d];
        DAT_005f19e0 = (float)piVar4[0x7e];
        DAT_005f19e4 = piVar4[0x13];
        DAT_005f19e8 = 1;
        if (piVar4[0x75] >= 2) {
          piVar4[0x74] = 8;
          DAT_005f17ac = 0;
          DAT_005f17c2 = 0;
          piVar4[0x75] = 0;
          *(unsigned char *)(piVar4 + 0x8f) = 1;
          temp_v2 = *(unsigned int *)(piVar4[99] + 4);
          FUN_003fd7c0(temp_v2,3,2);
          g_lmapScene[0x8e] = 0xc;
          FUN_003fd924(temp_v2,0xc,2);
        }
        goto joined_r0x00354f08;
      }
      g_lmapScene[0x74] = 8;
      DAT_005f17ac = 0;
      DAT_005f17c2 = 0;
      piVar4[0x75] = 0;
      piVar4[0x90] = (int)temp_v10;
      *(unsigned char *)(piVar4 + 0x8f) = 1;
      FUN_003fd7c0(*(unsigned int *)(piVar4[99] + 4),3,2);
      break;
    case 8:
      VectorSignedToFloat(g_lmapScene[0x75],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3f34();
      piVar4 = g_lmapScene;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19e8 = 0;
      temp_v2 = *(unsigned int *)(piVar4[99] + 4);
      if (piVar4[0x8e] != 0xc) {
        if (piVar4[0x75] >= 11) {
          DAT_005f19d4 = 0;
          DAT_005f19d8 = (float)piVar4[0x7c];
          DAT_005f19dc = (float)piVar4[0x7d];
          DAT_005f19e0 = (float)piVar4[0x7e];
          DAT_005f19e4 = piVar4[0x13];
          piVar4[0x74] = 9;
          piVar4[0x90] = (int)temp_v10;
          piVar4[0x75] = 0;
          piVar4[0x92] = 0;
          temp_v2 = *(unsigned int *)(piVar4[99] + 4);
          FUN_003fd7c0(temp_v2,5,2);
          FUN_003fd924(temp_v2,3,2);
          *(unsigned char *)(g_lmapScene + 0x8f) = 1;
        }
      }
      else {
        if (piVar4[0x75] == 10) {
          FUN_003d4ed8(0x1000237);
        }
        temp_v0 = FUN_004ff98c(temp_v2);
        if ((temp_v0 == 0xc) && (temp_v0 = FUN_004ffa14(temp_v2), piVar4 = g_lmapScene, temp_v0 != 0)) {
          DAT_005f19d4 = 0;
          DAT_005f19d8 = (float)g_lmapScene[0x7c];
          DAT_005f19dc = (float)g_lmapScene[0x7d];
          DAT_005f19e0 = (float)g_lmapScene[0x7e];
          DAT_005f19e4 = g_lmapScene[0x13];
          DAT_005f19e8 = 0;
          g_lmapScene[0x74] = 9;
          piVar4[0x90] = (int)temp_v10;
          piVar4[0x75] = 0;
          piVar4[0x92] = 0;
          temp_v2 = *(unsigned int *)(piVar4[99] + 4);
          FUN_003fd7c0(temp_v2,5,2);
          FUN_003fd924(temp_v2,3,2);
          piVar4 = g_lmapScene;
          *(unsigned char *)(g_lmapScene + 0x8f) = 1;
          piVar4[0x8e] = 0;
        }
      }
      break;
    case 9:
      temp_v14 = 180.0f;
      DAT_0058128c = DAT_0058128c + 0.2f;
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      DAT_005f19e8 = 0;
      temp_v6 = (float)piVar4[7];
      temp_v8 = (float)piVar4[8];
      temp_v7 = (float)piVar4[9];
      temp_v9 = ((float)piVar4[0x13] + 180.0f) * temp_v11;
      FUN_001bc124();
      temp_v13 = 50.0f;
      temp_v6 = temp_v6 + temp_v9 * 50.0f;
      temp_v9 = ((float)g_lmapScene[0x13] + temp_v14) * temp_v11;
      FUN_001bbf0c();
      temp_v7 = temp_v7 + temp_v9 * temp_v13;
      temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bc124();
      temp_v6 = temp_v6 + temp_v9 * DAT_005f19b8;
      temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
      FUN_001bbf0c();
      temp_v7 = temp_v7 + temp_v9 * DAT_005f19b8;
      temp_v8 = temp_v8 + DAT_005f1aa0 + temp_v12;
      temp_v9 = DAT_0058128c;
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v9 * 8.0f;
      temp_v2 = *(unsigned int *)(g_lmapScene[99] + 4);
      FUN_003fdb18(temp_v2);
      piVar4 = g_lmapScene;
      g_lmapScene[0x7c] = (int)temp_v6;
      piVar4[0x7d] = (int)temp_v8;
      piVar4[0x7e] = (int)temp_v7;
      DAT_005f19d8 = temp_v6;
      DAT_005f19dc = temp_v8;
      DAT_005f19e0 = temp_v7;
      temp_v0 = FUN_004ff970(temp_v2);
      if ((temp_v0 == 5) && (temp_v0 = FUN_004ff9b4(temp_v2), piVar4 = g_lmapScene, temp_v0 != 0)) {
        g_lmapScene[0x92] = 0;
        piVar4[0x91] = (int)temp_v10;
        piVar4[0x8c] = 0;
        piVar4[0x74] = 1;
        piVar4[0x75] = 0;
        piVar4[0x90] = 0x41200000;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
        return;
      }
      break;
    case 10:
      g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
      piVar4[0x91] = (int)temp_v10;
      if (DAT_005f19e8 == 0) {
        temp_v14 = 180.0f;
        temp_v7 = (float)piVar4[7];
        temp_v6 = (float)piVar4[8];
        temp_v8 = (float)piVar4[9];
        temp_v9 = ((float)piVar4[0x13] + 180.0f) * temp_v11;
        FUN_001bc124();
        temp_v13 = 50.0f;
        temp_v7 = temp_v7 + temp_v9 * 50.0f;
        temp_v9 = ((float)g_lmapScene[0x13] + temp_v14) * temp_v11;
        FUN_001bbf0c();
        temp_v8 = temp_v8 + temp_v9 * temp_v13;
        temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bc124();
        temp_v7 = temp_v7 + temp_v9 * DAT_005f19b8;
        temp_v9 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
        FUN_001bbf0c();
        piVar4 = g_lmapScene;
        temp_v6 = temp_v6 + DAT_005f1aa0;
        temp_v9 = temp_v9 * DAT_005f19b8;
        g_lmapScene[0x7c] = (int)temp_v7;
        piVar4[0x7d] = (int)(temp_v6 + temp_v12);
        piVar4[0x7e] = (int)(temp_v8 + temp_v9);
        piVar4[0x86] = piVar4[0x13];
        DAT_005f19d4 = 1;
        DAT_005f19d8 = (float)piVar4[0x7c];
        DAT_005f19dc = (float)piVar4[0x7d];
        DAT_005f19e0 = (float)piVar4[0x7e];
        DAT_005f19e4 = piVar4[0x86];
        DAT_005f19e8 = 1;
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
      temp_v2 = *(unsigned int *)(g_lmapScene[99] + 4);
      temp_v0 = FUN_004ff98c(temp_v2);
      if ((temp_v0 == 0xd) && (temp_v0 = FUN_004ffa14(temp_v2), piVar4 = g_lmapScene, temp_v0 != 0)) {
        DAT_005f19e8 = 0;
        piVar5 = g_lmapScene + 0x74;
        DAT_0058128c = temp_v10;
        g_lmapScene[0x8c] = 0;
        *piVar5 = 8;
        piVar4[0x75] = 0;
        *(unsigned char *)(piVar4 + 0x8f) = 1;
        controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
        return;
      }
    }
  }
  piVar4 = g_lmapScene;
  if (g_lmapScene[0x74] != 0x11) {
    if (g_lmapScene[0x74] == 0x12) goto LAB_0035521c;
  }
  else {
    temp_v0 = g_lmapScene[0x75];
    g_lmapScene[0x75] = temp_v0 + 1;
    if (temp_v0 + 1 < 0x15) {
      controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
      return;
    }
    piVar4[0x74] = 0x12;
LAB_0035521c:
    *(unsigned int *)(*(int *)(piVar4[99] + 4) + 4) = *(unsigned int *)(*(int *)(piVar4[99] + 4) + 4) | 3;
    if (DAT_005f1adc == '\0') {
      *(unsigned int *)(temp_v21 + 0x9c) = 1;
      DAT_005f19d4 = 0;
      DAT_005f19d8 = (float)piVar4[0x7c];
      DAT_005f19dc = (float)piVar4[0x7d];
      DAT_005f19e0 = (float)piVar4[0x7e];
      DAT_005f19e4 = piVar4[0x13];
      DAT_005f19e8 = 0;
      piVar4[0x74] = 9;
      piVar4[0x90] = (int)temp_v10;
      piVar4[0x75] = 0;
      piVar4[0x92] = 0;
      temp_v2 = *(unsigned int *)(piVar4[99] + 4);
      FUN_003fd7c0(temp_v2,5,2);
      FUN_003fd924(temp_v2,3,2);
      *(unsigned char *)(g_lmapScene + 0x8f) = 1;
    }
  }
  piVar4 = g_lmapScene;
  if (g_lmapScene[0x74] == 0xb) {
    g_lmapScene[0x75] = g_lmapScene[0x75] + 1;
    DAT_005f19e8 = 0;
    temp_v7 = (float)piVar4[7];
    temp_v9 = (float)piVar4[8];
    temp_v2 = *(unsigned int *)(piVar4[99] + 4);
    temp_v8 = (float)piVar4[9];
    temp_v6 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bc124();
    temp_v7 = temp_v7 + temp_v6 * DAT_005f19b8;
    temp_v11 = (*(float *)(DAT_005806a4 + 0x18) + DAT_005f19bc) * temp_v11;
    FUN_001bbf0c();
    piVar4 = g_lmapScene;
    temp_v9 = temp_v9 + DAT_005f1aa0;
    temp_v11 = temp_v11 * DAT_005f19b8;
    g_lmapScene[0x7c] = (int)temp_v7;
    temp_v9 = temp_v9 + temp_v12;
    piVar4[0x7d] = (int)temp_v9;
    piVar4[0x7e] = (int)(temp_v8 + temp_v11);
    if (piVar4[0x75] == 1) {
      temp_v2 = *(unsigned int *)(piVar4[99] + 4);
      FUN_003fd7c0(temp_v2,3,2);
      temp_v9 = temp_v10;
    }
    temp_v0 = FUN_004ff970(temp_v2);
    if ((temp_v0 == 3) && (FUN_004ffaf0(temp_v2), piVar4 = g_lmapScene, (int)temp_v9 < 0x41200001)) {
      DAT_005f19e8 = 0;
      DAT_005f19d4 = 0;
      DAT_005f19d8 = (float)g_lmapScene[0x7c];
      DAT_005f19dc = (float)g_lmapScene[0x7d];
      DAT_005f19e0 = (float)g_lmapScene[0x7e];
      DAT_005f19e4 = g_lmapScene[0x13];
      g_lmapScene[0x74] = 0;
      temp_v0 = *(int *)(piVar4[99] + 4);
      *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
      piVar4[0x75] = 0;
    }
  }
  controllerSetDestination(*(unsigned int *)(g_lmapScene[99] + 4),g_lmapScene + 0x7c);
  return;
}

} /* extern "C" */
