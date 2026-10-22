/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b81ec` (_code @ 0x2b81ec, 0xffc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b621c(void);
int FUN_002dae68(void);
int FUN_0033ad04(void);
int sysPlayVoice(...);
int controllerGetSourceValue(...);
int controllerGetSourceTiming(...);
int FUN_003fd7c0(...);

int CONCAT44(...);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002469d0(void);
int FUN_0025ef68(int, int, int);
float mathSnapHeading16(float angle);
float calcHeadingRoundedTo32Directions(float angle);
int FUN_00294c28(void);
int FUN_00295108(int);
int distSpatial(void);
int FUN_002b5cd4(void);
int FUN_002b80b8(void);
int FUN_002e364c(...);
int FUN_00313648(...);
int FUN_00317af8(float *, unsigned int *, int);
int FUN_00325998(...);
int FUN_00327ee8(void);
void lmapSceneStartMovement(unsigned char);
int FUN_00354098(void);
int FUN_00408184(...);
int FUN_004a01c8(...);
int FUN_004a0524(void);
int FUN_004a08f0(void);
int FUN_0050d8e4(void);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern char s______________________00581290[67]; /* 0x581290 */
extern int g_gameState; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161e; /* 0x5f161e */
extern unsigned char DAT_005f1633; /* 0x5f1633 */
extern signed char DAT_005f17d0; /* 0x5f17d0 */
extern signed char DAT_005f19ee; /* 0x5f19ee */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be4; /* 0x5f1be4 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */
extern int DAT_005f1c64; /* 0x5f1c64 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int gameFlagsGetBlock(void);
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
extern int FUN_00184964(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002469d0. */
/* Supplied declaration required: FUN_0025ef68. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_00294c28. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002b621c. */
/* Supplied declaration required: FUN_002b80b8. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_00325998. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033ad04. */
/* Supplied declaration required: FUN_00354098. */
/* Supplied declaration required: sysPlayVoice. */
extern unsigned int FUN_003d4ed8(unsigned int);
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: controllerGetSourceValue. */
extern int linkHolderCheckFirst(unsigned int);
/* Supplied declaration required: controllerGetSourceTiming. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004a01c8. */
/* Supplied declaration required: FUN_004a0524. */
/* Supplied declaration required: FUN_004a08f0. */
extern int FUN_004a0e38(unsigned int, unsigned int);
extern int inputIsQuestCancelPressed(void);
/* Supplied declaration required: FUN_0050d8e4. */


void FUN_002b81ec(void)

{
/* irregular: 2 unstructured edge(s); irregular input(s): in_fpscr; 34 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int *puVar15;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned int temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v23 = 20.0f;
  temp_v1 = 0;
  temp_v18 = 0.0f;
  temp_v9 = 0;
  temp_v14 = temp_v23;
  temp_v3 = FUN_0029202c();
  temp_v19 = 2.0f;
  temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = temp_v13 * 0.01f;
  temp_v11 = SBORROW4((int)temp_v13,0x40000000);
  temp_v5 = (int)temp_v13 - 0x40000000;
  temp_v10 = temp_v13 == 2.0f;
  temp_v21 = temp_v19;
  if ((int)temp_v13 < 0x40000001) {
    temp_v11 = SBORROW4((int)temp_v13,0x3f800000);
    temp_v5 = (int)temp_v13 - 0x3f800000;
    temp_v10 = temp_v13 == 1.0f;
    temp_v21 = temp_v13;
  }
  if ((!temp_v10 && temp_v5 < 0 == temp_v11) && (temp_v23 = temp_v23 * temp_v21, (int)temp_v23 >= 0x420c0001)) {
    temp_v23 = 35.0f;
  }
  if (DAT_005f1c64 != 0) {
    temp_v23 = temp_v23 * 2.5f;
  }
  if ((DAT_005f1bc4 == '\0') && (DAT_005f1614 == '\0')) {
    temp_v4 = DAT_005f1618;
    if ((int)DAT_005f1618 < 1) {
      temp_v4 = (unsigned int)DAT_005f161d;
    }
    if (temp_v4 == 0) {
      if (0 < *(int *)(temp_v2 + 0xdcc)) {
        *(int *)(temp_v2 + 0xdcc) = *(int *)(temp_v2 + 0xdcc) - 1;
      }
      FUN_00354098();
      temp_v15 = *(unsigned long long *)(g_lmapScene + 0x28);
      temp_v17 = CONCAT44(temp_v23,*(unsigned int *)(g_lmapScene + 0x30));
      FUN_00317af8(&temp_v26,&temp_v25,0);
      temp_v10 = 0;
      *(unsigned char *)(g_lmapScene + 0x6c) = 0;
      temp_v5 = gameFlagIsSet(0xc);
      if ((temp_v5 != 0) && (temp_v5 = gameFlagIsSet(0x10), temp_v5 == 0)) {
        temp_v10 = 1;
      }
      if (DAT_005f1be4 == 0 || DAT_005f1be4 == 3) {
        if (*(short *)(g_lmapScene + 0x19a) >= 1) {
          *(short *)(g_lmapScene + 0x19a) = *(short *)(g_lmapScene + 0x19a) - 1;
        }
        else {
          temp_v6 = inputIsQuestCancelPressed();
          temp_v5 = 0;
          if (temp_v6 != 0) {
            temp_v5 = g_gameState;
          }
          if ((((temp_v6 != 0 && temp_v5 != 0x24) && (*(int *)(g_lmapView + 0xb0) == 0)) &&
              (temp_v5 = gameFlagIsSet(0x49a), temp_v5 != 0)) && (DAT_005f19ee == '\0' && !temp_v10)) {
            *(unsigned int *)(temp_v2 + 0xdc8) = 0;
            *(unsigned int *)(temp_v2 + 0x1518) = 0;
            *(unsigned int *)(temp_v2 + 0x151c) = 0;
            temp_v5 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 0x274) = 0;
            *(unsigned int *)(temp_v5 + 0x278) = 0;
            *(unsigned int *)(temp_v5 + 0x27c) = 0;
            FUN_00313648(3);
            FUN_00408184(0x14,1);
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            if (*(int *)(g_lmapScene + 0x1d0) == 1 || *(int *)(g_lmapScene + 0x1d0) == 9) {
              lmapSceneStartMovement(0);
            }
            return;
          }
        }
      }
      if (DAT_005f1be4 == 1) {
        if (DAT_005f1c48 != '\0') {
          temp_v5 = padButtonIsPressed(1);
          if (temp_v5 != 0) {
            DAT_005f1c48 = '\0';
          }
          temp_v5 = padButtonRepeat(5);
          temp_v21 = 50.0f;
          if (temp_v5 != 0) {
            *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) + 50.0f;
          }
          temp_v5 = padButtonRepeat(6);
          if (temp_v5 != 0) {
            *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) - temp_v21;
          }
        }
        else {
          temp_v5 = padButtonIsPressed(1);
          if (temp_v5 != 0) {
            DAT_005f1c48 = '\x01';
          }
        }
      }
      if ((((unsigned int)temp_v26 < 0xbf000000) && ((int)temp_v26 < 0x3f000000)) &&
         ((temp_v25 < 0xbf000000 && ((int)temp_v25 < 0x3f000000)))) {
        temp_v1 = 1;
      }
      temp_v24 = CONCAT44(0x447a0000,temp_v14);
      if (*(int *)(g_lmapView + 0xb0) != 0) {
        temp_v1 = 1;
      }
      if ((DAT_005f161e != '\0') && (DAT_005f1c48 == '\0')) {
        if ((!temp_v1) ||
           ((temp_v4 = *(unsigned int *)(g_lmapScene + 0x68), 0xbdcccccc < temp_v4 ||
            (temp_v9 = (unsigned int)((int)temp_v4 < 0x3dcccccd), (int)temp_v4 >= 0x3dcccccd)))) {
          *(float *)(g_lmapScene + 0x2c) =
               (*(float *)(g_lmapScene + 0x2c) - temp_v19) - *(float *)(g_lmapScene + 0x68);
        }
        if (0xc69c4000 < *(unsigned int *)(g_lmapScene + 0x2c)) {
          *(unsigned int *)(g_lmapScene + 0x2c) = 0x447a0000;
        }
      }
      temp_v5 = g_lmapScene;
      temp_v3 = 0x40a00000;
      if (*(int *)(g_lmapScene + 0x274) == 0) {
        if (*(int *)(g_lmapScene + 0x54) == 0x14) {
          *(unsigned int *)(g_lmapScene + 0x58) = 0x41200000;
        }
        else {
          *(unsigned int *)(g_lmapScene + 0x58) = 0x40a00000;
        }
        *(unsigned int *)(temp_v5 + 0x54) = 0;
      }
      temp_v21 = 0.5f;
      temp_v20 = CONCAT44(temp_v19,0x3f800000);
      piVar11 = (int *)(temp_v2 + 0x1518);
      if (temp_v1) {
        *(unsigned char *)(temp_v5 + 0x10) = 0;
        temp_v6 = *piVar11;
        *piVar11 = temp_v6 + 1;
        if ((temp_v6 + 1 >= 901) && (*(int *)(temp_v5 + 0x274) == 0)) {
          temp_v6 = FUN_00184964(0,9);
          temp_v5 = g_lmapScene;
          piVar11 = (int *)(temp_v2 + 0x151c);
          *(unsigned int *)(g_lmapScene + 0x274) =
               (unsigned int)(unsigned char)s______________________00581290[temp_v6 + *piVar11 * 10];
          *(unsigned int *)(temp_v5 + 0x278) = 0;
          *(unsigned int *)(temp_v5 + 0x27c) = 0;
          temp_v5 = *piVar11;
          *piVar11 = temp_v5 + 1;
          if (temp_v5 + 1 >= 5) {
            *piVar11 = 0;
          }
        }
        if ((*(int *)(temp_v2 + 0xdcc) == 0) &&
           (temp_v5 = *(int *)(temp_v2 + 0xdc8) + 1, *(int *)(temp_v2 + 0xdc8) = temp_v5, temp_v5 >= 901)) {
          FUN_00295108(0);
          FUN_00294c28();
          FUN_002b80b8();
          *(unsigned int *)(temp_v2 + 0xdcc) = 0xe10;
          *(unsigned int *)(temp_v2 + 0xdc8) = 0;
        }
        temp_v5 = *(int *)(temp_v2 + 0xdec);
        temp_v6 = temp_v5 + 1;
        *(int *)(temp_v2 + 0xdec) = temp_v6;
        if (temp_v6 >= 0x1f) {
          *(int *)(temp_v2 + 0xdec) = temp_v5 - 0x1d;
          FUN_00408184(0x1d,1);
        }
      }
      else {
        *(unsigned int *)(temp_v2 + 0xdc8) = 0;
        *piVar11 = 0;
        *(unsigned int *)(temp_v2 + 0x151c) = 0;
        *(unsigned int *)(temp_v5 + 0x274) = 0;
        *(unsigned int *)(temp_v5 + 0x278) = 0;
        *(unsigned int *)(temp_v5 + 0x27c) = 0;
        FUN_0050d8e4();
        temp_v26 = temp_v26 * 57.32484f;
        if (*(char *)(g_lmapScene + 0x10) != '\0') {
          temp_v13 = *(float *)(g_lmapScene + 0x14);
          FUN_002b5cd4();
          temp_v4 = in_fpscr & 0xfffffff;
          in_fpscr = temp_v4 | ((unsigned int)(temp_v18 <= temp_v13) << 0x1d);
          temp_v14 = temp_v13;
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v14 = -temp_v13;
          }
          if ((int)temp_v14 < 0x42700001) {
            temp_v23 = temp_v14 * temp_v21;
            if ((int)temp_v23 < 0x3f800000) {
              temp_v23 = (float)temp_v20;
            }
            in_fpscr = temp_v4 | ((unsigned int)(temp_v14 == temp_v23) << 0x1e) |
                       ((unsigned int)(temp_v23 <= temp_v14) << 0x1d);
            temp_v0 = (unsigned char)(in_fpscr >> 0x18);
            if ((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6)) {
              temp_v4 = temp_v4 | ((unsigned int)(temp_v18 < temp_v13) << 0x1f) | ((unsigned int)(temp_v18 == temp_v13) << 0x1e)
              ;
              in_fpscr = temp_v4 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v13 != temp_v13)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v4 >> 0x18);
              if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v26 = *(float *)(g_lmapScene + 0x14) + temp_v23;
              }
              else {
                temp_v26 = *(float *)(g_lmapScene + 0x14) - temp_v23;
              }
            }
          }
          *(float *)(g_lmapScene + 0x14) = temp_v26;
          temp_v26 = *(float *)(g_lmapScene + 0x14);
        }
        *(unsigned char *)(g_lmapScene + 0x10) = 1;
        temp_v22 = CONCAT44(temp_v21,0x43b40000);
        temp_v21 = temp_v26 - *(float *)(g_lmapView + 0x18);
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v21) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
          temp_v21 = temp_v21 + 360.0f;
        }
        if ((int)temp_v21 >= 0x43b40001) {
          temp_v21 = temp_v21 - 360.0f;
        }
        if (*(int *)(g_lmapView + 200) != 3) {
          temp_v21 = calcHeadingRoundedTo32Directions(temp_v21);
        }
        else {
          temp_v21 = mathSnapHeading16(temp_v21);
        }
        temp_v21 = -temp_v21;
        temp_v13 = *(float *)(g_lmapScene + 0x50);
        FUN_002b5cd4();
        temp_v4 = temp_v4 & 0xfffffff;
        temp_v14 = temp_v13;
        if (temp_v13 < temp_v18) {
          temp_v14 = -temp_v13;
        }
        if ((int)temp_v14 < 0x41f00001) {
          temp_v23 = temp_v14 * (float)((unsigned long long)temp_v22 >> 0x20);
          if ((int)temp_v23 < 0x3f800000) {
            temp_v23 = (float)temp_v20;
          }
          if (temp_v23 < temp_v14) {
            temp_v4 = temp_v4 | ((unsigned int)(temp_v18 < temp_v13) << 0x1f);
            if (temp_v18 == temp_v13 || romwright_subpiece_4_1_0(temp_v4 >> 0x1f,0) != ((temp_v18 != temp_v18) || (temp_v13 != temp_v13))) {
              temp_v21 = *(float *)(g_lmapScene + 0x50) + temp_v23;
            }
            else {
              temp_v21 = *(float *)(g_lmapScene + 0x50) - temp_v23;
            }
          }
        }
        *(float *)(g_lmapScene + 0x50) = temp_v21;
        temp_v5 = g_lmapScene;
        temp_v14 = *(float *)(g_lmapScene + 0x50);
        in_fpscr = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
        temp_v13 = 0.017453292f;
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v14 = temp_v14 + (float)temp_v22;
          *(float *)(g_lmapScene + 0x50) = temp_v14;
        }
        if ((int)temp_v14 >= 0x43b40001) {
          temp_v14 = temp_v14 - (float)temp_v22;
          *(float *)(temp_v5 + 0x50) = temp_v14;
        }
        temp_v14 = temp_v14 * 0.017453292f;
        *(unsigned char *)(temp_v5 + 0x6c) = 1;
        *(int *)(temp_v5 + 0x7c) = (int)((unsigned long long)temp_v17 >> 0x20);
        FUN_001bc124();
        temp_v5 = g_lmapScene;
        temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
        *(float *)(g_lmapScene + 0x28) =
             *(float *)(g_lmapScene + 0x28) + temp_v14 * (float)((unsigned long long)temp_v17 >> 0x20);
        temp_v13 = *(float *)(temp_v5 + 0x50) * temp_v13;
        FUN_001bbf0c();
        temp_v5 = g_lmapScene;
        *(float *)(g_lmapScene + 0x30) =
             *(float *)(g_lmapScene + 0x30) + temp_v13 * (float)((unsigned long long)temp_v17 >> 0x20);
        *(unsigned int *)(temp_v5 + 0x54) = 2;
      }
      temp_v16 = (unsigned int)temp_v17;
      temp_v4 = 0;
      FUN_002469d0();
      temp_v5 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x28) = temp_v27;
      *(unsigned int *)(temp_v5 + 0x2c) = uStack_64;
      *(unsigned int *)(temp_v5 + 0x30) = uStack_60;
      *(int *)(temp_v5 + 0x34) = (int)temp_v15;
      *(int *)(temp_v5 + 0x38) = (int)((unsigned long long)temp_v15 >> 0x20);
      *(unsigned int *)(temp_v5 + 0x3c) = temp_v16;
      if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && ((temp_v9 & ~temp_v4) == 0)) {
        temp_v7 = temp_v5 + 0x28;
        FUN_0025ef68(temp_v7,temp_v5 + 0x34,0);
        temp_v5 = g_lmapScene;
        temp_v6 = 0;
        if (temp_v7 != 0) {
          temp_v6 = g_lmapScene;
        }
        if (temp_v7 != 0) {
          *(float *)(temp_v6 + 0x68) = temp_v18;
        }
        else {
          temp_v14 = *(float *)(g_lmapScene + 0x68) + (float)((unsigned long long)temp_v20 >> 0x20);
          *(float *)(g_lmapScene + 0x68) = temp_v14;
          if ((int)temp_v14 < 0x41a00001) {
            temp_v24 = CONCAT44((int)((unsigned long long)temp_v24 >> 0x20),temp_v14);
          }
          *(int *)(temp_v5 + 0x68) = (int)temp_v24;
        }
      }
      temp_v8 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
      if (((g_gameState != 0x24) && (temp_v5 = FUN_004a0e38(2,5), temp_v5 != 0)) && (!temp_v1)) {
        temp_v14 = (float)temp_v15;
        distSpatial();
        temp_v14 = *(float *)(g_lmapScene + 0x160) - temp_v14;
        *(float *)(g_lmapScene + 0x160) = temp_v14;
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          FUN_004a01c8(2,5);
          *(unsigned int *)(g_lmapScene + 0x160) = temp_v8;
          FUN_00325998(0xf,0x50);
          temp_v8 = FUN_003d4ed8(0x1000224);
          temp_v5 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x1a0) = temp_v8;
          *(unsigned int *)(temp_v5 + 0x1a4) = 0x14;
        }
      }
      temp_v13 = (float)temp_v15;
      distSpatial();
      temp_v14 = *(float *)(temp_v2 + 0xde8) + temp_v13;
      *(float *)(temp_v2 + 0xde8) = temp_v14;
      if ((int)temp_v14 >= 0x47c35001) {
        *(float *)(temp_v2 + 0xde8) = temp_v14 - 100000.0f;
        FUN_00408184(0x12,1);
      }
      temp_v8 = 0x44bb8000;
      temp_v14 = *(float *)(temp_v2 + 0xdf0) + temp_v13;
      *(float *)(temp_v2 + 0xdf0) = temp_v14;
      if ((int)temp_v14 >= 0x44bb8001) {
        *(float *)(temp_v2 + 0xdf0) = temp_v14 - 1500.0f;
        FUN_004a0524();
        FUN_004a08f0();
      }
      temp_v14 = *(float *)(temp_v2 + 0xdf8) + temp_v13;
      *(float *)(temp_v2 + 0xdf8) = temp_v14;
      temp_v10 = *(int *)(temp_v2 + 0xdf4) != 0;
      if (temp_v10) {
        temp_v23 = 60000.0f;
        temp_v5 = (int)temp_v14 - 0x476a6000;
      }
      else {
        *(float *)(temp_v2 + 0xdf8) = temp_v18;
        temp_v5 = 0;
        temp_v23 = 0.0f;
      }
      if ((temp_v10 && temp_v14 != temp_v23) && temp_v5 < 0 == (temp_v10 && SBORROW4((int)temp_v14,(int)temp_v23))
         ) {
        *(float *)(temp_v2 + 0xdf8) = temp_v18;
        *(unsigned int *)(temp_v2 + 0xdf4) = 0;
        *(unsigned char *)(temp_v2 + 0xdfc) = 1;
        *(unsigned int *)(temp_v2 + 0x15b4) = 3;
      }
      temp_v14 = *(float *)(temp_v2 + 0x10a0) + temp_v13;
      *(float *)(temp_v2 + 0x10a0) = temp_v14;
      if (*(int *)(temp_v2 + 0x109c) == 0) {
        *(float *)(temp_v2 + 0x10a0) = temp_v18;
      }
      else {
        temp_v23 = *(float *)(temp_v2 + 0x15c0);
        temp_v9 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v23) << 0x1f) |
                 ((unsigned int)(temp_v14 == temp_v23) << 0x1e);
        in_fpscr = temp_v9 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v23 != temp_v23)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v9 >> 0x18);
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          sysPlayVoice(0x10000d1);
          temp_v5 = gameFlagIsSet(0x4c9);
          if ((temp_v5 == 0) || (temp_v5 = FUN_002e5db4(), temp_v5 != 0)) {
            *(unsigned int *)(g_lmapScene + 0x1d0) = 0xf;
          }
          else {
            *(unsigned int *)(g_lmapScene + 0x1d0) = 0xb;
          }
          temp_v5 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x228) = 6;
          *(unsigned char *)(temp_v5 + 0x22c) = 1;
          *(unsigned int *)(temp_v5 + 0x240) = temp_v3;
          *(unsigned int *)(temp_v5 + 0x1d4) = 0;
          *(float *)(temp_v2 + 0x10a0) = temp_v18;
          *(unsigned int *)(temp_v2 + 0x109c) = 0;
          *(unsigned int *)(temp_v2 + 0x10a4) = 1;
          temp_v5 = gameFlagIsSet(0x4c9);
          if ((temp_v5 == 0) || (temp_v5 = FUN_002e5db4(), temp_v5 != 0)) {
            *(unsigned int *)(g_lmapScene + 0x238) = 6;
          }
          *(unsigned char *)(g_lmapScene + 0x23c) = 1;
          temp_v5 = gameFlagIsSet(0x4c9);
          if ((temp_v5 == 0) || (temp_v5 = FUN_002e5db4(), temp_v5 != 0)) {
            FUN_003fd7c0(*(unsigned int *)(*(int *)(g_lmapScene + 0x18c) + 4),0,2);
          }
        }
      }
      temp_v13 = *(float *)(temp_v2 + 0x14ec) + temp_v13;
      *(float *)(temp_v2 + 0x14ec) = temp_v13;
      temp_v10 = *(int *)(temp_v2 + 0x14e8) != 0;
      if (temp_v10) {
        temp_v14 = 30000.0f;
        temp_v5 = (int)temp_v13 - 0x46ea6000;
      }
      else {
        *(float *)(temp_v2 + 0x14ec) = temp_v18;
        temp_v5 = 0;
        temp_v14 = 0.0f;
      }
      if ((temp_v10 && temp_v13 != temp_v14) && temp_v5 < 0 == (temp_v10 && SBORROW4((int)temp_v13,(int)temp_v14))
         ) {
        *(float *)(temp_v2 + 0x14ec) = temp_v18;
        *(int *)(temp_v2 + 0x14e8) = 0;
        *(unsigned int *)(temp_v2 + 0x14f0) = 1;
      }
      temp_v9 = g_lmapScene + 0x28;
      FUN_002e364c();
      temp_v14 = (float)temp_v15;
      if ((temp_v9 & 2) != 0) {
        if (!temp_v1) {
          distSpatial();
          temp_v14 = *(float *)(g_lmapScene + 0x15c) - temp_v14;
          *(float *)(g_lmapScene + 0x15c) = temp_v14;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
          if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v5 = gameDataFlagTestBit(0x85), temp_v5 == 0)) {
            puVar10 = (unsigned int *)&g_gameState;
            if (g_gameState == 5) {
              puVar10 = DAT_005f1600;
            }
            if (!(g_gameState == 5 && puVar10 == (unsigned int *)0x9)) {
              *(unsigned int *)(g_lmapScene + 0x15c) = 0x43fa0000;
            }
            else {
              *(unsigned int *)(g_lmapScene + 0x15c) = temp_v8;
            }
            FUN_00313648(0x20);
          }
        }
        DAT_005f1633 = 4;
        temp_v13 = temp_v18;
      }
      else {
        temp_v13 = *(float *)(g_lmapScene + 0x15c);
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v18) << 0x1f) |
                ((unsigned int)(temp_v13 == temp_v18) << 0x1e);
        temp_v12 = temp_v4 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v18 != temp_v18)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        temp_v13 = temp_v18;
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
          distSpatial();
          *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v14;
        }
        temp_v14 = *(float *)(g_lmapScene + 0x15c);
        temp_v4 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v18) << 0x1f) |
                ((unsigned int)(temp_v14 == temp_v18) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v18 != temp_v18)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v18 = temp_v14;
        }
        *(float *)(g_lmapScene + 0x15c) = temp_v18;
        DAT_005f1633 = 0xff;
      }
      if (((temp_v9 & 4) != 0) && (DAT_005f17d0 == '\0')) {
        DAT_005f161c = 1;
        *(unsigned char *)(temp_v2 + 0xe09) = 0;
        FUN_00313648(0x1f);
        FUN_00408184(0x16,1);
      }
      FUN_00327ee8();
      if ((temp_v9 & 0x800) != 0) {
        FUN_0033ad04();
      }
      if ((temp_v9 & 0x2000) != 0) {
        FUN_002b621c();
      }
      temp_v5 = g_lmapScene;
      if (temp_v1) {
        *(float *)(g_lmapScene + 0x7c) = temp_v13;
        *(float *)(temp_v5 + 0x1c) =
             *(float *)(temp_v5 + 0x1c) +
             (*(float *)(temp_v5 + 0x28) - *(float *)(temp_v5 + 0x1c)) * temp_v21;
        *(float *)(temp_v5 + 0x20) =
             *(float *)(temp_v5 + 0x20) +
             (*(float *)(temp_v5 + 0x2c) - *(float *)(temp_v5 + 0x20)) * 0.33333334f;
        temp_v21 = *(float *)(temp_v5 + 0x24) +
                 (*(float *)(temp_v5 + 0x30) - *(float *)(temp_v5 + 0x24)) * temp_v21;
        *(float *)(temp_v5 + 0x24) = temp_v21;
        temp_v2 = *(int *)(temp_v5 + 0x274);
        if (temp_v2 != 0) {
          if (temp_v2 != 1) {
            if (temp_v2 != 2) {
              if (temp_v2 == 3) {
                temp_v2 = *(int *)(temp_v5 + 0x278);
                if (temp_v2 != 0) {
                  if (temp_v2 != 1) {
                    if (temp_v2 != 2) {
                      if (temp_v2 != 3) {
                        if (temp_v2 == 4) {
                          temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
                          temp_v5 = g_lmapScene;
                          g_lmapScene = temp_v5;
                          if (temp_v2 != 0) {
                            *(unsigned int *)(temp_v5 + 0x54) = 0;
                            *(float *)(temp_v5 + 0x58) = temp_v13;
                            *(unsigned int *)(temp_v5 + 0x274) = 0;
                            *(unsigned int *)(temp_v5 + 0x278) = 0;
                          }
                        }
                      }
                      else {
                        *(int *)(temp_v5 + 0x27c) = *(int *)(temp_v5 + 0x27c) + 1;
                        controllerGetSourceTiming(*(unsigned int *)(temp_v5 + 0x1a8));
                        temp_v5 = g_lmapScene;
                        temp_v18 = (float)VectorSignedToFloat(*(unsigned int *)(g_lmapScene + 0x27c),
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        if (temp_v21 * 3.0f < temp_v18) {
                          *(unsigned int *)(g_lmapScene + 0x54) = 0x28;
                          *(float *)(temp_v5 + 0x58) = temp_v13;
                          *(unsigned int *)(temp_v5 + 0x278) = 4;
                          *(unsigned int *)(temp_v5 + 0x27c) = 0;
                        }
                      }
                    }
                    else {
                      temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
                      temp_v5 = g_lmapScene;
                      if (temp_v2 != 0) {
                        *(unsigned int *)(g_lmapScene + 0x54) = 0x27;
                        *(float *)(temp_v5 + 0x58) = temp_v13;
                        *(unsigned int *)(temp_v5 + 0x278) = 3;
                        *(unsigned int *)(temp_v5 + 0x27c) = 0;
                      }
                    }
                  }
                  else {
                    temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
                    temp_v5 = g_lmapScene;
                    if (temp_v2 != 0) {
                      *(unsigned int *)(g_lmapScene + 0x54) = 0x26;
                      *(float *)(temp_v5 + 0x58) = temp_v13;
                      *(unsigned int *)(temp_v5 + 0x278) = 2;
                      *(unsigned int *)(temp_v5 + 0x27c) = 0;
                    }
                  }
                }
                else {
                  controllerGetSourceValue(*(unsigned int *)(temp_v5 + 0x1a8));
                  temp_v14 = (float)temp_v20;
                  temp_v18 = temp_v21;
                  controllerGetSourceTiming(*(unsigned int *)(g_lmapScene + 0x1a8));
                  if (temp_v18 >= temp_v21 - temp_v14) {
                    temp_v5 = g_lmapScene;
                    *(unsigned int *)(g_lmapScene + 0x54) = 0x25;
                    *(float *)(temp_v5 + 0x58) = temp_v13;
                    *(unsigned int *)(temp_v5 + 0x278) = 1;
                  }
                }
              }
            }
            else {
              temp_v2 = *(int *)(temp_v5 + 0x278);
              if (temp_v2 != 0) {
                if (temp_v2 != 1) {
                  if (temp_v2 != 2) {
                    if (temp_v2 == 3) {
                      temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
                      temp_v5 = g_lmapScene;
                      g_lmapScene = temp_v5;
                      if (temp_v2 != 0) {
                        *(unsigned int *)(temp_v5 + 0x54) = 0;
                        *(float *)(temp_v5 + 0x58) = temp_v13;
                        *(unsigned int *)(temp_v5 + 0x274) = 0;
                        *(unsigned int *)(temp_v5 + 0x278) = 0;
                      }
                    }
                  }
                  else {
                    *(int *)(temp_v5 + 0x27c) = *(int *)(temp_v5 + 0x27c) + 1;
                    controllerGetSourceTiming(*(unsigned int *)(temp_v5 + 0x1a8));
                    temp_v5 = g_lmapScene;
                    temp_v18 = (float)VectorSignedToFloat(*(unsigned int *)(g_lmapScene + 0x27c),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    if (temp_v21 * (float)((unsigned long long)temp_v20 >> 0x20) < temp_v18) {
                      *(unsigned int *)(g_lmapScene + 0x54) = 0x28;
                      *(float *)(temp_v5 + 0x58) = temp_v13;
                      *(unsigned int *)(temp_v5 + 0x278) = 3;
                      *(unsigned int *)(temp_v5 + 0x27c) = 0;
                    }
                  }
                }
                else {
                  temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
                  temp_v5 = g_lmapScene;
                  if (temp_v2 != 0) {
                    *(unsigned int *)(g_lmapScene + 0x54) = 0x27;
                    *(float *)(temp_v5 + 0x58) = temp_v13;
                    *(unsigned int *)(temp_v5 + 0x278) = 2;
                    *(unsigned int *)(temp_v5 + 0x27c) = 0;
                  }
                }
              }
              else {
                controllerGetSourceValue(*(unsigned int *)(temp_v5 + 0x1a8));
                temp_v14 = (float)temp_v20;
                temp_v18 = temp_v21;
                controllerGetSourceTiming(*(unsigned int *)(g_lmapScene + 0x1a8));
                temp_v5 = g_lmapScene;
                if (temp_v21 - temp_v14 <= temp_v18) {
                  *(unsigned int *)(g_lmapScene + 0x54) = 0x26;
                  *(float *)(temp_v5 + 0x58) = temp_v13;
                  *(unsigned int *)(temp_v5 + 0x278) = 1;
                }
              }
            }
          }
          else if (*(int *)(temp_v5 + 0x278) != 0) {
            if (*(int *)(temp_v5 + 0x278) == 1) {
              temp_v2 = linkHolderCheckFirst(*(unsigned int *)(temp_v5 + 0x1a8));
              temp_v5 = g_lmapScene;
              g_lmapScene = temp_v5;
              if (temp_v2 != 0) {
                *(unsigned int *)(temp_v5 + 0x54) = 0;
                *(float *)(temp_v5 + 0x58) = temp_v13;
                *(unsigned int *)(temp_v5 + 0x274) = 0;
                *(unsigned int *)(temp_v5 + 0x278) = 0;
              }
            }
          }
          else {
            controllerGetSourceValue(*(unsigned int *)(temp_v5 + 0x1a8));
            temp_v14 = (float)temp_v20;
            temp_v18 = temp_v21;
            controllerGetSourceTiming(*(unsigned int *)(g_lmapScene + 0x1a8));
            if (temp_v18 >= temp_v21 - temp_v14) {
              temp_v5 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0x54) = 0x25;
              *(float *)(temp_v5 + 0x58) = temp_v13;
              *(unsigned int *)(temp_v5 + 0x278) = 1;
            }
          }
        }
      }
      else {
        *(float *)(g_lmapScene + 0x1c) =
             *(float *)(g_lmapScene + 0x1c) +
             (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
        *(float *)(temp_v5 + 0x20) =
             *(float *)(temp_v5 + 0x20) +
             (*(float *)(temp_v5 + 0x2c) - *(float *)(temp_v5 + 0x20)) * 0.33333334f;
        *(float *)(temp_v5 + 0x24) =
             *(float *)(temp_v5 + 0x24) +
             (*(float *)(temp_v5 + 0x30) - *(float *)(temp_v5 + 0x24)) * 0.33333334f;
      }
      FUN_002dae68();
      temp_v5 = g_lmapScene;
      puVar15 = (unsigned int *)(g_lmapScene + 0x20);
      temp_v3 = *(unsigned int *)(g_lmapScene + 0x24);
      puVar10 = (unsigned int *)(g_lmapScene + 0x34);
      *(unsigned int *)(g_lmapScene + 0x40) = *(unsigned int *)(g_lmapScene + 0x1c);
      *(unsigned int *)(temp_v5 + 0x44) = *puVar15;
      *(unsigned int *)(temp_v5 + 0x48) = temp_v3;
      *puVar10 = (int)temp_v15;
      *(int *)(temp_v5 + 0x38) = (int)((unsigned long long)temp_v15 >> 0x20);
      *(unsigned int *)(temp_v5 + 0x3c) = temp_v16;
      return;
    }
  }
  *(unsigned int *)(temp_v2 + 0xdc8) = 0;
  *(unsigned int *)(temp_v2 + 0x1518) = 0;
  *(unsigned int *)(temp_v2 + 0x151c) = 0;
  temp_v5 = g_lmapScene;
  *(unsigned int *)(g_lmapScene + 0x274) = 0;
  *(unsigned int *)(temp_v5 + 0x278) = 0;
  *(unsigned int *)(temp_v5 + 0x27c) = 0;
  FUN_002e364c(temp_v5 + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
