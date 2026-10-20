/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001634b4` (_code @ 0x1634b4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_0018291c(...);
int FUN_001835b4(...);
int camSetMatrixA(...);
int mtx44Copy(...);
int FUN_0019a0fc(...);
int FUN_001a1c28(...);
int VectorSignedToFloat(...);

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
extern float DAT_0064c084; /* 0x64c084 */
extern float DAT_0064c088; /* 0x64c088 */
extern float DAT_0064c08c; /* 0x64c08c */
extern float DAT_0064c090; /* 0x64c090 */
extern float DAT_0064c094; /* 0x64c094 */
extern float DAT_0064c098; /* 0x64c098 */
extern float DAT_0064c09c; /* 0x64c09c */
extern float DAT_0064c0a0; /* 0x64c0a0 */
extern float DAT_0064c0a4; /* 0x64c0a4 */
extern float DAT_0064c0a8; /* 0x64c0a8 */
extern float DAT_0064c0ac; /* 0x64c0ac */
extern float DAT_0064c0b0; /* 0x64c0b0 */
extern float DAT_0064c0b4; /* 0x64c0b4 */
extern float DAT_0064c0b8; /* 0x64c0b8 */
extern float DAT_0064c0bc; /* 0x64c0bc */
extern float DAT_0064c0c0; /* 0x64c0c0 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_0018291c. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: camSetMatrixA. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_001a1c28. */
extern int FUN_002eba64(unsigned int *);


void FUN_001634b4(unsigned int *param_1)

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
        if (((DAT_005c4c30 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c30), temp_v1 != 0)) {
          DAT_0064c084 = temp_v7;
          DAT_0064c088 = temp_v10;
          DAT_0064c08c = temp_v10;
          DAT_0064c090 = temp_v10;
          DAT_0064c094 = temp_v10;
          DAT_0064c098 = temp_v7;
          DAT_0064c09c = temp_v10;
          DAT_0064c0a0 = temp_v10;
          DAT_0064c0a4 = temp_v10;
          DAT_0064c0a8 = temp_v10;
          DAT_0064c0ac = temp_v7;
          DAT_0064c0b0 = temp_v10;
          DAT_0064c0b4 = temp_v10;
          DAT_0064c0b8 = temp_v10;
          DAT_0064c0bc = temp_v10;
          DAT_0064c0c0 = temp_v7;
        }
        mtx44Copy(temp_v11,&DAT_0064c084);
        if (((DAT_005c4c30 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c30), temp_v1 != 0)) {
          DAT_0064c084 = temp_v7;
          DAT_0064c088 = temp_v10;
          DAT_0064c08c = temp_v10;
          DAT_0064c090 = temp_v10;
          DAT_0064c094 = temp_v10;
          DAT_0064c098 = temp_v7;
          DAT_0064c09c = temp_v10;
          DAT_0064c0a0 = temp_v10;
          DAT_0064c0a4 = temp_v10;
          DAT_0064c0a8 = temp_v10;
          DAT_0064c0ac = temp_v7;
          DAT_0064c0b0 = temp_v10;
          DAT_0064c0b4 = temp_v10;
          DAT_0064c0b8 = temp_v10;
          DAT_0064c0bc = temp_v10;
          DAT_0064c0c0 = temp_v7;
        }
        mtx44Copy(afStack_f0,&DAT_0064c084);
        temp_v9 = CONCAT44(temp_v7,temp_v7);
        efctSetSpeed();
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
            FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
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
          FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
          temp_v8 = (unsigned int)temp_v9;
          if (!temp_v0) {
            FUN_001a1c28(afStack_f0);
            FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
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
          FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
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
          FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
          if (!temp_v0) {
            FUN_001a1c28(afStack_f0);
            FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
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
            FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
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
            FUN_0019a0fc(temp_v11,temp_v11,afStack_f0);
          }
        }
        camSetMatrixA(g_renderCtx,temp_v11);
        if ((int)param_1[2] >= 0) {
          FUN_00164b5c(temp_v3,*param_1,param_1[2],0);
        }
        else {
          FUN_001835b4(temp_v3,*param_1,param_1[1],0,0,(int)*(short *)(param_1 + 0xe));
        }
        efctSetSpeed();
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
        FUN_0018291c(&uStack_70,&uStack_60,&uStack_50,&uStack_40,0,1);
        FUN_0016c560(g_renderCtx);
        FUN_0016c410(g_renderCtx);
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
