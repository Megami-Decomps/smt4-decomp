/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa6a4` (_code @ 0x1aa6a4, 0x6c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int facingUpdateAngles(int, int);
int FUN_00286198(...);
int mtxMakeTranslation(...);
int layoutApplyForState(int);
int FUN_002b2144(...);
int cameraSetViewMatrix(...);
int FUN_002ba1e0(...);
int mtx44Copy(unsigned char [72], unsigned int);
int renderCtxSelectTexture(...);
int VectorSignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char [48], float *);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [68], unsigned char [48]);
int nn_math_ARMv6_MTX34ToMTX33Asm(unsigned char [36], unsigned char [68]);
int nn_math_ARMv6_MTX44MultAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2A87B4(float *, unsigned char [36], float *);

typedef int romwright_code(...);
/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern float _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern float DAT_004efd70; /* 0x4efd70 */
extern float DAT_004efd74; /* 0x4efd74 */
extern float DAT_004efd78; /* 0x4efd78 */
extern float DAT_004efd7c; /* 0x4efd7c */
extern float DAT_004efd80; /* 0x4efd80 */
extern float DAT_004efd84; /* 0x4efd84 */
extern float DAT_004efd88; /* 0x4efd88 */
extern float DAT_004efd8c; /* 0x4efd8c */
extern float DAT_004efd90; /* 0x4efd90 */
extern float DAT_004efd94; /* 0x4efd94 */
extern float DAT_004efd98; /* 0x4efd98 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: facingUpdateAngles. */
/* Supplied declaration required: FUN_00286198. */
/* Supplied declaration required: mtxMakeTranslation. */
/* Supplied declaration required: layoutApplyForState. */
extern unsigned int _ZN2nw4math5MTX448IdentityEv(void);
/* Supplied declaration required: FUN_002b2144. */
/* Supplied declaration required: cameraSetViewMatrix. */
/* Supplied declaration required: FUN_002ba1e0. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: renderCtxSelectTexture. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34ToMTX33Asm. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */


void FUN_001aa6a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 20 native warning(s); review required */
  unsigned int temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned char temp_v18 [72];
  float temp_v19 [6];
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int uStack_124;
  unsigned char temp_v29 [64];
  unsigned char temp_v30 [48];
  unsigned char temp_v31 [36];
  int temp_v32;
  float temp_v33;
  unsigned int temp_v34;
  float temp_v35;
  float fStack_74;
  float fStack_70;
  unsigned char temp_v36 [68];
  
  if (*(char *)(param_1 + 1000) == '\0') {
    return;
  }
  layoutApplyForState(g_titleScene);
  temp_v0 = _ZN2nw4math5MTX448IdentityEv();
  mtx44Copy(temp_v18,temp_v0);
  temp_v3 = g_titleScene;
  temp_v9 = (*(unsigned char *)(param_1 + 0x130) & 7) >> 1;
  if (temp_v9 != 0) {
    if (temp_v9 != 1) {
      if (temp_v9 != 2) {
        if (temp_v9 == 3) {
          temp_v8 = packNibblesAndByte(5,0,1);
          piVar6 = (int *)(temp_v3 + 0x12ac);
          temp_v1 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v8;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v8) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
        }
      }
      else {
        temp_v8 = packNibblesAndByte(6,1,2);
        piVar6 = (int *)(temp_v3 + 0x12ac);
        temp_v1 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v8;
        if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v8) {
          (**(romwright_code **)(temp_v3 + 0x12c8))();
          *(unsigned char *)(temp_v3 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v8 = packNibblesAndByte(6,1,0);
      piVar6 = (int *)(temp_v3 + 0x12ac);
      temp_v1 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v8;
      if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v8) {
        (**(romwright_code **)(temp_v3 + 0x12c8))();
        *(unsigned char *)(temp_v3 + 0x12c4) = 0;
      }
    }
  }
  else {
    temp_v8 = packNibblesAndByte(6,7,0);
    piVar6 = (int *)(temp_v3 + 0x12ac);
    temp_v1 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v8;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v8) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
  }
  temp_v11 = 0.0f;
  pfVar2 = *(float **)(*(int *)(param_1 + 0x354) + 4);
  if (pfVar2 != (float *)0x0) {
    temp_v14 = *pfVar2 * 0.03125f;
    temp_v15 = pfVar2[1] * 0.03125f;
    temp_v16 = 0.0f;
    mtxMakeTranslation(temp_v30,&temp_v14);
    nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
  }
  temp_v32 = *(unsigned int *)(param_1 + 0x120);
  temp_v34 = *(unsigned int *)(param_1 + 0x128);
  temp_v33 = -*(float *)(param_1 + 0x124);
  mtxMakeTranslation(temp_v29,&temp_v32);
  nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v29);
  if (*(char *)(param_1 + 0x380) == '\x01') {
    temp_v14 = *(float *)(param_1 + 0x358);
    temp_v15 = *(float *)(param_1 + 0x35c);
    temp_v16 = *(float *)(param_1 + 0x360);
    mtxMakeTranslation(temp_v30,&temp_v14);
    nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
  }
  if (*(char *)(param_1 + 0x380) == '\x03') {
    facingUpdateAngles(param_1,0);
  }
  temp_v10 = 1.0f;
  if ((*(unsigned char *)(param_1 + 0x130) & 1) != 0) {
    if (*(char *)(param_1 + 0x380) == '\x01') {
      FUN_00286198(temp_v18,*(int *)(param_1 + 4) - *(int *)(param_1 + 0x160),
                   *(int *)(param_1 + 0x164) - *(int *)(param_1 + 8),
                   *(int *)(param_1 + 0x168) - *(int *)(param_1 + 0xc));
      FUN_00286198(temp_v18,0,-*(int *)(param_1 + 0x368));
      temp_v3 = (int)*(short *)(param_1 + 0x170);
      temp_v0 = 0;
      temp_v8 = *(short *)(param_1 + 0x16e) - 0x5a;
    }
    else {
      temp_v3 = *(int *)(param_1 + 4);
      temp_v8 = *(int *)(param_1 + 8);
      temp_v0 = *(unsigned int *)(param_1 + 0xc);
    }
    FUN_00286198(temp_v18,temp_v3,temp_v8,temp_v0);
    temp_v9 = temp_v4;
  }
  else if (*(char *)(param_1 + 0x380) != '\0') {
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v10;
      DAT_004efd70 = temp_v11;
      DAT_004efd74 = temp_v11;
      DAT_004efd78 = temp_v11;
      DAT_004efd7c = temp_v11;
      DAT_004efd80 = temp_v10;
      DAT_004efd84 = temp_v11;
      DAT_004efd88 = temp_v11;
      DAT_004efd8c = temp_v11;
      DAT_004efd90 = temp_v11;
      DAT_004efd94 = temp_v10;
      DAT_004efd98 = temp_v11;
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v30,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    nn_math_ARMv6_MTX34InvTransposeAsm(temp_v36,temp_v30);
    nn_math_ARMv6_MTX34ToMTX33Asm(temp_v31,temp_v36);
    temp_v3 = 0;
    do {
      pfVar2 = (float *)(param_1 + 0x388 + temp_v3 * 0x18);
      temp_v35 = *pfVar2;
      fStack_74 = pfVar2[1];
      fStack_70 = pfVar2[2];
      nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v15,temp_v31,&temp_v35);
      temp_v3 = temp_v3 + 1;
      *pfVar2 = temp_v15;
      pfVar2[1] = temp_v16;
      pfVar2[2] = temp_v17;
    } while (temp_v3 < 4);
    FUN_00286198(temp_v18,0,0,*(unsigned int *)(param_1 + 0xc));
    temp_v9 = temp_v2;
  }
  else {
    temp_v3 = *(int *)(param_1 + 4);
    temp_v8 = *(int *)(param_1 + 8);
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    FUN_00286198(temp_v18,temp_v3,temp_v8,temp_v0);
    temp_v9 = temp_v4;
  }
  temp_v12 = 0.1f;
  temp_v13 = -0.1f;
  if (*(char *)(param_1 + 0x1d9) == '\0') {
    FUN_00286198(temp_v18,(int)*(float *)(param_1 + 0x204),-(int)*(float *)(param_1 + 0x208),
                 -(int)*(float *)(param_1 + 0x20c));
    temp_v3 = -0x49f49f49;
    temp_v9 = (unsigned int)*(float *)(param_1 + 0x200);
    if ((int)temp_v9 >= 0x168) {
      temp_v8 = (int)(((long long)(int)temp_v9 * -0x49f49f49 + ((unsigned long long)temp_v9 << 0x20)) >> 0x20);
      temp_v9 = temp_v9 + ((temp_v8 >> 8) - (temp_v8 >> 0x1f)) * -0x168;
    }
    if ((int)temp_v9 < 0) {
      if ((int)temp_v9 < -0x167) {
        temp_v3 = (int)(((long long)(int)temp_v9 * -0x49f49f49 + ((unsigned long long)temp_v9 << 0x20)) >> 0x20);
        temp_v8 = (temp_v3 >> 8) - (temp_v3 >> 0x1f);
        temp_v3 = temp_v8 * -0x2d;
        temp_v9 = temp_v9 + temp_v8 * -0x168;
      }
      temp_v9 = temp_v9 + 0x168;
    }
    VectorSignedToFloat(0x168 - temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b2144(temp_v30,temp_v3);
    nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
    temp_v3 = (int)*(char *)(param_1 + 0x1da);
    temp_v9 = temp_v5;
    if (temp_v3 == 0) {
      temp_v9 = (unsigned int)*(unsigned char *)(param_1 + 0x1db);
    }
    if (temp_v3 != 0 || temp_v9 != 0) {
      temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1db),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = temp_v14 * temp_v12;
      temp_v15 = temp_v15 * temp_v13;
      temp_v16 = temp_v11;
      mtxMakeTranslation(temp_v30,&temp_v14);
      nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
      temp_v9 = temp_v6;
    }
  }
  temp_v3 = (int)*(char *)(param_1 + 0x1dc);
  if (temp_v3 == 0) {
    temp_v9 = (unsigned int)*(unsigned char *)(param_1 + 0x1dd);
  }
  if (temp_v3 != 0 || temp_v9 != 0) {
    temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v15 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1dd),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = temp_v14 * temp_v13;
    temp_v15 = temp_v15 * temp_v12;
    temp_v16 = temp_v11;
    mtxMakeTranslation(temp_v30,&temp_v14);
    nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
  }
  temp_v19[0] = *(float *)(param_1 + 500) * *(float *)(param_1 + 0x1f8);
  temp_v19[5] = *(float *)(param_1 + 500) * *(float *)(param_1 + 0x1fc);
  temp_v19[1] = 0.0f;
  temp_v19[2] = 0.0f;
  temp_v19[3] = 0.0f;
  temp_v19[4] = 0.0f;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v23 = 0;
  temp_v28 = 0;
  uStack_124 = 0x3f800000;
  temp_v25 = 0;
  temp_v26 = 0;
  temp_v27 = 0;
  temp_v24 = temp_v10;
  nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v19);
  temp_v3 = (int)*(char *)(param_1 + 0x1dc);
  temp_v9 = temp_v7;
  if (temp_v3 == 0) {
    temp_v9 = (unsigned int)*(unsigned char *)(param_1 + 0x1dd);
  }
  if (temp_v3 != 0 || temp_v9 != 0) {
    temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v15 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1dd),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = temp_v14 * temp_v12;
    temp_v15 = temp_v15 * temp_v13;
    temp_v16 = temp_v11;
    mtxMakeTranslation(temp_v30,&temp_v14);
    nn_math_ARMv6_MTX44MultAsm(temp_v18,temp_v18,temp_v30);
  }
  cameraSetViewMatrix(g_titleScene,temp_v18);
  renderCtxSelectTexture(g_titleScene,*(unsigned int *)(param_1 + 300));
  temp_v14 = temp_v10;
  temp_v15 = temp_v11;
  temp_v16 = temp_v10;
  temp_v17 = temp_v10;
  FUN_002ba1e0(*(unsigned int *)(param_1 + 0x39c),*(unsigned int *)(param_1 + 0x3b4),
               *(unsigned int *)(param_1 + 0x3cc),*(unsigned int *)(param_1 + 0x3e4));
  return;
}

} /* extern "C" */
