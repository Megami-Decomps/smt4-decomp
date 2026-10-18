/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be918` (_code @ 0x3be918, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003be918_arg0 fn_003be918_arg0;
struct fn_003be918_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0xf3];
    short field_0xf4; /* +0xf4 */
    unsigned char pad_0xf6[0x55];
    byte field_0x14b; /* +0x14b */
    unsigned char pad_0x14c[0x4354];
    undefined4 field_0x44a0; /* +0x44a0 */
};

/* stack frame of param_5: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned short sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
} param_5_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022a690. */
/* Supplied declaration required: FUN_0022ab08. */
/* Supplied declaration required: FUN_0023ea94. */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_00283ebc. */
/* Supplied declaration required: FUN_002939f4. */
extern unsigned int FUN_002ae108(fn_003be918_arg0 *);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_003be670. */


int FUN_003be918(fn_003be918_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4,
                int param_5)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 15 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int *puVar5;
  fn_003be918_arg0 *pfVar6;
  float *pfVar7;
  unsigned int temp_v0;
  int temp_v1;
  fn_003be918_arg0 *pfVar10;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v2;
  float temp_v3;
  unsigned int in_s1;
  float temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int temp_v11;
  unsigned char temp_v12 [2];
  unsigned short uStack_6a;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v13;
  unsigned int temp_v14 [9];
  
  temp_v9 = romwright_piece_4_4(in_s1,in_s0);
  temp_v10 = 0.0f;
  temp_v5 = 0x3f800000;
  pbVar1 = (unsigned char *)FUN_002939f4();
  pbVar2 = pbVar1;
  FUN_0027da30(pbVar1,param_2);
  pbVar3 = pbVar1;
  FUN_0027da30(pbVar1,param_3);
  if ((*pbVar2 & 4) != 0) {
    temp_v5 = 0x3f4ccccd;
  }
  temp_v7 = (float)VectorSignedToFloat((int)*(short *)(pbVar2 + 0xf4),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0022a690(8);
  temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0022a690(10);
  temp_v4 = temp_v3;
  FUN_003be670(param_2,param_3);
  temp_v6 = CONCAT44(temp_v2 * temp_v4 * temp_v3,temp_v5);
  pbVar4 = pbVar1;
  FUN_00282924(pbVar1,param_2);
  FUN_00247478(temp_v12,pbVar1,pbVar4);
  uStack_84 = uStack_60;
  uStack_80 = uStack_5c;
  uStack_7c = uStack_58;
  uStack_78 = uStack_54;
  uStack_74 = uStack_50;
  temp_v11 = temp_v13;
  temp_v14[0] = 0;
  FUN_0022ab08(uStack_6a,temp_v14);
  puVar5 = (unsigned int *)FUN_002939f4();
  FUN_00282924(puVar5,param_2);
  pfVar10 = (fn_003be918_arg0 *)0x0;
  if (((*puVar5 & 2) != 0) && (pfVar6 = param_1, FUN_002ae164(), pfVar6 != (fn_003be918_arg0 *)0x0))
  {
    temp_v5 = FUN_002ae108(param_1);
    FUN_00283ebc(pfVar6,temp_v5,1);
    pfVar10 = pfVar6;
  }
  temp_v8 = 0.01f;
  temp_v3 = (float)VectorUnsignedToFloat(uStack_64 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (float)VectorSignedToFloat(param_4 + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat(pfVar10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (((float)temp_v9 + temp_v7 * 4.5f) * 0.33333334f * (float)((unsigned long long)temp_v9 >> 0x20) *
            (float)((unsigned long long)temp_v6 >> 0x20) * (float)temp_v6 * temp_v3 * 0.01f) / (temp_v4 * 0.5f) +
           temp_v10 + temp_v2;
  if ((*(unsigned int *)(pbVar1 + 0x44a0) & 0x40000) != 0) {
    temp_v0 = (unsigned int)*(unsigned char *)((int)&uStack_84 + pbVar3[0x14b] + 2);
    if (temp_v0 != 0) {
      temp_v10 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = temp_v2 * temp_v10 * temp_v8;
    }
    return (int)temp_v2;
  }
  if ((*pbVar2 & 4) != 0) {
    if ((*pbVar3 & 4) != 0) {
      pfVar7 = (float *)FUN_0023ea94();
      temp_v10 = *pfVar7;
    }
    else {
      temp_v1 = FUN_0023ea94();
      temp_v10 = *(float *)(temp_v1 + 8);
    }
  }
  else if ((*pbVar3 & 4) != 0) {
    pfVar7 = (float *)FUN_0023ea94();
    temp_v10 = *pfVar7;
  }
  else {
    temp_v1 = FUN_0023ea94();
    temp_v10 = *(float *)(temp_v1 + 8);
  }
  temp_v2 = temp_v10 * temp_v2;
  temp_v0 = (unsigned int)*(unsigned char *)((int)&uStack_84 + pbVar3[0x14b] + 2);
  if (temp_v0 != 0) {
    temp_v10 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = temp_v2 * temp_v10 * temp_v8;
  }
  return (int)temp_v2;
}
