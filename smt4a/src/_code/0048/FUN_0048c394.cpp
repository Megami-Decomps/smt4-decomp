/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048c394` (_code @ 0x48c394, 0x930 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(...);
int FUN_00317af8(float *, float [3], int);
int FUN_00357a48(void);
int FUN_003a35a4(void);
int FUN_003d2150(...);
int FUN_0048816c(...);
int FUN_0048d248(int, unsigned int);
int rectRecRead(...);
int FUN_00492ab4(...);
int sub68OwnerGetBlock60(...);
int FUN_00492bc0(...);
int FUN_00492c18(...);
int FUN_00492c5c(...);
int FUN_004d03c8(...);
int FUN_004d040c(...);
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
/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern float DAT_00587f10; /* 0x587f10 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f1614; /* 0x5f1614 */
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
extern int padButtonIsPressed(unsigned int);
extern int FUN_00167c0c(unsigned int *, unsigned int *);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_00357a48. */
extern int FUN_00384cf4(void);
/* Supplied declaration required: FUN_003a35a4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_0048816c. */
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: rectRecRead. */
/* Supplied declaration required: FUN_00492ab4. */
/* Supplied declaration required: sub68OwnerGetBlock60. */
/* Supplied declaration required: FUN_00492bc0. */
/* Supplied declaration required: FUN_00492c18. */
/* Supplied declaration required: FUN_00492c5c. */
extern unsigned int FUN_00492c84(int);
/* Supplied declaration required: FUN_004d03c8. */
/* Supplied declaration required: FUN_004d040c. */
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestConfirmPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: NaviMain_GetCurrentMap. */


void FUN_0048c394(int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr, in_s0; 17 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  unsigned int ******in_s0;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int ******ppppppuVar14;
  unsigned int *****temp_v8;
  unsigned int *****temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  float temp_v13;
  unsigned int ****temp_v14;
  unsigned int *****temp_v15;
  int temp_v16;
  int temp_v17 [2];
  int temp_v18;
  float temp_v19 [3];
  
  temp_v0 = gameFlagsGetBlock();
  ppppppuVar14 = (unsigned int ******)0x0;
  temp_v11 = param_1 + 0x4cc;
  puVar6 = (unsigned char *)(param_1 + 0x7b91);
  if (DAT_005f161d != '\0') {
    FUN_00317af8(&temp_v13,temp_v19,0);
    FUN_00492ab4(temp_v11);
    pfVar2 = (float *)sub68OwnerGetBlock60(temp_v11);
    temp_v13 = -(temp_v13 * 13.0f);
    temp_v19[0] = -(temp_v19[0] * 13.0f);
    temp_v14 = (unsigned int ****)romwright_f2u((float)((temp_v13 / romwright_u2f((unsigned int)(in_s0)) + *pfVar2)));
    in_s0 = (unsigned int ******)romwright_f2u((float)((pfVar2[1] - temp_v19[0] / romwright_u2f((unsigned int)(in_s0)))));
    temp_v15 = (unsigned int *****)in_s0;
    FUN_00492c18(temp_v11,&temp_v14);
    *puVar6 = 1;
    temp_v1 = inputIsQuestConfirmPressed();
    puVar7 = (unsigned int *)(param_1 + 0x20510);
    puVar5 = (unsigned char *)(param_1 + 0x7b90);
    if (temp_v1 != 0) {
      FUN_003d2150(0x1000229);
      if (DAT_005f1a5e != '\0') {
        temp_v0 = FUN_00492c5c();
        temp_v1 = FUN_00492bc0(temp_v11);
        if (temp_v0 == temp_v1) {
          sub68OwnerGetBlock60(temp_v11);
          temp_v8 = (unsigned int *****)ppppppuVar14;
          temp_v9 = (unsigned int *****)ppppppuVar14;
          FUN_00492c18(temp_v11,&temp_v8);
          *(char *)(param_1 + 100) = (char)*puVar7;
          *puVar5 = 1;
          *puVar6 = 1;
        }
        FUN_00357a48();
      }
      else {
        sub68OwnerGetBlock60(temp_v11);
        temp_v8 = (unsigned int *****)ppppppuVar14;
        temp_v9 = (unsigned int *****)ppppppuVar14;
        FUN_00492c18(temp_v11,&temp_v8);
        *(char *)(param_1 + 100) = (char)*puVar7;
        *puVar5 = 1;
        *puVar6 = 1;
      }
      *(unsigned char *)(param_1 + 0x5b) = 0;
      *(unsigned char *)(param_1 + 0x58) = 5;
    }
    else {
      temp_v1 = inputIsQuestCancelPressed();
      if (temp_v1 != 0) {
        FUN_003d2150(0x1000229);
        if (DAT_005f1a5e != '\0') {
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
          temp_v6 = FUN_00492c84(temp_v11);
          FUN_0048d248(param_1,temp_v6);
          sub68OwnerGetBlock60(temp_v11);
          temp_v8 = (unsigned int *****)ppppppuVar14;
          temp_v9 = (unsigned int *****)ppppppuVar14;
          FUN_00492c18(temp_v11,&temp_v8);
        }
        else {
          if (*(int *)(temp_v0 + 0x15b8) != 0) {
            *(int *)(temp_v0 + 0x15b8) = 0;
          }
          sub68OwnerGetBlock60(temp_v11);
          temp_v8 = (unsigned int *****)ppppppuVar14;
          temp_v9 = (unsigned int *****)ppppppuVar14;
          FUN_00492c18(temp_v11,&temp_v8);
          *(unsigned int ******)(param_1 + 0x34) = temp_v8;
          *(unsigned int ******)(param_1 + 0x38) = temp_v9;
          FUN_003a35a4();
        }
        *(unsigned char *)(param_1 + 0x58) = 0;
        *(unsigned char *)(param_1 + 0x5b) = 5;
        *puVar5 = 1;
        *puVar6 = 1;
      }
      else {
        temp_v1 = FUN_004d0584();
        if (temp_v1 != 0) {
          if ((DAT_005f1a5e != '\0') && (temp_v1 = FUN_00384cf4(), temp_v1 == 0)) {
            return;
          }
          FUN_003d2150(0x100020e);
          if (*(char *)(temp_v0 + 0xd8e) != '\x06') {
            if (*(char *)(temp_v0 + 0xd8e) == '\f') {
              *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
              *puVar5 = 1;
              *puVar6 = 1;
              pfVar2 = (float *)sub68OwnerGetBlock60(temp_v11);
              temp_v8 = (unsigned int *****)romwright_f2u((float)((*pfVar2 * 0.5f)));
              in_s0 = (unsigned int ******)romwright_f2u((float)((pfVar2[1] * 0.5f)));
              temp_v9 = (unsigned int *****)in_s0;
              FUN_00492c18(temp_v11,&temp_v8);
              *(unsigned char *)(temp_v0 + 0xd8e) = 6;
              *(unsigned char *)(param_1 + 0x57) = 0;
              *(unsigned char *)(param_1 + 0x59) = 5;
            }
          }
          else {
            *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
            *puVar5 = 1;
            *puVar6 = 1;
            pfVar2 = (float *)sub68OwnerGetBlock60(temp_v11);
            temp_v8 = (unsigned int *****)romwright_f2u((float)((*pfVar2 * 2.0f)));
            in_s0 = (unsigned int ******)romwright_f2u((float)((pfVar2[1] * 2.0f)));
            temp_v9 = (unsigned int *****)in_s0;
            FUN_00492c18(temp_v11,&temp_v8);
            *(unsigned char *)(temp_v0 + 0xd8e) = 0xc;
            *(unsigned char *)(param_1 + 0x57) = 5;
            *(unsigned char *)(param_1 + 0x59) = 0;
          }
        }
        else {
          temp_v0 = padButtonIsPressed(5);
          if (temp_v0 != 0) {
            if ((DAT_005f1a5e != '\0') && (temp_v0 = FUN_00384cf4(), temp_v0 == 0)) {
              return;
            }
            temp_v0 = param_1;
            FUN_0048816c(param_1,1);
            if (temp_v0 != 0) {
              FUN_003d2150(0x100020d);
              *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
              temp_v0 = param_1;
              FUN_0048816c(param_1,1);
              if (temp_v0 != 0) {
                *(char *)(param_1 + 100) = (char)temp_v0;
              }
              *(unsigned char *)(param_1 + 0x56) = 5;
              *puVar5 = 1;
              *puVar6 = 1;
            }
          }
          else {
            temp_v0 = padButtonIsPressed(6);
            if (temp_v0 != 0) {
              if ((DAT_005f1a5e != '\0') && (temp_v0 = FUN_00384cf4(), temp_v0 == 0)) {
                return;
              }
              temp_v0 = param_1;
              FUN_0048816c(param_1,0xffffffff);
              if (temp_v0 != 0) {
                *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
                FUN_003d2150(0x100020d);
                temp_v0 = param_1;
                FUN_0048816c(param_1,0xffffffff);
                if (temp_v0 != 0) {
                  *(char *)(param_1 + 100) = (char)temp_v0;
                }
                *(unsigned char *)(param_1 + 0x5a) = 5;
                *puVar5 = 1;
                *puVar6 = 1;
              }
            }
            else {
              temp_v0 = inputIsQuestMenuPressed();
              if (temp_v0 != 0) {
                FUN_003d2150(0x100020f);
                if (DAT_005f1a5e != '\0') {
                  temp_v0 = FUN_00492bc0(temp_v11);
                  temp_v1 = NaviMain_GetCurrentMap(temp_v11);
                  if ((temp_v0 != temp_v1) && (DAT_005f1a5c == '\0')) {
                    FUN_00357a48();
                    temp_v0 = 0;
                    do {
                      uiSpriteSetKeyframe(param_1 + temp_v0 * 0x8c + 0xc40,7,0);
                      temp_v0 = temp_v0 + 1;
                    } while (temp_v0 < 6);
                    *(unsigned char *)(param_1 + 0x20644) = 1;
                    goto LAB_0048c990;
                  }
                }
                temp_v0 = FUN_00492c5c(temp_v11);
                temp_v1 = FUN_00492bc0(temp_v11);
                if (temp_v0 == temp_v1) {
                  sub68OwnerGetBlock60(temp_v11);
                  temp_v8 = (unsigned int *****)ppppppuVar14;
                  temp_v9 = (unsigned int *****)ppppppuVar14;
                  FUN_00492c18(temp_v11,&temp_v8);
                  *(char *)(param_1 + 100) = (char)*puVar7;
                  *puVar5 = 1;
                  *puVar6 = 1;
                }
                puVar7 = (unsigned int *)FUN_00492bc0(temp_v11);
                puVar4 = (unsigned int *)NaviMain_GetCurrentMap(temp_v11);
                temp_v2 = puVar7 == puVar4;
                if (temp_v2) {
                  puVar4 = &g_gameState;
                }
                temp_v0 = 0;
                if (temp_v2) {
                  *(unsigned char *)((int)puVar4 + 0x462) = 0;
                }
                *(unsigned int *)(param_1 + 4) = 0xe;
                *(unsigned int *)(param_1 + 8) = 0;
                do {
                  uiSpriteSetKeyframe(param_1 + temp_v0 * 0x8c + 0xc40,7,0);
                  temp_v0 = temp_v0 + 1;
                } while (temp_v0 < 6);
              }
            }
          }
        }
      }
    }
  }
LAB_0048c990:
  if ((*(unsigned int *)(param_1 + 0x10) & 0x2000000) == 0) {
    temp_v9 = &temp_v14;
    temp_v8 = (unsigned int *****)&temp_v15;
    rectRecRead(0x13,0xfa4,temp_v17,&temp_v16);
    FUN_004d040c(temp_v17[0],temp_v16,temp_v15,temp_v14);
    if ((temp_v17[0] != 0) && (DAT_005f1614 == '\0')) {
      FUN_004d03c8(&temp_v12,&temp_v18);
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x20000;
      temp_v6 = VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x44) = temp_v6;
      temp_v7 = VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x48) = temp_v7;
      *(unsigned int *)(param_1 + 0x4c) = temp_v5;
      *(unsigned int *)(param_1 + 0x50) = temp_v6;
      puVar7 = (unsigned int *)sub68OwnerGetBlock60(temp_v11);
      temp_v5 = *puVar7;
      temp_v6 = puVar7[1];
      temp_v7 = VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x2c) = temp_v7;
      in_s0 = (unsigned int ******)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *******)(param_1 + 0x30) = in_s0;
      *(unsigned int *)(param_1 + 0x38) = temp_v6;
      *(unsigned int *)(param_1 + 0x34) = temp_v5;
      *(unsigned int *******)(param_1 + 0x3c) = ppppppuVar14;
      *(unsigned int *******)(param_1 + 0x40) = ppppppuVar14;
      *(unsigned char *)(param_1 + 0x54) = 0;
      *(unsigned char *)(param_1 + 0x55) = 0;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) {
    temp_v0 = FUN_00167c0c((unsigned int *)&temp_v12,(unsigned int *)&temp_v10);
    if ((temp_v0 == 0) || (DAT_005f1614 != '\0')) {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
      if (*(char *)(param_1 + 0x54) >= '\x03') {
        *(unsigned int *******)(param_1 + 0x3c) = ppppppuVar14;
        *(unsigned int *******)(param_1 + 0x40) = ppppppuVar14;
      }
      else {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50);
      }
    }
    else {
      FUN_00492ab4(temp_v11);
      temp_v4 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (unsigned int *****)
                 romwright_f2u((float)(((temp_v4 - *(float *)(param_1 + 0x2c)) / romwright_u2f((unsigned int)(in_s0)) + *(float *)(param_1 + 0x34))))
      ;
      temp_v4 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (unsigned int *****)
                 romwright_f2u((float)(((temp_v4 - *(float *)(param_1 + 0x30)) / romwright_u2f((unsigned int)(in_s0)) + *(float *)(param_1 + 0x38))))
      ;
      FUN_00492c18(temp_v11,&temp_v8);
      temp_v4 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x44) == temp_v4) << 0x1e);
      if (romwright_subpiece_4_1_0(temp_v3 >> 0x1e,0)) {
        temp_v4 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(temp_v3 >> 0x16) & 3);
        temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x48) == temp_v4) << 0x1e);
        if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1e,0)) goto LAB_0048cc98;
        if (*(char *)(param_1 + 0x54) < 'c') {
          *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
        }
      }
      else {
LAB_0048cc98:
        temp_v6 = VectorSignedToFloat(temp_v12,(unsigned char)(temp_v3 >> 0x16) & 3);
        *(unsigned char *)(param_1 + 0x54) = 0;
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x48);
        *(unsigned int *)(param_1 + 0x44) = temp_v6;
        temp_v6 = VectorSignedToFloat(temp_v10,(unsigned char)(temp_v3 >> 0x16) & 3);
        *(unsigned int *)(param_1 + 0x48) = temp_v6;
      }
      *puVar6 = 1;
    }
    if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) != 0) {
      return;
    }
  }
  temp_v4 = DAT_00587f10;
  if ((int)romwright_fabs_4(*(float *)(param_1 + 0x3c)) < 0x3f000001) {
    if ((int)romwright_fabs_4(*(float *)(param_1 + 0x40)) < 0x3f000001) {
      *(unsigned int *******)(param_1 + 0x3c) = ppppppuVar14;
      *(unsigned int *******)(param_1 + 0x40) = ppppppuVar14;
      return;
    }
  }
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * DAT_00587f10;
  temp_v4 = *(float *)(param_1 + 0x40) * temp_v4;
  *(float *)(param_1 + 0x40) = temp_v4;
  FUN_00492ab4(temp_v11);
  pfVar2 = (float *)sub68OwnerGetBlock60(temp_v11);
  temp_v14 = (unsigned int ****)romwright_f2u((float)((*(float *)(param_1 + 0x3c) / temp_v4 + *pfVar2)));
  temp_v15 = (unsigned int *****)romwright_f2u((float)((*(float *)(param_1 + 0x40) / temp_v4 + pfVar2[1])));
  FUN_00492c18(temp_v11,&temp_v14);
  *puVar6 = 1;
  return;
}

} /* extern "C" */
