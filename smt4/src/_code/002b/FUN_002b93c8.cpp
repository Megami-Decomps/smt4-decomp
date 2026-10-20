/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b93c8` (_code @ 0x2b93c8, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002b1fc4(...);
int FUN_002b2144(...);
int cameraSetViewMatrix(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf538(void);
int mtx44Copy(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int VectorSignedToFloat(...);
int nn_math_ARMv6_MTX44MultAsm(...);

extern unsigned int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern float DAT_004efd9c; /* 0x4efd9c */
extern float DAT_004efda0; /* 0x4efda0 */
extern float DAT_004efda4; /* 0x4efda4 */
extern float DAT_004efda8; /* 0x4efda8 */
extern float DAT_004efdac; /* 0x4efdac */
extern float DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdb4; /* 0x4efdb4 */
extern float DAT_004efdb8; /* 0x4efdb8 */
extern float DAT_004efdbc; /* 0x4efdbc */
extern float DAT_004efdc0; /* 0x4efdc0 */
extern float DAT_004efdc4; /* 0x4efdc4 */
extern float DAT_004efdc8; /* 0x4efdc8 */
extern float DAT_004efdcc; /* 0x4efdcc */
extern float DAT_004efdd0; /* 0x4efdd0 */
extern float DAT_004efdd4; /* 0x4efdd4 */
extern float DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b1fc4. */
/* Supplied declaration required: FUN_002b2144. */
/* Supplied declaration required: cameraSetViewMatrix. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


void FUN_002b93c8(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 13 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned int in_s0;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float afStack_f0 [16];
  unsigned char temp_v11 [64];
  int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (param_1 != (unsigned int *)0x0) {
    if (*(char *)((int)param_1 + 0x85) != '\0') {
      temp_v1 = param_1[1];
      temp_v4 = temp_v1 < 0;
      if (temp_v4) {
        temp_v1 = param_1[2];
      }
      if (!temp_v4 || -1 < temp_v1) {
        param_1[0xd] = in_s0;
        temp_v10 = 0.0f;
        temp_v7 = 1.0f;
        temp_v4 = 0;
        if (((DAT_00476638 & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_00476638), temp_v1 != 0)) {
          DAT_004efd9c = temp_v7;
          DAT_004efda0 = temp_v10;
          DAT_004efda4 = temp_v10;
          DAT_004efda8 = temp_v10;
          DAT_004efdac = temp_v10;
          DAT_004efdb0 = temp_v7;
          DAT_004efdb4 = temp_v10;
          DAT_004efdb8 = temp_v10;
          DAT_004efdbc = temp_v10;
          DAT_004efdc0 = temp_v10;
          DAT_004efdc4 = temp_v7;
          DAT_004efdc8 = temp_v10;
          DAT_004efdcc = temp_v10;
          DAT_004efdd0 = temp_v10;
          DAT_004efdd4 = temp_v10;
          DAT_004efdd8 = temp_v7;
        }
        mtx44Copy(temp_v11,&DAT_004efd9c);
        if (((DAT_00476638 & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_00476638), temp_v1 != 0)) {
          DAT_004efd9c = temp_v7;
          DAT_004efda0 = temp_v10;
          DAT_004efda4 = temp_v10;
          DAT_004efda8 = temp_v10;
          DAT_004efdac = temp_v10;
          DAT_004efdb0 = temp_v7;
          DAT_004efdb4 = temp_v10;
          DAT_004efdb8 = temp_v10;
          DAT_004efdbc = temp_v10;
          DAT_004efdc0 = temp_v10;
          DAT_004efdc4 = temp_v7;
          DAT_004efdc8 = temp_v10;
          DAT_004efdcc = temp_v10;
          DAT_004efdd0 = temp_v10;
          DAT_004efdd4 = temp_v10;
          DAT_004efdd8 = temp_v7;
        }
        mtx44Copy(afStack_f0,&DAT_004efd9c);
        temp_v9 = CONCAT44(temp_v7,temp_v7);
        FUN_002bf538();
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[0xc] == temp_v10) << 0x1e);
        temp_v0 = romwright_subpiece_4_1_0(temp_v5 >> 0x1e,0);
        temp_v6 = (float)param_1[10];
        temp_v2 = temp_v6;
        if (temp_v6 == 1.0f) {
          temp_v2 = (float)param_1[0xb];
        }
        if (temp_v6 != 1.0f || temp_v2 != 1.0f) {
          temp_v2 = (float)temp_v9;
          temp_v7 = temp_v2;
          if (*(short *)((int)param_1 + 0x3a) != 1) {
            if (*(short *)((int)param_1 + 0x3a) == 2) {
              temp_v6 = temp_v2;
            }
            temp_v7 = (float)param_1[0xb];
          }
          temp_v9 = CONCAT44(temp_v6,temp_v2);
          temp_v4 = 1;
        }
        afStack_f0[0xb] = temp_v10;
        if (*(char *)((int)param_1 + 0x3d) != '\0') {
          temp_v3 = 0x2002;
          if (*(char *)(param_1 + 0xf) != '\0') {
            afStack_f0[1] = 0.0f;
            afStack_f0[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),(unsigned char)(temp_v5 >> 0x16) & 3)
            ;
            afStack_f0[0] = 1.0f;
            afStack_f0[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                            (unsigned char)(temp_v5 >> 0x16) & 3);
            afStack_f0[2] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[5] = 1.0f;
            afStack_f0[6] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[10] = 1.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          }
          afStack_f0[5] = (float)param_1[0x10];
          afStack_f0[10] = (float)temp_v9 * afStack_f0[5];
          afStack_f0[0] = (float)((unsigned long long)temp_v9 >> 0x20) * afStack_f0[5];
          afStack_f0[5] = temp_v7 * afStack_f0[5];
          afStack_f0[1] = 0.0f;
          afStack_f0[2] = 0.0f;
          afStack_f0[3] = 0.0f;
          afStack_f0[4] = 0.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[7] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xb] = 0.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          temp_v8 = (unsigned int)temp_v9;
          if (!temp_v0) {
            FUN_002b2144(afStack_f0);
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          }
          afStack_f0[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) + ((int)param_1[3] >> 0xc),
                                          (unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_f0[0xb] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 7),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_f0[1] = 0.0f;
          afStack_f0[0] = 1.0f;
          afStack_f0[7] =
               (float)VectorSignedToFloat(-((int)*(short *)((int)param_1 + 0x1a) +
                                           ((int)param_1[4] >> 0xc)),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_f0[2] = 0.0f;
          afStack_f0[3] = afStack_f0[3] + (float)param_1[0xd];
          afStack_f0[4] = 0.0f;
          afStack_f0[5] = 1.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[10] = 1.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
        }
        else {
          afStack_f0[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) + ((int)param_1[3] >> 0xc),
                                          (unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_f0[1] = 0.0f;
          afStack_f0[0] = 1.0f;
          afStack_f0[7] =
               (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x1a) +
                                          ((int)param_1[4] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_f0[2] = 0.0f;
          temp_v3 = 2;
          afStack_f0[3] = afStack_f0[3] + (float)param_1[0xd];
          afStack_f0[4] = 0.0f;
          afStack_f0[5] = 1.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[10] = 1.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          if (!temp_v0) {
            FUN_002b2144(afStack_f0);
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          }
          if (temp_v4) {
            afStack_f0[0] = (float)((unsigned long long)temp_v9 >> 0x20);
            afStack_f0[1] = 0.0f;
            afStack_f0[2] = 0.0f;
            afStack_f0[3] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[10] = (float)temp_v9;
            afStack_f0[6] = 0.0f;
            afStack_f0[7] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xb] = 0.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            afStack_f0[5] = temp_v7;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          }
          temp_v8 = (unsigned int)temp_v9;
          if (*(char *)(param_1 + 0xf) != '\0') {
            afStack_f0[1] = 0.0f;
            afStack_f0[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),(unsigned char)(temp_v5 >> 0x16) & 3)
            ;
            afStack_f0[0] = 1.0f;
            afStack_f0[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                            (unsigned char)(temp_v5 >> 0x16) & 3);
            afStack_f0[2] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[5] = 1.0f;
            afStack_f0[6] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[10] = 1.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            afStack_f0[0xb] = temp_v10;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_f0);
          }
        }
        cameraSetViewMatrix(g_titleScene,temp_v11);
        if ((int)param_1[2] >= 0) {
          FUN_002bf380(temp_v3,*param_1,param_1[2],0);
        }
        else {
          FUN_002bf288(temp_v3,*param_1,param_1[1],0,0,(int)*(short *)(param_1 + 0xe));
        }
        FUN_002bf538();
        uStack_70 = temp_v8;
        uStack_6c = temp_v8;
        uStack_68 = temp_v8;
        uStack_64 = temp_v8;
        uStack_60 = temp_v8;
        uStack_5c = temp_v8;
        uStack_58 = temp_v8;
        uStack_54 = temp_v8;
        uStack_50 = temp_v8;
        uStack_4c = temp_v8;
        uStack_48 = temp_v8;
        uStack_44 = temp_v8;
        uStack_40 = temp_v8;
        uStack_3c = temp_v8;
        uStack_38 = temp_v8;
        uStack_34 = temp_v8;
        FUN_002b1fc4(&uStack_70,&uStack_60,&uStack_50,&uStack_40,0,1);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
