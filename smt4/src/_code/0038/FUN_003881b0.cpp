/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003881b0` (_code @ 0x3881b0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002a6d1c(...);
int FUN_002a8ac4(...);
int FUN_002b1fc4(...);
int FUN_002b2144(...);
int FUN_002b90f8(...);
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
/* Supplied declaration required: FUN_002a6d1c. */
extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8ac4. */
/* Supplied declaration required: FUN_002b1fc4. */
/* Supplied declaration required: FUN_002b2144. */
/* Supplied declaration required: FUN_002b90f8. */
extern unsigned int asdTMTexTableCallFileB(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


void FUN_003881b0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 13 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
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
  float afStack_138 [16];
  unsigned char temp_v11 [64];
  int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char temp_v12 [84];
  
  if (param_4 != (unsigned int *)0x0) {
    if (*(char *)((int)param_4 + 0x85) != '\0') {
      temp_v0 = param_4[1];
      temp_v4 = temp_v0 < 0;
      if (temp_v4) {
        temp_v0 = param_4[2];
      }
      if (!temp_v4 || -1 < temp_v0) {
        param_4[0xd] = in_s0;
        temp_v10 = 0.0f;
        temp_v7 = 1.0f;
        temp_v4 = 0;
        if (((DAT_00476638 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00476638), temp_v0 != 0)) {
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
        if (((DAT_00476638 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00476638), temp_v0 != 0)) {
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
        mtx44Copy(afStack_138,&DAT_004efd9c);
        temp_v9 = CONCAT44(temp_v7,temp_v7);
        FUN_002bf538();
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_4[0xc] == temp_v10) << 0x1e);
        temp_v6 = (float)param_4[10];
        puVar4 = (unsigned int *)(unsigned int)!romwright_subpiece_4_1_0(temp_v5 >> 0x1e,0);
        temp_v1 = temp_v6;
        if (temp_v6 == 1.0f) {
          temp_v1 = (float)param_4[0xb];
        }
        if (temp_v6 != 1.0f || temp_v1 != 1.0f) {
          temp_v1 = (float)temp_v9;
          temp_v7 = temp_v1;
          if (*(short *)((int)param_4 + 0x3a) != 1) {
            if (*(short *)((int)param_4 + 0x3a) == 2) {
              temp_v6 = temp_v1;
            }
            temp_v7 = (float)param_4[0xb];
          }
          temp_v9 = CONCAT44(temp_v6,temp_v1);
          temp_v4 = 1;
        }
        afStack_138[0xb] = temp_v10;
        if (*(char *)((int)param_4 + 0x3d) != '\0') {
          temp_v3 = 0x2002;
          if (*(char *)(param_4 + 0xf) != '\0') {
            afStack_138[1] = 0.0f;
            afStack_138[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),(unsigned char)(temp_v5 >> 0x16) & 3)
            ;
            afStack_138[0] = 1.0f;
            afStack_138[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
                                            (unsigned char)(temp_v5 >> 0x16) & 3);
            afStack_138[2] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[5] = 1.0f;
            afStack_138[6] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[10] = 1.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          }
          afStack_138[5] = (float)param_4[0x10];
          afStack_138[10] = (float)temp_v9 * afStack_138[5];
          afStack_138[0] = (float)((unsigned long long)temp_v9 >> 0x20) * afStack_138[5];
          afStack_138[5] = temp_v7 * afStack_138[5];
          afStack_138[1] = 0.0f;
          afStack_138[2] = 0.0f;
          afStack_138[3] = 0.0f;
          afStack_138[4] = 0.0f;
          afStack_138[6] = 0.0f;
          afStack_138[7] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xb] = 0.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          temp_v8 = (unsigned int)temp_v9;
          if (puVar4 != (unsigned int *)0x0) {
            FUN_002b2144(afStack_138);
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          }
          afStack_138[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) + ((int)param_4[3] >> 0xc),
                                          (unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_138[0xb] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 7),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_138[1] = 0.0f;
          afStack_138[0] = 1.0f;
          afStack_138[7] =
               (float)VectorSignedToFloat(-((int)*(short *)((int)param_4 + 0x1a) +
                                           ((int)param_4[4] >> 0xc)),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_138[2] = 0.0f;
          afStack_138[3] = afStack_138[3] + (float)param_4[0xd];
          afStack_138[4] = 0.0f;
          afStack_138[5] = 1.0f;
          afStack_138[6] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[10] = 1.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
        }
        else {
          afStack_138[1] = 0.0f;
          afStack_138[2] = 0.0f;
          afStack_138[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) + ((int)param_4[3] >> 0xc),
                                          (unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_138[0] = 1.0f;
          temp_v3 = 2;
          afStack_138[7] =
               (float)VectorSignedToFloat((int)*(short *)((int)param_4 + 0x1a) +
                                          ((int)param_4[4] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3);
          afStack_138[3] = afStack_138[3] + (float)param_4[0xd];
          afStack_138[4] = 0.0f;
          afStack_138[5] = 1.0f;
          afStack_138[6] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[10] = 1.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          if (puVar4 != (unsigned int *)0x0) {
            FUN_002b2144(afStack_138);
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          }
          if (temp_v4) {
            afStack_138[0] = (float)((unsigned long long)temp_v9 >> 0x20);
            afStack_138[1] = 0.0f;
            afStack_138[2] = 0.0f;
            afStack_138[3] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[10] = (float)temp_v9;
            afStack_138[6] = 0.0f;
            afStack_138[7] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xb] = 0.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            afStack_138[5] = temp_v7;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          }
          temp_v8 = (unsigned int)temp_v9;
          if (*(char *)(param_4 + 0xf) != '\0') {
            afStack_138[1] = 0.0f;
            afStack_138[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),(unsigned char)(temp_v5 >> 0x16) & 3)
            ;
            afStack_138[0] = 1.0f;
            afStack_138[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
                                            (unsigned char)(temp_v5 >> 0x16) & 3);
            afStack_138[2] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[5] = 1.0f;
            afStack_138[6] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[10] = 1.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            afStack_138[0xb] = temp_v10;
            nn_math_ARMv6_MTX44MultAsm(temp_v11,temp_v11,afStack_138);
          }
        }
        FUN_002b90f8(g_titleScene,temp_v11);
        if ((int)param_4[2] < 0) {
          temp_v0 = FUN_002a6d50(param_1,0x15,param_3);
          if (temp_v0 != 0) {
            puVar4 = *(unsigned int **)(temp_v0 + 4);
          }
          if (temp_v0 == 0) {
            puVar4 = (unsigned int *)0x0;
          }
          temp_v2 = asdTMTexTableCallFileB(*param_4,param_3);
          FUN_002a6d1c(temp_v12,temp_v3,0,0,(int)*(short *)(param_4 + 0xe));
          FUN_002a8ac4(**(unsigned int **)(*(int *)*puVar4 + 4),temp_v12,temp_v2);
        }
        FUN_002bf538();
        uStack_b8 = temp_v8;
        uStack_b4 = temp_v8;
        uStack_b0 = temp_v8;
        uStack_ac = temp_v8;
        uStack_a8 = temp_v8;
        uStack_a4 = temp_v8;
        uStack_a0 = temp_v8;
        uStack_9c = temp_v8;
        uStack_98 = temp_v8;
        uStack_94 = temp_v8;
        uStack_90 = temp_v8;
        uStack_8c = temp_v8;
        uStack_88 = temp_v8;
        uStack_84 = temp_v8;
        uStack_80 = temp_v8;
        uStack_7c = temp_v8;
        FUN_002b1fc4(&uStack_b8,&uStack_a8,&uStack_98,&uStack_88,0,1);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
