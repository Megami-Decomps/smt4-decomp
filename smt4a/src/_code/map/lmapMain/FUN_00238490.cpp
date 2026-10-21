/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238490` (_code @ 0x238490, 0x990 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(...);
int mtx44Copy(float *, unsigned int);
int FUN_0019a0fc(...);
int FUN_0019e3d0(...);
int FUN_001a1c28(...);
int FUN_0021252c(...);
int facingUpdateAngles(...);
int matrixSetTranslation(...);
int VectorSignedToFloat(...);
int nn_math_ARMv6_MTX33CopyAsm(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34InvTransposeAsm(...);
int nn_math_ARMv6_MTX34ToMTX33Asm(...);
int nn_math_ARMv6_VEC3TransformAsm_2A87B4(...);

typedef int romwright_code(...);
/* stack frame of param_1: 51 slot(s), 204 byte(s) */
typedef struct {
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp130; /* 0x130: local_130 */
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
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp204; /* 0x204: local_204 */
    unsigned int sp208; /* 0x208: local_208 */
    unsigned int sp20C; /* 0x20c: local_20c */
    unsigned int sp210; /* 0x210: local_210 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_005c4c28; /* 0x5c4c28 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern float DAT_0064c030; /* 0x64c030 */
extern float DAT_0064c034; /* 0x64c034 */
extern float DAT_0064c038; /* 0x64c038 */
extern float DAT_0064c03c; /* 0x64c03c */
extern float DAT_0064c040; /* 0x64c040 */
extern float DAT_0064c044; /* 0x64c044 */
extern float DAT_0064c048; /* 0x64c048 */
extern float DAT_0064c04c; /* 0x64c04c */
extern float DAT_0064c050; /* 0x64c050 */
extern float DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern float DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern float DAT_0064c07c; /* 0x64c07c */
extern float DAT_0064c080; /* 0x64c080 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int FUN_0018aeb8(void);
extern int FUN_00199f84(unsigned char *, int);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a1c28. */
/* Supplied declaration required: FUN_0021252c. */
/* Supplied declaration required: facingUpdateAngles. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: matrixSetTranslation. */
/* Supplied declaration required: nn_math_ARMv6_MTX33CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34ToMTX33Asm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */


void FUN_00238490(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 20 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float *pfVar7;
  int *piVar8;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  int temp_v24;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  float temp_v25;
  float temp_v26;
  float fStack_1d8;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float fStack_1c8;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float fStack_1b8;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  float temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  float temp_v45;
  unsigned int uStack_180;
  unsigned int temp_v46;
  float temp_v47;
  unsigned int temp_v48;
  float temp_v49 [6];
  unsigned int temp_v50;
  unsigned int temp_v51;
  unsigned int temp_v52;
  unsigned int temp_v53;
  float temp_v54;
  unsigned int temp_v55;
  unsigned int temp_v56;
  unsigned int temp_v57;
  unsigned int temp_v58;
  unsigned int uStack_134;
  float temp_v59;
  float fStack_12c;
  float fStack_128;
  unsigned char temp_v60 [36];
  float temp_v61;
  float temp_v62;
  float temp_v63;
  float temp_v64;
  unsigned char temp_v65 [64];
  unsigned char temp_v66 [48];
  unsigned char temp_v67 [92];
  
  if (*(char *)(param_1 + 1000) == '\0') {
    return;
  }
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(&temp_v25,temp_v0);
  temp_v2 = g_renderCtx;
  temp_v11 = (*(unsigned char *)(param_1 + 0x130) & 7) >> 1;
  if (temp_v11 != 0) {
    if (temp_v11 != 1) {
      if (temp_v11 != 2) {
        if (temp_v11 == 3) {
          temp_v1 = packNibblesAndByte(5,0,1);
          piVar8 = (int *)(temp_v2 + 0x12b8);
          temp_v3 = piVar8[*piVar8 + 2];
          piVar8[*piVar8 + 2] = temp_v1;
          if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
            (**(romwright_code **)(temp_v2 + 0x12d4))(temp_v1);
            *(unsigned char *)(temp_v2 + 0x12d0) = 0;
          }
        }
      }
      else {
        temp_v1 = packNibblesAndByte(6,1,2);
        piVar8 = (int *)(temp_v2 + 0x12b8);
        temp_v3 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v1;
        if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v2 + 0x12d4))();
          *(unsigned char *)(temp_v2 + 0x12d0) = 0;
        }
      }
    }
    else {
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar8 = (int *)(temp_v2 + 0x12b8);
      temp_v3 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v1;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
    }
  }
  else {
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar8 = (int *)(temp_v2 + 0x12b8);
    temp_v3 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
  }
  temp_v2 = g_renderCtx;
  if ((*(unsigned char *)(param_1 + 0x130) & 8) != 0) {
    temp_v1 = FUN_001692ac(5,0);
    piVar8 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar8;
    temp_v4 = piVar8[temp_v3 + 2];
    *piVar8 = temp_v3 + 1;
    piVar8[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  temp_v16 = 0.0f;
  temp_v15 = 1.0f;
  if ((*(unsigned char *)(param_1 + 0x130) & 0x20) != 0) {
    temp_v2 = FUN_00199f84(temp_v66,*(int *)(g_renderCtx + 0x6fc) + 0x38);
    if (temp_v2 == 0) {
      if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v2 != 0)) {
        DAT_0064c054 = temp_v15;
        DAT_0064c058 = temp_v16;
        DAT_0064c05c = temp_v16;
        DAT_0064c060 = temp_v16;
        DAT_0064c064 = temp_v16;
        DAT_0064c068 = temp_v15;
        DAT_0064c06c = temp_v16;
        DAT_0064c070 = temp_v16;
        DAT_0064c074 = temp_v16;
        DAT_0064c078 = temp_v16;
        DAT_0064c07c = temp_v15;
        DAT_0064c080 = temp_v16;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v66,&DAT_0064c054);
    }
    nn_math_ARMv6_MTX34CopyAsm(&temp_v59,temp_v66);
    temp_v61 = temp_v16;
    temp_v62 = temp_v16;
    temp_v63 = temp_v16;
    temp_v64 = temp_v15;
    FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
    temp_v21 = -9.0f;
    temp_v19 = temp_v16;
    temp_v20 = temp_v16;
    matrixSetTranslation(temp_v67,&temp_v19);
    FUN_0019a0fc(&temp_v25,&temp_v25,temp_v67);
  }
  pfVar4 = *(float **)(*(int *)(param_1 + 0x354) + 4);
  if (pfVar4 != (float *)0x0) {
    temp_v18 = *pfVar4 * 0.03125f;
    temp_v19 = pfVar4[1] * -0.03125f;
    temp_v20 = temp_v16;
    matrixSetTranslation(&temp_v59,&temp_v18);
    FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
  }
  temp_v24 = *(unsigned int *)(param_1 + 0x120);
  uStack_1e8 = *(unsigned int *)(param_1 + 0x124);
  uStack_1e4 = *(unsigned int *)(param_1 + 0x128);
  matrixSetTranslation(temp_v65,&temp_v24);
  FUN_0019a0fc(&temp_v25,&temp_v25,temp_v65);
  if (*(char *)(param_1 + 0x380) == '\x01') {
    temp_v18 = *(float *)(param_1 + 0x358);
    temp_v19 = *(float *)(param_1 + 0x35c);
    temp_v20 = *(float *)(param_1 + 0x360);
    matrixSetTranslation(&temp_v59,&temp_v18);
    FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
  }
  if (*(char *)(param_1 + 0x380) == '\x03') {
    facingUpdateAngles(param_1,1);
  }
  if ((*(unsigned char *)(param_1 + 0x130) & 1) != 0) {
    if (*(char *)(param_1 + 0x380) == '\x01') {
      FUN_0021252c(&temp_v25,*(int *)(param_1 + 4) - *(int *)(param_1 + 0x160),
                   *(int *)(param_1 + 8) - *(int *)(param_1 + 0x164),
                   *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x168));
      FUN_0021252c(&temp_v25,0,*(unsigned int *)(param_1 + 0x368));
      temp_v2 = (int)*(short *)(param_1 + 0x170);
      temp_v0 = 0;
      temp_v1 = 0x5a - *(short *)(param_1 + 0x16e);
    }
    else {
      temp_v2 = *(int *)(param_1 + 4);
      temp_v1 = *(int *)(param_1 + 8);
      temp_v0 = *(unsigned int *)(param_1 + 0xc);
    }
    FUN_0021252c(&temp_v25,temp_v2,temp_v1,temp_v0);
    temp_v11 = temp_v6;
  }
  else if (*(char *)(param_1 + 0x380) != '\0') {
    temp_v2 = *(int *)(g_renderCtx + 0x6fc);
    if (((DAT_005c4c28 & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_005c4c28), temp_v1 != 0)) {
      DAT_0064c030 = temp_v15;
      DAT_0064c034 = temp_v16;
      DAT_0064c038 = temp_v16;
      DAT_0064c03c = temp_v16;
      DAT_0064c040 = temp_v15;
      DAT_0064c044 = temp_v16;
      DAT_0064c048 = temp_v16;
      DAT_0064c04c = temp_v16;
      DAT_0064c050 = temp_v15;
    }
    nn_math_ARMv6_MTX33CopyAsm(temp_v60,&DAT_0064c030);
    nn_math_ARMv6_MTX34InvTransposeAsm(temp_v66,temp_v2 + 0x38);
    nn_math_ARMv6_MTX34ToMTX33Asm(temp_v60,temp_v66);
    temp_v2 = 0;
    do {
      pfVar4 = (float *)(param_1 + 0x388 + temp_v2 * 0x18);
      temp_v59 = *pfVar4;
      fStack_12c = pfVar4[1];
      fStack_128 = pfVar4[2];
      nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v21,temp_v60,&temp_v59);
      temp_v2 = temp_v2 + 1;
      *pfVar4 = temp_v21;
      pfVar4[1] = temp_v22;
      pfVar4[2] = temp_v23;
    } while (temp_v2 < 4);
    FUN_0021252c(&temp_v25,0,0,*(unsigned int *)(param_1 + 0xc));
    temp_v11 = temp_v5;
  }
  else {
    temp_v2 = *(int *)(param_1 + 4);
    temp_v1 = *(int *)(param_1 + 8);
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    FUN_0021252c(&temp_v25,temp_v2,temp_v1,temp_v0);
    temp_v11 = temp_v6;
  }
  temp_v17 = 0.1f;
  if (*(char *)(param_1 + 0x1d9) == '\0') {
    FUN_0021252c(&temp_v25,(int)*(float *)(param_1 + 0x204),(int)*(float *)(param_1 + 0x208),
                 (int)*(float *)(param_1 + 0x20c));
    temp_v11 = (unsigned int)*(float *)(param_1 + 0x200);
    temp_v2 = temp_v7;
    if ((int)temp_v11 >= 0x168) {
      temp_v2 = (int)(((long long)(int)temp_v11 * -0x49f49f49 + ((unsigned long long)temp_v11 << 0x20)) >> 0x20);
      temp_v1 = (temp_v2 >> 8) - (temp_v2 >> 0x1f);
      temp_v2 = temp_v1 * -0x2d;
      temp_v11 = temp_v11 + temp_v1 * -0x168;
    }
    if ((int)temp_v11 < 0) {
      if ((int)temp_v11 < -0x167) {
        temp_v2 = (int)(((long long)(int)temp_v11 * -0x49f49f49 + ((unsigned long long)temp_v11 << 0x20)) >> 0x20);
        temp_v1 = (temp_v2 >> 8) - (temp_v2 >> 0x1f);
        temp_v2 = temp_v1 * -0x2d;
        temp_v11 = temp_v11 + temp_v1 * -0x168;
      }
      temp_v11 = temp_v11 + 0x168;
    }
    VectorSignedToFloat(0x168 - temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001a1c28(temp_v66,temp_v2);
    FUN_0019a0fc(&temp_v25,&temp_v25,temp_v66);
    temp_v2 = (int)*(char *)(param_1 + 0x1da);
    temp_v11 = temp_v8;
    if (temp_v2 == 0) {
      temp_v11 = (unsigned int)*(unsigned char *)(param_1 + 0x1db);
    }
    if (temp_v2 != 0 || temp_v11 != 0) {
      temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1db),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = temp_v18 * temp_v17;
      temp_v19 = temp_v19 * temp_v17;
      temp_v20 = temp_v16;
      matrixSetTranslation(&temp_v59,&temp_v18);
      FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
      temp_v11 = temp_v9;
    }
  }
  temp_v2 = (int)*(char *)(param_1 + 0x1dc);
  if (temp_v2 == 0) {
    temp_v11 = (unsigned int)*(unsigned char *)(param_1 + 0x1dd);
  }
  if (temp_v2 != 0 || temp_v11 != 0) {
    temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1dd),(unsigned char)(in_fpscr >> 0x16) & 3
                                       );
    temp_v19 = *(float *)(*(int *)(param_1 + 0x354) + 0x14);
    temp_v18 = temp_v19 * temp_v12 * -0.1f;
    temp_v19 = temp_v19 * temp_v14 * -0.1f;
    temp_v20 = temp_v16;
    matrixSetTranslation(&temp_v59,&temp_v18);
    FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
  }
  temp_v49[0] = *(float *)(param_1 + 500) * *(float *)(param_1 + 0x1f8);
  temp_v49[5] = *(float *)(param_1 + 500) * *(float *)(param_1 + 0x1fc);
  temp_v49[1] = 0.0f;
  temp_v49[2] = 0.0f;
  temp_v49[3] = 0.0f;
  temp_v49[4] = 0.0f;
  temp_v50 = 0;
  temp_v51 = 0;
  temp_v52 = 0;
  temp_v53 = 0;
  temp_v58 = 0;
  uStack_134 = 0x3f800000;
  temp_v55 = 0;
  temp_v56 = 0;
  temp_v57 = 0;
  temp_v54 = temp_v15;
  FUN_0019a0fc(&temp_v25,&temp_v25,temp_v49);
  temp_v2 = (int)*(char *)(param_1 + 0x1dc);
  temp_v11 = temp_v10;
  if (temp_v2 == 0) {
    temp_v11 = (unsigned int)*(unsigned char *)(param_1 + 0x1dd);
  }
  if (temp_v2 != 0 || temp_v11 != 0) {
    temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v19 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1dd),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v18 = temp_v18 * temp_v17;
    temp_v19 = temp_v19 * temp_v17;
    temp_v20 = temp_v16;
    matrixSetTranslation(&temp_v59,&temp_v18);
    FUN_0019a0fc(&temp_v25,&temp_v25,&temp_v59);
  }
  temp_v38 = *(float *)(param_1 + 0x388);
  pfVar7 = &temp_v38;
  temp_v11 = 0;
  temp_v39 = -*(float *)(param_1 + 0x38c);
  temp_v40 = *(unsigned int *)(param_1 + 0x390);
  temp_v41 = *(unsigned int *)(param_1 + 0x3a0);
  temp_v42 = -*(float *)(param_1 + 0x3a4);
  temp_v43 = *(unsigned int *)(param_1 + 0x3a8);
  temp_v44 = *(unsigned int *)(param_1 + 0x3b8);
  temp_v45 = -*(float *)(param_1 + 0x3bc);
  uStack_180 = *(unsigned int *)(param_1 + 0x3c0);
  temp_v46 = *(unsigned int *)(param_1 + 0x3d0);
  temp_v47 = -*(float *)(param_1 + 0x3d4);
  temp_v48 = *(unsigned int *)(param_1 + 0x3d8);
  pfVar4 = pfVar7;
  do {
    temp_v17 = pfVar7[1];
    temp_v14 = pfVar7[2];
    temp_v13 = *pfVar7;
    temp_v11 = temp_v11 + 1;
    pfVar7 = pfVar7 + 3;
    temp_v12 = temp_v15 / (temp_v35 * temp_v17 + temp_v36 * temp_v14 + temp_v37 + temp_v34 * temp_v13);
    pfVar4[2] = (temp_v32 * temp_v17 + fStack_1b8 * temp_v14 + temp_v33 + temp_v31 * temp_v13) * temp_v12
    ;
    *pfVar4 = (temp_v26 * temp_v17 + fStack_1d8 * temp_v14 + temp_v27 + temp_v25 * temp_v13) * temp_v12;
    pfVar4[1] = (temp_v29 * temp_v17 + fStack_1c8 * temp_v14 + temp_v30 + temp_v28 * temp_v13) * temp_v12
    ;
    pfVar4 = pfVar4 + 3;
  } while (temp_v11 < 4);
  FUN_0016c4b8(g_renderCtx,*(unsigned int *)(param_1 + 300));
  temp_v18 = temp_v15;
  temp_v19 = temp_v16;
  temp_v20 = temp_v15;
  temp_v21 = temp_v15;
  FUN_0019e3d0(*(unsigned int *)(param_1 + 0x39c),*(unsigned int *)(param_1 + 0x3b4),
               *(unsigned int *)(param_1 + 0x3cc),*(unsigned int *)(param_1 + 0x3e4));
  temp_v2 = g_renderCtx;
  if ((*(unsigned char *)(param_1 + 0x130) & 8) != 0) {
    piVar8 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar8;
    temp_v3 = piVar8[temp_v1 + 2];
    *piVar8 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar8[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  return;
}

} /* extern "C" */
