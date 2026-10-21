/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00165778` (_code @ 0x165778, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_00162790(int, unsigned int, int);
int skinObjectUpdateMatrices(unsigned int);
int FUN_00180310(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_0018408c(int, int);
int camSetMatrixA(...);
int FUN_0019a0dc(...);
int mtx44Copy(...);
int FUN_0019a0fc(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp80; /* 0x80: local_80 */
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
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp158; /* 0x158: local_158 */
} param_2_stack;

extern unsigned char LAB_00165aec; /* 0x165aec */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
extern int vec2GetXInt(int);
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: camSetMatrixA. */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: FUN_0019a0dc. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */


void FUN_00165778(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int temp_v11;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  float temp_v12 [16];
  unsigned char temp_v13 [72];
  int temp_v14;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v15;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  temp_v0 = param_1 + 0x26c;
  FUN_0018408c(temp_v0,4);
  temp_v0 = (**(short **)(param_2 + 0xc) - temp_v0) / 2;
  temp_v9 = 0;
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,0xffffffff,param_1 + 0x26c);
  uiDrawItemCategoryIcon((int)*(short *)(param_1 + 0x18),temp_v0 - 0xd,8,0x79,0);
  skinObjectUpdateMatrices(g_renderCtx);
  temp_v0 = FUN_001834a4(8,0x1ab);
  temp_v1 = vec2GetXInt(param_1 + 0x154);
  FUN_001835b4(2,8,0x1a8,*(short *)(temp_v0 + 8) + temp_v1,(int)*(short *)(temp_v0 + 10),0x65);
  temp_v1 = FUN_001834a4(8,0x1aa);
  if (*(int *)(param_1 + 700) != 3) {
    temp_v2 = vec2GetXInt(param_1 + 0x154);
    FUN_00180310(6,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10),1,2,0x79,&LAB_00165aec,
                 *(unsigned int *)(param_1 + 0x2c8));
    return;
  }
  temp_v5 = *(float *)(param_1 + 0x204);
  temp_v8 = 0.5f;
  temp_v6 = 12.0f;
  if (*(int *)(param_1 + 0x2c8) < 10) {
    temp_v1 = FUN_001834a4(8,0x1a9);
    temp_v4 = 1;
    temp_v7 = (8.0f - temp_v5 * 8.0f) * temp_v8;
    temp_v8 = (temp_v6 - temp_v5 * temp_v6) * temp_v8;
  }
  else {
    temp_v1 = FUN_001834a4(8,0x1aa);
    temp_v4 = 2;
    temp_v7 = (16.0f - temp_v5 * 16.0f) * temp_v8;
    temp_v8 = (temp_v6 - temp_v5 * temp_v6) * temp_v8;
  }
  temp_v3 = FUN_0018aeb8();
  mtx44Copy(&temp_v14,temp_v3);
  temp_v3 = FUN_0018aeb8();
  mtx44Copy(temp_v13,temp_v3);
  temp_v3 = FUN_0018aeb8();
  mtx44Copy(temp_v12,temp_v3);
  temp_v12[1] = 0.0f;
  temp_v12[3] = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12[0] = 1.0f;
  temp_v12[7] = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 10) +
                                            (int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
  temp_v12[2] = 0.0f;
  temp_v3 = 0x3f800000;
  temp_v12[3] = temp_v12[3] + temp_v7;
  temp_v12[7] = temp_v12[7] + temp_v8;
  temp_v12[4] = 0.0f;
  temp_v12[5] = 1.0f;
  temp_v12[6] = 0.0f;
  temp_v12[8] = 0.0f;
  temp_v12[9] = 0.0f;
  temp_v12[10] = 1.0f;
  temp_v12[0xe] = 0.0f;
  temp_v12[0xf] = 1.0f;
  temp_v12[0xc] = 0.0f;
  temp_v12[0xd] = 0.0f;
  temp_v12[0xb] = (float)temp_v9;
  FUN_0019a0fc(temp_v13,temp_v13,temp_v12);
  temp_v12[1] = 0.0f;
  temp_v12[2] = 0.0f;
  temp_v12[3] = 0.0f;
  temp_v12[4] = 0.0f;
  temp_v12[6] = 0.0f;
  temp_v12[7] = 0.0f;
  temp_v12[8] = 0.0f;
  temp_v12[9] = 0.0f;
  temp_v12[0xe] = 0.0f;
  temp_v12[0xf] = 1.0f;
  temp_v12[0xb] = 0.0f;
  temp_v12[0xc] = 0.0f;
  temp_v12[0xd] = 0.0f;
  temp_v12[0] = temp_v5;
  temp_v12[5] = temp_v5;
  temp_v12[10] = (float)temp_v3;
  FUN_0019a0fc(temp_v13,temp_v13,temp_v12);
  FUN_0019a0dc(&temp_v10,g_renderCtx);
  temp_v14 = temp_v10;
  uStack_7c = uStack_144;
  uStack_78 = uStack_140;
  uStack_74 = uStack_13c;
  uStack_70 = uStack_138;
  uStack_6c = uStack_134;
  uStack_68 = uStack_130;
  uStack_64 = uStack_12c;
  temp_v15 = temp_v11;
  uStack_5c = uStack_124;
  uStack_58 = uStack_120;
  uStack_54 = uStack_11c;
  uStack_50 = uStack_118;
  uStack_4c = uStack_114;
  uStack_48 = uStack_110;
  uStack_44 = uStack_10c;
  camSetMatrixA(g_renderCtx,temp_v13);
  FUN_00180310(6,0,0,1,temp_v4,0x79,&LAB_00165aec,*(unsigned int *)(param_1 + 0x2c8));
  camSetMatrixA(g_renderCtx,&temp_v14);
  return;
}

} /* extern "C" */
