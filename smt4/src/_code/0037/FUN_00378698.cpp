/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378698` (_code @ 0x378698, 0x3b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4ee4(int, int);
int __aeabi_vec_ctor_nocookie_nodtor(...);
int FUN_003795b0(int, int);
int FUN_0037ab08(int, int);
int FUN_0037ac9c(int, int);
int FUN_0037ae14(...);
int FUN_0037ae60(int, unsigned int, int, int);
int FUN_0037aeb0(...);
int FUN_0037bd50(int *, int);
int FUN_0037be24(unsigned char *, unsigned char *, int, unsigned int, int);
int VectorSignedToFloat(unsigned int, int);
int nw_snd_internal_BasicSound_SetInitialVolume(int);

/* stack frame of param_7: 37 slot(s), 121 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4D; /* 0x4d: local_4d */
    unsigned char sp4E; /* 0x4e: local_4e */
    unsigned char sp4F; /* 0x4f: local_4f */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned char sp51; /* 0x51: local_51 */
    unsigned char sp52; /* 0x52: local_52 */
    unsigned char sp53; /* 0x53: local_53 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_7_stack;

extern unsigned char LAB_0014c240; /* 0x14c240 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int soundArchiveReadBankInfo(unsigned int, int, unsigned int *);
/* Supplied declaration required: FUN_002b4ee4. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_003795b0. */
/* Supplied declaration required: FUN_0037ab08. */
extern int FUN_0037ab50(int, int *, unsigned int *);
/* Supplied declaration required: FUN_0037ac9c. */
/* Supplied declaration required: FUN_0037ae14. */
/* Supplied declaration required: FUN_0037ae60. */
/* Supplied declaration required: FUN_0037aeb0. */
/* Supplied declaration required: FUN_0037bd50. */
/* Supplied declaration required: FUN_0037be24. */
extern int vcallSlot5(unsigned int, unsigned int);
extern int FUN_003e6a28(int *, int, int *);
/* Supplied declaration required: nw_snd_internal_BasicSound_SetInitialVolume. */
extern int nw_snd_internal_driver_MmlParser_ParseAllocTrack(unsigned int, int, unsigned int *);


unsigned int
FUN_00378698(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4,int param_5,
            unsigned int param_6,int *param_7)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  int temp_v8 [9];
  int temp_v9;
  unsigned char temp_v10 [4];
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int *temp_v17;
  int *temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned char temp_v24;
  unsigned char temp_v25;
  unsigned char temp_v26;
  unsigned char temp_v27;
  unsigned char temp_v28 [8];
  int temp_v29;
  int iStack_44;
  int temp_v30;
  unsigned char temp_v31;
  unsigned int temp_v32;
  int iStack_34;
  int temp_v33;
  unsigned int *puStack_2c;
  unsigned int *puStack_28;
  
  iStack_34 = param_1;
  temp_v33 = param_2;
  puStack_2c = param_3;
  puStack_28 = param_4;
  temp_v0 = vcallSlot5(*(unsigned int *)(param_1 + 0xbc),*param_3);
  temp_v8[8] = *param_4;
  temp_v9 = param_4[5];
  if (param_7 != (int *)0x0) {
    if (*param_7 != 0) {
      temp_v0 = *param_7;
    }
    FUN_0037bd50(&temp_v15,temp_v0);
    if (param_7[1] != 0) {
      temp_v1 = FUN_003e6a28(&temp_v15,param_7[1],temp_v8 + 8);
      if (temp_v1 == 0) {
        return 0xf;
      }
      temp_v8[8] = nw_snd_internal_driver_MmlParser_ParseAllocTrack(temp_v16,temp_v8[8],(unsigned int *)&temp_v9)
      ;
    }
  }
  temp_v7 = 0;
  temp_v1 = *(int *)(temp_v33 + 4);
  temp_v29 = 0xffffffff;
  iStack_44 = 0;
  __aeabi_vec_ctor_nocookie_nodtor(temp_v8,&LAB_0014c240,8,4);
  __aeabi_vec_ctor_nocookie_nodtor(temp_v10,&LAB_0014c240,8,4);
  temp_v29 = *(unsigned int *)(temp_v33 + 0x9c);
  if ((temp_v0 == 0) && (temp_v7 = temp_v1 != 0, !temp_v7)) {
    return 5;
  }
  if (param_7 != (int *)0x0) {
    temp_v8[0] = param_7[2];
    temp_v8[2] = param_7[3];
    temp_v8[4] = param_7[4];
    temp_v8[6] = param_7[5];
  }
  else {
    temp_v8[0] = param_4[1];
    temp_v8[2] = param_4[2];
    temp_v8[4] = param_4[3];
    temp_v8[6] = param_4[4];
  }
  temp_v6 = 0;
  iStack_44 = temp_v0;
  do {
    temp_v21 = 0xffffffff;
    temp_v2 = soundArchiveReadBankInfo(*(unsigned int *)(param_1 + 4),temp_v8[temp_v6 * 2],(unsigned int *)&temp_v21);
    if (temp_v2 != 0) {
      temp_v2 = vcallSlot5(*(unsigned int *)(param_1 + 0xbc),temp_v21);
      temp_v8[temp_v6 * 2 + 1] = temp_v2;
      if (temp_v2 == 0) {
        if (temp_v1 == 0) {
          return 6;
        }
        temp_v7 = 1;
        break;
      }
      temp_v3 = *(int *)(param_1 + 0xbc);
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + 0xc;
      }
      puVar5 = temp_v10 + temp_v6 * 8;
      FUN_0037be24(puVar5,temp_v28 + temp_v6,temp_v2,*(unsigned int *)(param_1 + 4),temp_v3);
      switch((unsigned int)puVar5) {
      case (unsigned int)0x0:
      case (unsigned int)0x1:
        break;
      case (unsigned int)0x2:
        if (temp_v1 != 0) {
          temp_v7 = 1;
        }
        break;
      case (unsigned int)0xfffffffe:
        return 0x12;
      case (unsigned int)0xffffffff:
        if (temp_v1 == 0) {
          return 8;
        }
        temp_v7 = 1;
        break;
      default:
        return 0xff;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  FUN_0037ae60(temp_v33,*(unsigned int *)(param_1 + 0xa0),temp_v9,param_1 + 8);
  temp_v1 = temp_v33;
  VectorSignedToFloat(param_3[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  nw_snd_internal_BasicSound_SetInitialVolume(temp_v33);
  FUN_003795b0(temp_v1,*(unsigned char *)(param_3 + 5));
  FUN_002b4ee4(temp_v1,*(unsigned char *)((int)param_3 + 0x15));
  FUN_0037ab08(temp_v33,*(unsigned char *)(param_4 + 6));
  FUN_0037ac9c(temp_v33,(int)*(char *)((int)param_4 + 0x19));
  temp_v5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0037ae14(temp_v33,*(int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
    temp_v5 = temp_v4;
  }
  if (param_5 == 0) {
    temp_v31 = 1;
  }
  else {
    if (param_5 != 1) {
      temp_v5 = 0;
    }
    temp_v31 = 0;
    if (param_5 != 1) {
      param_6 = temp_v5;
    }
  }
  temp_v30 = temp_v8[8];
  temp_v32 = param_6;
  if (temp_v7) {
    temp_v15 = *(int *)(param_1 + 4);
    temp_v16 = *(unsigned int *)(param_1 + 0xbc);
    temp_v17 = (unsigned int *)&temp_v29;
    temp_v18 = temp_v8;
    temp_v0 = FUN_0037ab50(temp_v33,&temp_v15,(unsigned int *)&temp_v30);
    if (temp_v0 == 0) {
      return 9;
    }
  }
  else {
    temp_v16 = temp_v8[1];
    temp_v20 = temp_v11;
    temp_v24 = temp_v28[0];
    temp_v17 = (unsigned int *)temp_v8[3];
    temp_v21 = temp_v12;
    temp_v25 = temp_v28[1];
    temp_v18 = (int *)temp_v8[5];
    temp_v22 = temp_v13;
    temp_v26 = temp_v28[2];
    temp_v19 = temp_v8[7];
    temp_v23 = temp_v14;
    temp_v27 = temp_v28[3];
    temp_v15 = temp_v0;
    FUN_0037aeb0(temp_v33,&temp_v15,&temp_v30);
  }
  return 0;
}

} /* extern "C" */
