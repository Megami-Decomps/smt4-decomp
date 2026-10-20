/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046ed94` (_code @ 0x46ed94, 0x614 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int efctSetSpeed(void);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_0018291c(...);
int camSetMatrixA(...);
int mtx44Copy(...);
int FUN_0019a0fc(...);
int FUN_0019b770(...);
int FUN_001a1c28(...);
int FUN_001ab8e0(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 32 slot(s), 128 byte(s) */
typedef struct {
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
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

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
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_0018291c. */
extern unsigned int asdTMTexTableGetNode(unsigned int, unsigned int);
/* Supplied declaration required: camSetMatrixA. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_0019b770. */
/* Supplied declaration required: FUN_001a1c28. */
/* Supplied declaration required: FUN_001ab8e0. */
extern int FUN_001b2ca4(unsigned int, unsigned int, unsigned int);
extern int __cxa_guard_acquire(unsigned int *);


void FUN_0046ed94(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

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
  unsigned char temp_v29 [84];
  
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
      if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c30), temp_v0 != 0)) {
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
      if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c30), temp_v0 != 0)) {
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
      temp_v11[0xb] = temp_v10;
      if (*(char *)((int)param_4 + 0x3d) != '\0') {
        temp_v3 = 0x2002;
        if (*(char *)(param_4 + 0xf) != '\0') {
          temp_v11[1] = 0.0f;
          temp_v11[3] = (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),
                                                    (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[0] = 1.0f;
          temp_v11[7] = (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
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
        temp_v11[5] = (float)param_4[0x10];
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
        if (puVar4 != (unsigned int *)0x0) {
          FUN_001a1c28(temp_v11);
          FUN_0019a0fc(temp_v12,temp_v12,temp_v11);
        }
        temp_v11[3] = (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) +
                                                  ((int)param_4[3] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3
                                                 );
        temp_v11[0xb] =
             (float)VectorSignedToFloat((int)*(short *)(param_4 + 7),(unsigned char)(temp_v5 >> 0x16) & 3);
        temp_v11[1] = 0.0f;
        temp_v11[0] = 1.0f;
        temp_v11[7] = (float)VectorSignedToFloat(-((int)*(short *)((int)param_4 + 0x1a) +
                                                   ((int)param_4[4] >> 0xc)),
                                                  (unsigned char)(temp_v5 >> 0x16) & 3);
        temp_v11[2] = 0.0f;
        temp_v11[3] = temp_v11[3] + (float)param_4[0xd];
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
        temp_v11[1] = 0.0f;
        temp_v11[2] = 0.0f;
        temp_v11[3] = (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) +
                                                  ((int)param_4[3] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3
                                                 );
        temp_v11[0] = 1.0f;
        temp_v3 = 2;
        temp_v11[7] = (float)VectorSignedToFloat((int)*(short *)((int)param_4 + 0x1a) +
                                                  ((int)param_4[4] >> 0xc),(unsigned char)(temp_v5 >> 0x16) & 3
                                                 );
        temp_v11[3] = temp_v11[3] + (float)param_4[0xd];
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
        if (puVar4 != (unsigned int *)0x0) {
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
        if (*(char *)(param_4 + 0xf) != '\0') {
          temp_v11[1] = 0.0f;
          temp_v11[3] = (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),
                                                    (unsigned char)(temp_v5 >> 0x16) & 3);
          temp_v11[0] = 1.0f;
          temp_v11[7] = (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
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
      if ((int)param_4[2] < 0) {
        temp_v0 = FUN_001b2ca4(param_1,0x15,param_3);
        if (temp_v0 != 0) {
          puVar4 = *(unsigned int **)(temp_v0 + 4);
        }
        if (temp_v0 == 0) {
          puVar4 = (unsigned int *)0x0;
        }
        temp_v2 = asdTMTexTableGetNode(*param_4,param_3);
        FUN_001ab8e0(temp_v29,temp_v3,0,0,(int)*(short *)(param_4 + 0xe));
        FUN_0019b770(**(unsigned int **)(*(int *)*puVar4 + 4),temp_v29,temp_v2,0);
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
      skinObjectUpdateMatrices(g_renderCtx);
      renderCtxResetColorScale(g_renderCtx);
    }
  }
  return;
}

} /* extern "C" */
