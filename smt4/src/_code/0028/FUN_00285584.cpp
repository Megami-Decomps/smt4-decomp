/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285584` (_code @ 0x285584, 0x70c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e70c(void);
int renderCtxCallB(float *);
int nn_math_ARMv6_MTX34AddTranslateAsm(float *, float *);
int nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(float *, float *, float *);
int FUN_002ae038(...);
int FUN_002ae9ec(...);
int FUN_002b64b8(void);
int FUN_002b659c(int, int, int, int);
int renderCtxCalculateStereoParallax(int);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int asdTMTexTableEntryAt(int, int);
int efctSetSpeed(void);
int renderCtxApplyTransforms(...);
int spriteDrawAnimationUnplaced(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);

typedef struct fn_00285584_arg0 fn_00285584_arg0;
struct fn_00285584_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x20];
    undefined4 field_0x48; /* +0x48 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern int g_titleScene; /* 0x44ea00 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern unsigned int FUN_0026e6a0(unsigned int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_0026e70c. */
/* Supplied declaration required: renderCtxCallB. */
/* Supplied declaration required: nn_math_ARMv6_MTX34AddTranslateAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm_2A3504. */
/* Supplied declaration required: FUN_002ae038. */
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: FUN_002b64b8. */
/* Supplied declaration required: FUN_002b659c. */
extern int FUN_002b8660(void);
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: efctSetSpeed. */
extern int *jobGetWork(void);
/* Supplied declaration required: renderCtxApplyTransforms. */
extern int FUN_002c1d5c(void);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: spriteDrawAnimationUnplaced. */


void FUN_00285584(fn_00285584_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int uStack_64;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int uStack_58;
  unsigned int temp_v30;
  float temp_v31;
  float fStack_4c;
  float temp_v32;
  float temp_v33;
  float fStack_40;
  float temp_v34;
  
  piVar2 = (int *)jobGetWork();
  if (piVar2[3] == 0) {
    temp_v12 = 0.0f;
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)piVar2[9] == 0.0f) << 0x1e);
    if ((!romwright_subpiece_4_1_0(temp_v4 >> 0x1e,0)) &&
       ((temp_v1 = FUN_002c1d5c(), temp_v1 == 0 || (temp_v1 = FUN_002b8660(), temp_v1 == 0)))) {
      temp_v6 = (float)piVar2[6];
      temp_v11 = *(unsigned long long *)(piVar2 + 8);
      renderCtxCalculateStereoParallax(g_titleScene);
      temp_v1 = (int)temp_v6;
      temp_v10 = (float)((unsigned long long)temp_v11 >> 0x20);
      temp_v6 = (float)temp_v11;
      if (piVar2[0x12] == 0) {
        if ((char)piVar2[0x19] != '\0') {
          temp_v6 = (float)piVar2[10];
          temp_v4 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v12) << 0x1f) |
                  ((unsigned int)(temp_v6 == temp_v12) << 0x1e);
          temp_v5 = temp_v4 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v12 != temp_v12)) << 0x1c);
          temp_v0 = (unsigned char)(temp_v4 >> 0x18);
          if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v5 >> 0x1c) & 1)) {
            temp_v33 = (float)piVar2[0x21];
            fStack_40 = (float)piVar2[0x22];
            temp_v31 = -temp_v33;
            fStack_4c = -fStack_40;
            temp_v13 = (float)piVar2[9];
            temp_v14 = 0;
            temp_v15 = 0.0f;
            temp_v16 = 0.0f;
            temp_v17 = 0.0f;
            temp_v19 = 0;
            temp_v20 = 0;
            temp_v21 = 0;
            temp_v22 = 0;
            temp_v23 = 0x3f800000;
            temp_v27 = 0;
            uStack_64 = 0x3f800000;
            temp_v24 = 0;
            temp_v25 = 0;
            temp_v26 = 0;
            temp_v18 = temp_v13;
            temp_v32 = temp_v12;
            temp_v34 = temp_v12;
            nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(&temp_v13,&temp_v13,&temp_v31);
            nn_math_ARMv6_MTX34AddTranslateAsm(&temp_v13,&temp_v33);
            renderCtxCallB(&temp_v13);
          }
          asdTMTexTableEntryAt(0x32,0xc);
          if (-1 < piVar2[0x11]) {
            efctSetSpeed();
            temp_v13 = (float)(piVar2[5] + param_3);
            temp_v14 = piVar2[1] + piVar2[2];
            FUN_002bf288(2,piVar2[0xf],piVar2[0x11] * 1000,
                         (int)(float)piVar2[7] + temp_v1 + piVar2[4] + param_2);
          }
          temp_v28 = (unsigned int)temp_v11;
          temp_v30 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
          temp_v29 = temp_v28;
          uStack_58 = temp_v28;
          FUN_002ae038(&temp_v28);
          efctSetSpeed();
          temp_v13 = (float)(piVar2[5] + param_3);
          temp_v14 = piVar2[1] + piVar2[2];
          FUN_002bf288(2,piVar2[0xf],piVar2[0x10] * 1000,
                       piVar2[4] + param_2 + (int)(float)piVar2[7] + temp_v1);
          efctSetSpeed();
          temp_v7 = g_titleScene;
          temp_v8 = packNibblesAndByte(6,1,0);
          piVar6 = (int *)(temp_v7 + 0x12ac);
          temp_v9 = *piVar6;
          temp_v3 = piVar6[temp_v9 + 2];
          *piVar6 = temp_v9 + 1;
          piVar6[temp_v9 + 3] = temp_v8;
          if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v3 != temp_v8) {
            (**(romwright_code **)(temp_v7 + 0x12c8))();
            *(unsigned char *)(temp_v7 + 0x12c4) = 0;
          }
          temp_v14 = piVar2[1] + piVar2[2] + 1;
          temp_v6 = (float)VectorSignedToFloat(piVar2[5] + param_3,(unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v13 = (float)(int)(temp_v6 - (float)piVar2[0x1e]);
          temp_v6 = (float)VectorSignedToFloat((int)(float)piVar2[7] + temp_v1 + piVar2[4] + param_2,
                                             (unsigned char)(temp_v5 >> 0x16) & 3);
          FUN_002bf380(2,0x32,0,(int)(temp_v6 - (float)piVar2[0x1d]));
          FUN_002b659c(piVar2[4] + param_2 + temp_v1,piVar2[5] + param_3,(int)(float)piVar2[0x23],
                       (int)(float)piVar2[0x24]);
          VectorSignedToFloat(piVar2[0x1b],(unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v6 = -10.0f;
          FUN_0026e70c();
          temp_v10 = (float)VectorSignedToFloat(piVar2[5] + param_3,(unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v6 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v14 = piVar2[1] + piVar2[2] + 1;
          temp_v13 = (float)(int)((temp_v10 - (float)piVar2[0x1e]) + temp_v6);
          temp_v6 = (float)VectorSignedToFloat((int)(float)piVar2[7] + temp_v1 + piVar2[4] + param_2,
                                             (unsigned char)(temp_v5 >> 0x16) & 3);
          FUN_002bf380(2,0x32,1,(int)(temp_v6 - (float)piVar2[0x1d]));
          FUN_002b64b8();
          temp_v13 = 1.4013e-45f;
          temp_v2 = FUN_0026e6a0(0x32,100,0x1e,piVar2[0x1a]);
          VectorSignedToFloat(temp_v2,(unsigned char)(temp_v5 >> 0x16) & 3);
          efctSetSpeed();
          if (*piVar2 != 2) {
            temp_v14 = piVar2[1] + piVar2[2] + 1;
            temp_v6 = (float)VectorSignedToFloat(piVar2[5] + param_3,(unsigned char)(temp_v5 >> 0x16) & 3);
            temp_v13 = (float)(int)(temp_v6 - (float)piVar2[0x1e]);
            temp_v6 = (float)VectorSignedToFloat((int)(float)piVar2[7] + temp_v1 + piVar2[4] + param_2,
                                               (unsigned char)(temp_v5 >> 0x16) & 3);
            FUN_002ae9ec(2,0x32,0xb,(int)(temp_v6 - (float)piVar2[0x1d]));
          }
          temp_v1 = g_titleScene;
          piVar6 = (int *)(g_titleScene + 0x12ac);
          temp_v7 = *piVar6;
          temp_v8 = piVar6[temp_v7 + 2];
          *piVar6 = temp_v7 - 1;
          if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v8 != piVar6[temp_v7 + 1]) {
            (**(romwright_code **)(temp_v1 + 0x12c8))(piVar6[temp_v7 + 1]);
            *(unsigned char *)(temp_v1 + 0x12c4) = 0;
          }
          if (temp_v12 < (float)piVar2[10]) {
            renderCtxApplyTransforms(g_titleScene);
          }
        }
        else {
          temp_v15 = temp_v6;
          temp_v16 = temp_v6;
          temp_v17 = temp_v6;
          temp_v18 = temp_v10;
          FUN_002ae038(&temp_v15);
          efctSetSpeed();
          temp_v13 = (float)(piVar2[5] + param_3);
          temp_v14 = piVar2[1] + piVar2[2];
          FUN_002bf288(2,piVar2[0xf],piVar2[0x10] * 1000,
                       piVar2[4] + temp_v1 + (int)(float)piVar2[7] + param_2);
          if (-1 < piVar2[0x11]) {
            efctSetSpeed();
            temp_v13 = (float)(piVar2[5] + param_3);
            temp_v14 = piVar2[1] + piVar2[2];
            FUN_002bf288(2,piVar2[0xf],piVar2[0x11] * 1000,
                         piVar2[4] + temp_v1 + (int)(float)piVar2[7] + param_2);
          }
        }
        FUN_002bed3c();
        efctSetSpeed();
        return;
      }
      temp_v16 = (float)VectorSignedToFloat(0x100 - (piVar2[1] + piVar2[2]),
                                            (unsigned char)(temp_v4 >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat(piVar2[5] + param_3,(unsigned char)(temp_v4 >> 0x16) & 3);
      temp_v14 = VectorSignedToFloat(piVar2[4] + temp_v1 + (int)(float)piVar2[7] + param_2,
                                     (unsigned char)(temp_v4 >> 0x16) & 3);
      temp_v16 = temp_v16 * -0.00390625f;
      temp_v13 = 0.0f;
      temp_v1 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
      temp_v9 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
      temp_v7 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
      temp_v8 = VectorFloatToUnsigned(temp_v10 * 255.0f,3);
      spriteDrawAnimationUnplaced(piVar2[0x12],0,&temp_v14,
                   temp_v8 + (temp_v7 + (temp_v9 + temp_v1 * 0x100) * 0x100) * 0x100);
    }
  }
  return;
}

} /* extern "C" */
