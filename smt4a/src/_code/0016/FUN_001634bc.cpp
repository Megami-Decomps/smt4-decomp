/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001634bc` (_code @ 0x1634bc, 0x5e4 bytes) from smt4a.cxi.
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

/* stack frame of param_1: 33 slot(s), 132 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
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
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

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


void FUN_001634bc(unsigned int *param_1)

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
  float temp_v11 [16];
  unsigned char temp_v12 [64];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  
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
      mtx44Copy(temp_v12,&DAT_0064c084);
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
      temp_v11[0xb] = temp_v10;
      if (*(char *)((int)param_1 + 0x3d) != '\0') {
        temp_v3 = 0x2002;
        if (*(char *)(param_1 + 0xf) != '\0') {
          temp_v11[1] = 0.0f;
          temp_v11[3] = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),
                                                   (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[0] = 1.0f;
          temp_v11[7] = (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                                   (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[2] = 0.0f;
          temp_v11[4] = 0.0f;
          temp_v11[5] = 1.0f;
          temp_v11[6] = 0.0f;
          temp_v11[8] = 0.0f;
          temp_v11[9] = 0.0f;
          temp_v11[10] = 1.0f;
          temp_v11[0xe] = 0.0f;
          temp_v11[0xf] = 1.0f;
          temp_v11[0xc] = 0.0f;
          temp_v11[0xd] = 0.0f;
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
        temp_v11[5] = (float)param_1[0x10];
        temp_v11[10] = (float)temp_v9 * temp_v11[5];
        temp_v11[0] = (float)((unsigned long long)temp_v9 >> 0x20) * temp_v11[5];
        temp_v11[5] = temp_v7 * temp_v11[5];
        temp_v11[1] = 0.0f;
        temp_v11[2] = 0.0f;
        temp_v11[3] = 0.0f;
        temp_v11[4] = 0.0f;
        temp_v11[6] = 0.0f;
        temp_v11[7] = 0.0f;
        temp_v11[8] = 0.0f;
        temp_v11[9] = 0.0f;
        temp_v11[0xe] = 0.0f;
        temp_v11[0xf] = 1.0f;
        temp_v11[0xb] = 0.0f;
        temp_v11[0xc] = 0.0f;
        temp_v11[0xd] = 0.0f;
        FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        temp_v8 = (unsigned int)temp_v9;
        if (!temp_v0) {
          FUN_001a1c28(temp_v11);
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
        temp_v11[3] = (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) +
                                                 ((int)param_1[3] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3)
        ;
        temp_v11[0xb] =
             (float)VectorSignedToFloat((int)*(short *)(param_1 + 7),(unsigned char)(temp_v5 >> 0x16) & 3);
        temp_v11[1] = 0.0f;
        temp_v11[0] = 1.0f;
        temp_v11[7] = (float)VectorSignedToFloat(-((int)*(short *)((int)param_1 + 0x1a) +
                                                  ((int)param_1[4] >> 0xc)),
                                                 (unsigned char)(temp_v5 >> 0x16) & 3);
        temp_v11[2] = 0.0f;
        temp_v11[3] = temp_v11[3] + (float)param_1[0xd];
        temp_v11[4] = 0.0f;
        temp_v11[5] = 1.0f;
        temp_v11[6] = 0.0f;
        temp_v11[8] = 0.0f;
        temp_v11[9] = 0.0f;
        temp_v11[10] = 1.0f;
        temp_v11[0xe] = 0.0f;
        temp_v11[0xf] = 1.0f;
        temp_v11[0xc] = 0.0f;
        temp_v11[0xd] = 0.0f;
        FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
      }
      else {
        temp_v11[3] = (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) +
                                                 ((int)param_1[3] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3)
        ;
        temp_v11[1] = 0.0f;
        temp_v11[0] = 1.0f;
        temp_v11[7] = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x1a) +
                                                 ((int)param_1[4] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3)
        ;
        temp_v11[2] = 0.0f;
        temp_v3 = 2;
        temp_v11[3] = temp_v11[3] + (float)param_1[0xd];
        temp_v11[4] = 0.0f;
        temp_v11[5] = 1.0f;
        temp_v11[6] = 0.0f;
        temp_v11[8] = 0.0f;
        temp_v11[9] = 0.0f;
        temp_v11[10] = 1.0f;
        temp_v11[0xe] = 0.0f;
        temp_v11[0xf] = 1.0f;
        temp_v11[0xc] = 0.0f;
        temp_v11[0xd] = 0.0f;
        FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        if (!temp_v0) {
          FUN_001a1c28(temp_v11);
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
        if (temp_v4) {
          temp_v11[0] = (float)((unsigned long long)temp_v9 >> 0x20);
          temp_v11[1] = 0.0f;
          temp_v11[2] = 0.0f;
          temp_v11[3] = 0.0f;
          temp_v11[4] = 0.0f;
          temp_v11[10] = (float)temp_v9;
          temp_v11[6] = 0.0f;
          temp_v11[7] = 0.0f;
          temp_v11[8] = 0.0f;
          temp_v11[9] = 0.0f;
          temp_v11[0xe] = 0.0f;
          temp_v11[0xf] = 1.0f;
          temp_v11[0xb] = 0.0f;
          temp_v11[0xc] = 0.0f;
          temp_v11[0xd] = 0.0f;
          temp_v11[5] = temp_v7;
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
        temp_v8 = (unsigned int)temp_v9;
        if (*(char *)(param_1 + 0xf) != '\0') {
          temp_v11[1] = 0.0f;
          temp_v11[3] = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),
                                                   (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[0] = 1.0f;
          temp_v11[7] = (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                                   (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[2] = 0.0f;
          temp_v11[4] = 0.0f;
          temp_v11[5] = 1.0f;
          temp_v11[6] = 0.0f;
          temp_v11[8] = 0.0f;
          temp_v11[9] = 0.0f;
          temp_v11[10] = 1.0f;
          temp_v11[0xe] = 0.0f;
          temp_v11[0xf] = 1.0f;
          temp_v11[0xc] = 0.0f;
          temp_v11[0xd] = 0.0f;
          temp_v11[0xb] = temp_v10;
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
      }
      camSetMatrixA(g_renderCtx,temp_v12);
      if ((int)param_1[2] >= 0) {
        FUN_00164b5c(temp_v3,*param_1,param_1[2],0);
      }
      else {
        FUN_001835b4(temp_v3,*param_1,param_1[1],0,0,(int)*(short *)(param_1 + 0xe));
      }
      efctSetSpeed();
      temp_v13 = temp_v8;
      temp_v14 = temp_v8;
      temp_v15 = temp_v8;
      temp_v16 = temp_v8;
      temp_v17 = temp_v8;
      temp_v18 = temp_v8;
      temp_v19 = temp_v8;
      temp_v20 = temp_v8;
      temp_v21 = temp_v8;
      temp_v22 = temp_v8;
      temp_v23 = temp_v8;
      temp_v24 = temp_v8;
      temp_v25 = temp_v8;
      temp_v26 = temp_v8;
      temp_v27 = temp_v8;
      temp_v28 = temp_v8;
      FUN_0018291c(&temp_v13,&temp_v17,&temp_v21,&temp_v25,0,1);
      FUN_0016c560(g_renderCtx);
      FUN_0016c410(g_renderCtx);
    }
  }
  return;
}

} /* extern "C" */
