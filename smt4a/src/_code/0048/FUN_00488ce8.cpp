/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00488ce8` (_code @ 0x488ce8, 0x788 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(...);

int sysPlaySe(...);
int FUN_00183e58(void);
int FUN_00317af8(...);
int naviRequestSelectedMap(void);
int FUN_003a35a4(void);
int FUN_003d2150(...);
int FUN_00489480(int);
int FUN_0048981c(void);
int FUN_0048d248(...);
int rectRecRead(int, int, int *, unsigned int **);
int naviMainGetValue(...);
int sub68OwnerGetBlock60(...);
int FUN_00492bc0(...);
int FUN_00492c18(...);
int FUN_004d03c8(float **, unsigned int **);
int FUN_004d040c(int, unsigned int *, double, int);
int NaviMain_GetCurrentMap(...);
int VectorSignedToFloat(...);

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
/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern float g_uiTextFontSettings; /* 0x587f10 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int gameFlagsGetBlock(void);
extern int FUN_00167c0c(unsigned int **, int *);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: naviRequestSelectedMap. */
/* Supplied declaration required: FUN_003a35a4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_00489480. */
/* Supplied declaration required: FUN_0048981c. */
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: rectRecRead. */
/* Supplied declaration required: naviMainGetValue. */
/* Supplied declaration required: sub68OwnerGetBlock60. */
/* Supplied declaration required: FUN_00492bc0. */
/* Supplied declaration required: FUN_00492c18. */
extern int FUN_00492c5c(int);
extern unsigned int FUN_00492c84(int);
/* Supplied declaration required: FUN_004d03c8. */
extern unsigned int FUN_004d03d0(unsigned int **, int *);
/* Supplied declaration required: FUN_004d040c. */
extern int FUN_004d04c4(void);
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestConfirmPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: NaviMain_GetCurrentMap. */


unsigned int FUN_00488ce8(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 19 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  int *piVar9;
  unsigned int *puVar10;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  unsigned int *in_s0;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float *temp_v8;
  unsigned int *temp_v9;
  float temp_v10;
  int temp_v11;
  unsigned int *temp_v12;
  float temp_v13;
  int uStack_48;
  int temp_v14;
  float temp_v15 [2];
  int temp_v16;
  unsigned int temp_v17;
  
  temp_v0 = gameFlagsGetBlock();
  FUN_00489480(param_1);
  temp_v1 = param_1;
  FUN_0048981c();
  if (temp_v1 != 0) {
    return 0;
  }
  temp_v7 = 0;
  temp_v14 = param_1 + 0x4cc;
  if (((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) && (DAT_005f161d != '\0')) {
    temp_v1 = FUN_00167c0c(&temp_v12,&temp_v11);
    if ((temp_v1 == 0) || (DAT_005f1614 != 0)) {
      temp_v2 = FUN_004d03d0(&temp_v12,&temp_v11);
      temp_v4 = temp_v2 == 0;
      if (temp_v4) {
        temp_v2 = (unsigned int)DAT_005f1614;
      }
      if (!temp_v4 || temp_v2 != 0) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffdffff;
        if (*(char *)(param_1 + 0x54) >= '\x03') {
          *(unsigned int *)(param_1 + 0x3c) = temp_v7;
          *(unsigned int *)(param_1 + 0x40) = temp_v7;
        }
        else {
          in_s0 = (unsigned int *)romwright_f2u((float)((*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50))));
          *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x4c);
          *(unsigned int **)(param_1 + 0x40) = in_s0;
        }
      }
    }
    else {
      temp_v5 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float *)romwright_f2u((float)((*(float *)(param_1 + 0x34) + (temp_v5 - *(float *)(param_1 + 0x2c)))));
      temp_v5 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (unsigned int *)romwright_f2u((float)((*(float *)(param_1 + 0x38) + (temp_v5 - *(float *)(param_1 + 0x30)))));
      FUN_00492c18(temp_v14,&temp_v8);
      temp_v5 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x44) == temp_v5) << 0x1e);
      if (romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0)) {
        temp_v5 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x48) == temp_v5) << 0x1e);
        if (romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0)) {
          in_s0 = temp_v12;
          if (*(char *)(param_1 + 0x54) < 'c') {
            *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
          }
        }
        else {
          temp_v3 = VectorSignedToFloat(temp_v12,(unsigned char)(temp_v2 >> 0x16) & 3);
          *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
          *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
          *(unsigned int *)(param_1 + 0x44) = temp_v3;
          in_s0 = (unsigned int *)VectorSignedToFloat(temp_v11,(unsigned char)(temp_v2 >> 0x16) & 3);
          *(unsigned int **)(param_1 + 0x48) = in_s0;
        }
      }
      else {
        temp_v3 = VectorSignedToFloat(temp_v12,(unsigned char)(temp_v2 >> 0x16) & 3);
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
        *(unsigned int *)(param_1 + 0x44) = temp_v3;
        in_s0 = (unsigned int *)VectorSignedToFloat(temp_v11,(unsigned char)(temp_v2 >> 0x16) & 3);
        *(unsigned int **)(param_1 + 0x48) = in_s0;
      }
    }
  }
  else {
    temp_v9 = (unsigned int *)&uStack_48;
    temp_v8 = &temp_v13;
    rectRecRead(0x13,0xfa4,&temp_v11,&temp_v12);
    FUN_004d040c(temp_v11,temp_v12,temp_v13,uStack_48);
    if ((temp_v11 != 0) && (DAT_005f1614 == 0)) {
      FUN_004d03c8(&temp_v8,&temp_v9);
      temp_v3 = VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x2c) = temp_v3;
      temp_v3 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x30) = temp_v3;
      puVar10 = (unsigned int *)sub68OwnerGetBlock60(temp_v14);
      temp_v3 = puVar10[1];
      *(unsigned int *)(param_1 + 0x34) = *puVar10;
      *(unsigned int *)(param_1 + 0x38) = temp_v3;
      temp_v3 = VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      in_s0 = (unsigned int *)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x44) = temp_v3;
      temp_v6 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x48) = temp_v6;
      *(unsigned int **)(param_1 + 0x4c) = in_s0;
      *(unsigned int *)(param_1 + 0x50) = temp_v3;
      *(unsigned char *)(param_1 + 0x54) = 0;
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x20000;
    }
  }
  temp_v5 = g_uiTextFontSettings;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) == 0) {
    in_s0 = *(unsigned int **)(param_1 + 0x3c);
    if (((int)romwright_fabs_4(romwright_u2f((unsigned int)(in_s0))) < 0x3f000001) && ((int)romwright_fabs_4(*(float *)(param_1 + 0x40)) < 0x3f000001)
       ) {
      *(unsigned int *)(param_1 + 0x3c) = temp_v7;
      *(unsigned int *)(param_1 + 0x40) = temp_v7;
    }
    else {
      *(float *)(param_1 + 0x3c) = romwright_u2f((unsigned int)(in_s0)) * g_uiTextFontSettings;
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * temp_v5;
      pfVar4 = (float *)sub68OwnerGetBlock60(temp_v14);
      temp_v8 = (float *)romwright_f2u((float)((*pfVar4 + *(float *)(param_1 + 0x3c))));
      in_s0 = (unsigned int *)romwright_f2u((float)((pfVar4[1] + *(float *)(param_1 + 0x40))));
      temp_v9 = in_s0;
      FUN_00492c18(temp_v14,&temp_v8);
    }
  }
  if ((DAT_005f161d != '\0') && ((*(unsigned int *)(param_1 + 0x10) & 0x20000) == 0)) {
    FUN_00317af8(&temp_v10,temp_v15,0);
    naviMainGetValue(temp_v14);
    pfVar4 = (float *)sub68OwnerGetBlock60(temp_v14);
    temp_v10 = -(temp_v10 * 13.0f);
    temp_v15[0] = -(temp_v15[0] * 13.0f);
    temp_v12 = (unsigned int *)romwright_f2u((float)((temp_v10 / romwright_u2f((unsigned int)(in_s0)) + *pfVar4)));
    temp_v13 = pfVar4[1] - temp_v15[0] / romwright_u2f((unsigned int)(in_s0));
    FUN_00492c18(temp_v14,&temp_v12);
    puVar7 = (unsigned char *)(param_1 + 0x7b91);
    *puVar7 = 1;
    temp_v1 = inputIsQuestConfirmPressed();
    puVar10 = (unsigned int *)(param_1 + 0x20510);
    puVar8 = (unsigned char *)(param_1 + 0x7b90);
    if (temp_v1 != 0) {
      FUN_003d2150(0x1000229);
      if (DAT_005f1a5e != '\0') {
        temp_v1 = FUN_00492c5c(temp_v14);
        temp_v0 = FUN_00492bc0(temp_v14);
        if (temp_v1 == temp_v0) {
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
          sub68OwnerGetBlock60(temp_v14);
          temp_v16 = temp_v7;
          temp_v17 = temp_v7;
          FUN_00492c18(temp_v14,&temp_v16);
          *(char *)(param_1 + 100) = (char)*puVar10;
          *puVar8 = 1;
          *puVar7 = 1;
        }
        naviRequestSelectedMap();
      }
      else {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
        sub68OwnerGetBlock60(temp_v14);
        temp_v16 = temp_v7;
        temp_v17 = temp_v7;
        FUN_00492c18(temp_v14,&temp_v16);
        *(char *)(param_1 + 100) = (char)*puVar10;
        *puVar8 = 1;
        *puVar7 = 1;
      }
      *(unsigned char *)(param_1 + 0x58) = 5;
      *(unsigned char *)(param_1 + 0x5b) = 0;
    }
    else {
      temp_v1 = inputIsQuestCancelPressed();
      if (temp_v1 != 0) {
        FUN_003d2150(0x1000229);
        if (DAT_005f1a5e != '\0') {
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
          temp_v3 = FUN_00492c84(temp_v14);
          FUN_0048d248(param_1,temp_v3);
          sub68OwnerGetBlock60(temp_v14);
          temp_v16 = temp_v7;
          temp_v17 = temp_v7;
          FUN_00492c18(temp_v14,&temp_v16);
        }
        else {
          if (*(int *)(temp_v0 + 0x15b8) != 0) {
            *(int *)(temp_v0 + 0x15b8) = 0;
          }
          FUN_003a35a4();
        }
        *puVar8 = 1;
        *puVar7 = 1;
        *(unsigned char *)(param_1 + 0x58) = 0;
        *(unsigned char *)(param_1 + 0x5b) = 5;
      }
      else {
        temp_v1 = FUN_004d04c4();
        if (temp_v1 != 0) {
          if (*(int *)(temp_v0 + 0x1514) != 0) {
            FUN_003d2150(0x100020e);
            piVar9 = (int *)(temp_v0 + 0x1510);
            if (*piVar9 != 0) {
              *piVar9 = 0;
            }
            else {
              *piVar9 = 1;
            }
            *(unsigned char *)(param_1 + 0x56) = 5;
          }
        }
        else {
          temp_v1 = FUN_004d0584();
          if (temp_v1 != 0) {
            FUN_003d2150(0x100020e);
            piVar9 = (int *)(temp_v0 + 0x1514);
            temp_v1 = *piVar9;
            *piVar9 = temp_v1 + 1;
            if (temp_v1 + 1 >= 3) {
              *piVar9 = 0;
            }
            *(unsigned char *)(param_1 + 0x57) = 5;
            if (*piVar9 != 0) {
              if (*piVar9 != 1) {
                return 0;
              }
              FUN_00183e58();
              temp_v7 = 0xf6;
            }
            else {
              FUN_00183e58();
              temp_v7 = 0x10a;
            }
            sysPlaySe(temp_v7);
          }
          else {
            temp_v1 = inputIsQuestMenuPressed();
            if (temp_v1 != 0) {
              FUN_003d2150(0x100020f);
              if (DAT_005f1a5e != '\0') {
                temp_v1 = FUN_00492bc0(temp_v14);
                temp_v0 = NaviMain_GetCurrentMap(temp_v14);
                if ((temp_v1 != temp_v0) && (DAT_005f1a5c == '\0')) {
                  naviRequestSelectedMap();
                  temp_v1 = 0;
                  do {
                    uiSpriteSetKeyframe(param_1 + temp_v1 * 0x8c + 0xc40,7,0);
                    temp_v1 = temp_v1 + 1;
                  } while (temp_v1 < 6);
                  *(unsigned char *)(param_1 + 0x20644) = 1;
                  return 0;
                }
              }
              temp_v1 = FUN_00492c5c(temp_v14);
              temp_v0 = FUN_00492bc0(temp_v14);
              if (temp_v1 == temp_v0) {
                sub68OwnerGetBlock60(temp_v14);
                temp_v16 = temp_v7;
                temp_v17 = temp_v7;
                FUN_00492c18(temp_v14,&temp_v16);
                *(char *)(param_1 + 100) = (char)*puVar10;
                *puVar8 = 1;
                *puVar7 = 1;
              }
              puVar10 = (unsigned int *)FUN_00492bc0(temp_v14);
              puVar6 = (unsigned int *)NaviMain_GetCurrentMap(temp_v14);
              temp_v4 = puVar10 == puVar6;
              if (temp_v4) {
                puVar6 = &g_gameState;
              }
              temp_v1 = 0;
              if (temp_v4) {
                *(unsigned char *)((int)puVar6 + 0x462) = 0;
              }
              *(unsigned int *)(param_1 + 4) = 0xe;
              *(unsigned int *)(param_1 + 8) = 0;
              do {
                uiSpriteSetKeyframe(param_1 + temp_v1 * 0x8c + 0xc40,7,0);
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < 6);
            }
          }
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
