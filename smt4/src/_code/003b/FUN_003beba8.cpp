/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003beba8` (_code @ 0x3beba8, 0x2a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_0022a690(...);
int FUN_0022ab08(int, unsigned int [12]);
int FUN_0023ea94(void);
int FUN_00247478(unsigned char [2], unsigned char *, unsigned char *);
int FUN_0027da30(unsigned char *, unsigned int);
int btlMainFindEntryByListedId(...);
int FUN_00283ebc(int, unsigned int, int);
int btlGetMainState(void);
int FUN_002ae164(void);
int FUN_003be670(unsigned int, unsigned int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_7: 7 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned short sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022a690. */
/* Supplied declaration required: FUN_0022ab08. */
/* Supplied declaration required: FUN_0023ea94. */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: FUN_00283ebc. */
/* Supplied declaration required: btlGetMainState. */
extern unsigned int playerGetSkillRank(int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_003be670. */


int FUN_003beba8(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                int param_6,int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 13 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int *puVar5;
  int temp_v0;
  float *pfVar7;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int in_s1;
  float temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int temp_v13;
  unsigned char temp_v14 [2];
  unsigned short uStack_76;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v15;
  unsigned int temp_v16 [12];
  unsigned long long temp_v17;
  
  temp_v12 = 0.0f;
  temp_v6 = 1.0f;
  pbVar1 = (unsigned char *)btlGetMainState();
  pbVar2 = pbVar1;
  FUN_0027da30(pbVar1,param_3);
  pbVar3 = pbVar1;
  FUN_0027da30(pbVar1,param_4);
  if ((*pbVar2 & 4) != 0) {
    temp_v6 = 0.8f;
  }
  temp_v9 = VectorSignedToFloat((int)*(short *)(pbVar2 + 0xf2),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = romwright_piece_4_4(param_5,temp_v9);
  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pbVar2 + 0xf0),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0022a690(7,(int)*(short *)(pbVar2 + 0xf0));
  temp_v4 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0022a690(10);
  temp_v5 = temp_v4;
  FUN_003be670(param_3,param_4);
  temp_v7 = CONCAT44(in_s1,temp_v3 * temp_v5 * temp_v4);
  pbVar4 = pbVar1;
  btlMainFindEntryByListedId(pbVar1,param_3);
  FUN_00247478(temp_v14,pbVar1,pbVar4);
  uStack_90 = uStack_6c;
  uStack_8c = uStack_68;
  uStack_88 = uStack_64;
  uStack_84 = uStack_60;
  uStack_80 = uStack_5c;
  temp_v13 = temp_v15;
  temp_v16[0] = 0;
  FUN_0022ab08(uStack_76,temp_v16);
  puVar5 = (unsigned int *)btlGetMainState();
  btlMainFindEntryByListedId(puVar5,param_3);
  temp_v2 = 0;
  if (((*puVar5 & 2) != 0) && (temp_v0 = param_1, FUN_002ae164(), temp_v0 != 0)) {
    temp_v9 = playerGetSkillRank(param_1);
    FUN_00283ebc(temp_v0,temp_v9,1);
    temp_v2 = temp_v0;
  }
  temp_v11 = 0.01f;
  temp_v3 = (float)VectorSignedToFloat(param_6 + param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorUnsignedToFloat(uStack_70 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.01f;
  temp_v4 = (float)temp_v7;
  temp_v8 = (float)((unsigned long long)temp_v7 >> 0x20);
  if (param_1 < 1) {
    temp_v3 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v17 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    if (param_2 != 1) {
      temp_v5 = ((float)temp_v17 + temp_v3) * 0.33333334f * in_s0 * temp_v8 * temp_v4 * temp_v6 * temp_v5;
    }
    else {
      temp_v5 = (temp_v10 + temp_v3) * 0.33333334f * in_s0 * temp_v8 * temp_v4 * temp_v6 * temp_v5;
    }
  }
  else {
    temp_v5 = ((in_s0 + ((float)temp_v17 + temp_v10 * 0.5f) * 4.5f) * 0.33333334f * temp_v8 * temp_v4 * temp_v6
             * temp_v5) / (temp_v3 * 0.5f);
  }
  temp_v6 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = temp_v5 + temp_v12 + temp_v6;
  if ((*(unsigned int *)(pbVar1 + 0x44a0) & 0x40000) != 0) {
    temp_v1 = (unsigned int)*(unsigned char *)((int)&uStack_90 + pbVar3[0x14b] + 2);
    if (temp_v1 != 0) {
      temp_v12 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = temp_v6 * temp_v12 * temp_v11;
    }
    return (int)temp_v6;
  }
  if ((*pbVar2 & 4) != 0) {
    if ((*pbVar3 & 4) != 0) {
      pfVar7 = (float *)FUN_0023ea94();
      temp_v12 = *pfVar7;
    }
    else {
      temp_v2 = FUN_0023ea94();
      temp_v12 = *(float *)(temp_v2 + 8);
    }
  }
  else if ((*pbVar3 & 4) != 0) {
    pfVar7 = (float *)FUN_0023ea94();
    temp_v12 = *pfVar7;
  }
  else {
    temp_v2 = FUN_0023ea94();
    temp_v12 = *(float *)(temp_v2 + 8);
  }
  temp_v6 = temp_v12 * temp_v6;
  temp_v1 = (unsigned int)*(unsigned char *)((int)&uStack_90 + pbVar3[0x14b] + 2);
  if (temp_v1 != 0) {
    temp_v12 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v6 * temp_v12 * temp_v11;
  }
  return (int)temp_v6;
}

} /* extern "C" */
