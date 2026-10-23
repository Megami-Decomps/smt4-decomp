/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c74ac` (_code @ 0x2c74ac, 0x514 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int eventDispatchIfSet(...);
int requestHandlerDispatch(...);
int handlerTableCall(...);
int FUN_0024f880(...);
int FUN_0024f890(...);
int eventDispatch(...);
int FUN_00281bb0(...);
int gfxQuaternionWorkspaceBuildMatrix(...);
int FUN_002a36fc(...);
int FUN_002a3ab0(...);
int resOwnerRunNodeHandlers(...);

typedef struct fn_002c74ac_arg0 fn_002c74ac_arg0;
typedef struct fn_002c74ac_arg0_p4c fn_002c74ac_arg0_p4c;
struct fn_002c74ac_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xa];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x1b];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x7];
    void *field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    fn_002c74ac_arg0_p4c *field_0x4c; /* +0x4c */
};
struct fn_002c74ac_arg0_p4c {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern float DAT_004ea98c; /* 0x4ea98c */
extern float DAT_004ea990; /* 0x4ea990 */
extern float DAT_004ea994; /* 0x4ea994 */
extern float DAT_004ea998; /* 0x4ea998 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: eventDispatchIfSet. */
/* Supplied declaration required: requestHandlerDispatch. */
/* Supplied declaration required: handlerTableCall. */
/* Supplied declaration required: FUN_0024f880. */
/* Supplied declaration required: FUN_0024f890. */
/* Supplied declaration required: eventDispatch. */
/* Supplied declaration required: FUN_00281bb0. */
/* Supplied declaration required: gfxQuaternionWorkspaceBuildMatrix. */
/* Supplied declaration required: FUN_002a36fc. */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: resOwnerRunNodeHandlers. */


void FUN_002c74ac(fn_002c74ac_arg0 *param_1)

{
/* irregular: 12 native warning(s); review required */
  float temp_v0;
  float *pfVar2;
  unsigned int *puVar3;
  fn_002c74ac_arg0_p4c *pfVar4;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  long long temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float temp_v27;
  float fStack_74;
  float fStack_70;
  float temp_v28;
  float temp_v29;
  
  pfVar4 = param_1->field_0x4c;
  if (param_1->field_0xc != 5) {
    if (param_1->field_0xc == 6) {
      puVar3 = (unsigned int *)param_1->field_0x3c;
      pfVar2 = (float *)pfVar4->field_0x18;
      temp_v2 = pfVar4->field_0x8;
      if ((pfVar4->field_0xc & 1) != 0) {
        FUN_0024f890(pfVar4,&temp_v26);
        FUN_0024f880(pfVar4,&temp_v22);
        DAT_004ea91c = temp_v26;
        DAT_004ea920 = fStack_84;
        DAT_004ea924 = fStack_80;
        DAT_004ea928 = fStack_7c;
        gfxQuaternionWorkspaceBuildMatrix();
        temp_v0 = DAT_004ea988;
        DAT_004ea98c = temp_v22;
        temp_v1 = 0;
        DAT_004ea990 = temp_v23;
        DAT_004ea994 = temp_v24;
        DAT_004ea998 = temp_v25;
        temp_v11 = (unsigned long long)(unsigned int)DAT_004ea96c;
        temp_v13 = CONCAT44(DAT_004ea970,DAT_004ea974);
        temp_v16 = CONCAT44(DAT_004ea97c,DAT_004ea968);
        temp_v9 = (unsigned long long)(unsigned int)DAT_004ea95c << 0x20;
        temp_v10 = CONCAT44(DAT_004ea964,DAT_004ea960);
        temp_v20 = CONCAT44(DAT_004ea984,DAT_004ea980);
        temp_v29 = temp_v24;
        temp_v19 = CONCAT44(DAT_004ea978,temp_v25);
        if (0 < temp_v2) {
          do {
            if (pfVar2[4] == 0.0f) {
              resOwnerRunNodeHandlers(*puVar3);
            }
            if (-1 < (int)pfVar2[4]) {
              DAT_004ea968 = (float)temp_v16;
              DAT_004ea96c = (float)temp_v11;
              DAT_004ea970 = (float)((unsigned long long)temp_v13 >> 0x20);
              DAT_004ea974 = (float)temp_v13;
              DAT_004ea978 = (float)((unsigned long long)temp_v19 >> 0x20);
              DAT_004ea97c = (float)((unsigned long long)temp_v16 >> 0x20);
              DAT_004ea95c = (float)((unsigned long long)temp_v9 >> 0x20);
              DAT_004ea960 = (float)temp_v10;
              DAT_004ea964 = (float)((unsigned long long)temp_v10 >> 0x20);
              DAT_004ea980 = (float)temp_v20;
              DAT_004ea984 = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_004ea98c = temp_v22;
              DAT_004ea990 = temp_v23;
              DAT_004ea994 = temp_v29;
              DAT_004ea998 = (float)temp_v19;
              temp_v3 = *pfVar2;
              temp_v5 = pfVar2[1];
              temp_v7 = pfVar2[2];
              temp_v11 = CONCAT44(DAT_004ea978,DAT_004ea96c);
              temp_v28 = temp_v5 * DAT_004ea978 + temp_v7 * temp_v0 + DAT_004ea998 + temp_v3 * DAT_004ea968
              ;
              temp_v27 = temp_v5 * DAT_004ea96c + temp_v7 * DAT_004ea97c +
                         temp_v22 + temp_v3 * DAT_004ea95c;
              fStack_70 = temp_v5 * DAT_004ea974 + temp_v7 * DAT_004ea984 +
                          temp_v29 + temp_v3 * DAT_004ea964;
              fStack_74 = temp_v5 * DAT_004ea970 + temp_v7 * DAT_004ea980 +
                          temp_v23 + temp_v3 * DAT_004ea960;
              DAT_004ea91c = temp_v27;
              DAT_004ea920 = fStack_74;
              DAT_004ea924 = fStack_70;
              DAT_004ea928 = temp_v28;
              DAT_004ea988 = temp_v0;
              FUN_002a36fc(*puVar3);
              FUN_002a3ab0(*puVar3,&temp_v27);
              FUN_00281bb0(*puVar3);
            }
            temp_v1 = temp_v1 + 1;
            pfVar2 = pfVar2 + 10;
            puVar3 = puVar3 + 1;
          } while (temp_v1 < temp_v2);
        }
      }
      else {
        temp_v1 = 0;
        if (0 < temp_v2) {
          do {
            if (pfVar2[4] == 0.0f) {
              resOwnerRunNodeHandlers(*puVar3);
            }
            if (-1 < (int)pfVar2[4]) {
              FUN_002a36fc(*puVar3);
              FUN_002a3ab0(*puVar3,pfVar2);
              FUN_00281bb0(*puVar3);
            }
            temp_v1 = temp_v1 + 1;
            pfVar2 = pfVar2 + 10;
            puVar3 = puVar3 + 1;
          } while (temp_v1 < temp_v2);
          return;
        }
      }
    }
  }
  else {
    puVar3 = *(unsigned int **)&param_1->field_0x34;
    pfVar2 = (float *)pfVar4->field_0x18;
    temp_v2 = pfVar4->field_0x8;
    if ((pfVar4->field_0xc & 1) != 0) {
      FUN_0024f890(pfVar4,&temp_v26);
      FUN_0024f880(pfVar4,&temp_v22);
      DAT_004ea91c = temp_v26;
      DAT_004ea920 = fStack_84;
      DAT_004ea924 = fStack_80;
      DAT_004ea928 = fStack_7c;
      gfxQuaternionWorkspaceBuildMatrix();
      temp_v0 = DAT_004ea97c;
      DAT_004ea98c = temp_v22;
      temp_v1 = 0;
      DAT_004ea990 = temp_v23;
      DAT_004ea994 = temp_v24;
      DAT_004ea998 = temp_v25;
      temp_v11 = (unsigned long long)(unsigned int)DAT_004ea988;
      temp_v9 = (unsigned long long)(unsigned int)DAT_004ea95c << 0x20;
      temp_v29 = temp_v24;
      temp_v3 = DAT_004ea960;
      temp_v5 = DAT_004ea968;
      temp_v7 = DAT_004ea964;
      temp_v21 = DAT_004ea96c;
      temp_v15 = DAT_004ea978;
      temp_v17 = DAT_004ea980;
      temp_v18 = DAT_004ea984;
      temp_v12 = DAT_004ea970;
      temp_v14 = DAT_004ea974;
      if (0 < temp_v2) {
        do {
          if (-1 < (int)pfVar2[4]) {
            DAT_004ea95c = (float)((unsigned long long)temp_v9 >> 0x20);
            DAT_004ea988 = (float)temp_v11;
            DAT_004ea98c = temp_v22;
            DAT_004ea990 = temp_v23;
            DAT_004ea994 = temp_v29;
            temp_v4 = *pfVar2;
            temp_v6 = pfVar2[1];
            temp_v8 = pfVar2[2];
            temp_v11 = CONCAT44(temp_v15,DAT_004ea988);
            temp_v28 = temp_v6 * temp_v15 + temp_v8 * DAT_004ea988 + temp_v25 + temp_v4 * temp_v5;
            temp_v27 = temp_v6 * temp_v21 + temp_v8 * temp_v0 + temp_v22 + temp_v4 * DAT_004ea95c;
            fStack_70 = temp_v6 * temp_v14 + temp_v8 * temp_v18 + temp_v29 + temp_v4 * temp_v7;
            fStack_74 = temp_v6 * temp_v12 + temp_v8 * temp_v17 + temp_v23 + temp_v4 * temp_v3;
            DAT_004ea91c = temp_v27;
            DAT_004ea920 = fStack_74;
            DAT_004ea924 = fStack_70;
            DAT_004ea928 = temp_v28;
            DAT_004ea960 = temp_v3;
            DAT_004ea964 = temp_v7;
            DAT_004ea968 = temp_v5;
            DAT_004ea96c = temp_v21;
            DAT_004ea970 = temp_v12;
            DAT_004ea974 = temp_v14;
            DAT_004ea978 = temp_v15;
            DAT_004ea97c = temp_v0;
            DAT_004ea980 = temp_v17;
            DAT_004ea984 = temp_v18;
            DAT_004ea998 = temp_v25;
            handlerTableCall(*puVar3);
            requestHandlerDispatch(*puVar3,&temp_v27);
            eventDispatch(*puVar3);
          }
          temp_v1 = temp_v1 + 1;
          pfVar2 = pfVar2 + 10;
          puVar3 = puVar3 + 1;
        } while (temp_v1 < temp_v2);
        return;
      }
    }
    else {
      temp_v1 = 0;
      if (0 < temp_v2) {
        do {
          if (pfVar2[4] == 0.0f) {
            eventDispatchIfSet(*puVar3);
          }
          if (-1 < (int)pfVar2[4]) {
            handlerTableCall(*puVar3);
            requestHandlerDispatch(*puVar3,pfVar2);
            eventDispatch(*puVar3);
          }
          temp_v1 = temp_v1 + 1;
          pfVar2 = pfVar2 + 10;
          puVar3 = puVar3 + 1;
        } while (temp_v1 < temp_v2);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
