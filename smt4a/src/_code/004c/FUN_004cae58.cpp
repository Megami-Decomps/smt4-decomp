/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cae58` (_code @ 0x4cae58, 0x44c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ec668(...);
int FUN_003f0e20(...);
int FUN_003f2638(...);
int callOnHandleField4A(...);
int FUN_004d8668(...);
int FUN_004d86a0(...);
int FUN_004d86c0(...);
int targetStartIndexWithFlag2(...);
int FUN_004d888c(...);
int obj4FStartSwitch(...);
int FUN_004fd2cc(...);
int FUN_004fecd4(...);

typedef struct fn_004cae58_arg0 fn_004cae58_arg0;
struct fn_004cae58_arg0 {
    unsigned char pad_0x0[0x14];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined1 field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x13];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0xb];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x7];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x119];
    unsigned char field_0x166; /* +0x166 */
    unsigned char pad_0x167[0x7];
    ushort field_0x16e; /* +0x16e */
    unsigned char pad_0x170[0x9c];
    undefined4 field_0x20c; /* +0x20c */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int g_btlCamera; /* 0x571508 */

extern int querySlotHasHandle(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_003ec668. */
extern unsigned long long FUN_003eca48(fn_004cae58_arg0 *, unsigned short);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f2638. */
/* Supplied declaration required: callOnHandleField4A. */
extern int holderObjectCall(unsigned int);
/* Supplied declaration required: FUN_004d8668. */
/* Supplied declaration required: FUN_004d86a0. */
/* Supplied declaration required: FUN_004d86c0. */
/* Supplied declaration required: targetStartIndexWithFlag2. */
extern int handleOwnerIsActive(unsigned int);
/* Supplied declaration required: FUN_004d888c. */
extern int btlUnitGet(unsigned int);
/* Supplied declaration required: obj4FStartSwitch. */
/* Supplied declaration required: FUN_004fd2cc. */
/* Supplied declaration required: FUN_004fecd4. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_004cae58(fn_004cae58_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 13 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  fn_004cae58_arg0 *pfVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  float in_s0;
  float temp_v10;
  unsigned long long temp_v11;
  
  pfVar3 = param_1;
  FUN_003f0e20(param_1,(int)*(short *)(param_2 + 0x6a));
  temp_v4 = (unsigned int)*(unsigned short *)&pfVar3->field_0x166;
  if (temp_v4 == 0x35b) {
    temp_v2 = gameFlagIsSet(0x592);
    if (temp_v2 != 0) {
      temp_v2 = querySlotHasHandle();
      if (temp_v2 != 0) {
        temp_v2 = callOnHandleField4A(*(unsigned int *)(param_2 + 0x1bc));
        if (temp_v2 == 0xd) {
          return;
        }
        *(unsigned short *)(param_2 + 0x1ca) = *(unsigned short *)(param_2 + 0x1c8);
        *(unsigned short *)(param_2 + 0x1c8) = 0;
        *(unsigned short *)(param_2 + 0x1cc) = 0;
        *(unsigned short *)(param_2 + 0x1ce) = 0;
        *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(param_2 + 0x50) & 0xffbfffff;
        *(unsigned int *)(param_2 + 0x48) = 0;
        *(unsigned int *)(param_2 + 0x4c) = 0;
        *(unsigned int *)(param_2 + 0xac) = 0;
        FUN_004d888c(*(unsigned int *)(param_2 + 0x1bc),0xd,1);
        return;
      }
      temp_v2 = callOnHandleField4A(*(unsigned int *)(param_2 + 0x1bc));
      if (temp_v2 != 0xd) {
        return;
      }
      FUN_003f2638(param_1,1,param_2,0);
      temp_v4 = temp_v5;
    }
    else {
      temp_v11 = callOnHandleField4A(*(unsigned int *)(param_2 + 0x1bc));
      temp_v4 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
      if ((int)temp_v11 == 0xd) {
        FUN_003f2638(param_1,1,param_2,0);
        temp_v4 = temp_v5;
      }
    }
  }
  temp_v0 = *(short *)(param_2 + 0x1c8);
  if (temp_v0 == 0) {
    temp_v4 = (unsigned int)*(unsigned short *)(param_2 + 0x1cc);
  }
  if (temp_v0 == 0 && temp_v4 == 0) {
    return;
  }
  temp_v1 = *(short *)(param_2 + 0x1cc);
  if (temp_v0 != temp_v1) {
    *(short *)(param_2 + 0x1ca) = temp_v0;
    *(short *)(param_2 + 0x1c8) = temp_v1;
    *(unsigned short *)(param_2 + 0x1ce) = 0;
    *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(param_2 + 0x50) & 0xffbfffff;
  }
  if (*(short *)(param_2 + 0x1c8) == 0 && temp_v1 == 0) {
    return;
  }
  temp_v11 = FUN_003eca48(param_1,*(unsigned short *)&pfVar3->field_0x166);
  temp_v2 = (int)((unsigned long long)temp_v11 >> 0x20);
  temp_v7 = (int)temp_v11;
  if (temp_v7 != 0) {
    temp_v2 = (int)*(char *)(temp_v7 + 2);
  }
  if (temp_v7 == 0 || temp_v2 == 0) {
    return;
  }
  temp_v2 = FUN_003ec668(param_1);
  if (temp_v2 != 0) {
    if ((((*(unsigned char *)(temp_v2 + 0x39) & 1) != 0) && (*(int *)(g_btlCamera + 0x38) != 3)) &&
       ((*(unsigned int *)(param_2 + 0x50) & 0x400000) == 0)) {
      obj4FStartSwitch(g_btlCamera,(int)*(short *)(temp_v2 + 0x3a));
      *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(param_2 + 0x50) | 0x400000;
      if ((*(unsigned char *)(temp_v2 + 0x39) & 2) == 0) {
        *(unsigned char *)(g_btlCamera + 0x6a8) = 0;
      }
      else {
        *(unsigned char *)(g_btlCamera + 0x6a8) = 1;
        param_1[0x25].field_0x34 = 1;
      }
      temp_v6 = btlUnitGet(g_btlScriptUnit);
      temp_v3 = 0;
      if (temp_v6 != 0) {
        temp_v3 = temp_v6;
      }
      FUN_004fecd4(1,temp_v3);
    }
    temp_v3 = callOnHandleField4A(*(unsigned int *)(param_2 + 0x1bc));
    if (*(unsigned short *)(param_2 + 0x1ce) >= 3) {
      return;
    }
    temp_v8 = temp_v2 + (unsigned int)*(unsigned short *)(param_2 + 0x1ce) * 0x10;
    temp_v6 = *(int *)(temp_v8 + 4);
    if (temp_v6 == 0) {
      in_s0 = *(float *)(temp_v8 + 8);
      temp_v9 = 0;
      if (in_s0 == 0.0f) {
        temp_v9 = *(int *)(temp_v8 + 0xc) == 0;
      }
      if (!temp_v9) goto LAB_004cb0b4;
    }
    else {
LAB_004cb0b4:
      if (temp_v6 != temp_v3) {
        FUN_004d888c(*(unsigned int *)(param_2 + 0x1bc));
        if ((*(unsigned int *)(temp_v8 + 0x10) & 1) != 0) {
          FUN_004d86c0(*(unsigned int *)(param_2 + 0x1bc),(*(unsigned int *)(temp_v8 + 0x10) & 0x7ff) >> 1);
        }
        if ((*(unsigned int *)(temp_v8 + 0x10) & 0x800) != 0) {
          targetStartIndexWithFlag2(*(unsigned int *)(param_2 + 0x1bc),(*(unsigned int *)(temp_v8 + 0x10) & 0x3fffff) >> 0xc)
          ;
        }
        temp_v7 = *(int *)&param_1[0x11].field_0x40;
        temp_v2 = *(int *)(temp_v8 + 4);
        if (-1 < temp_v7) {
          *(unsigned int *)&param_1[0x11].field_0x40 = 0xffffffff;
          temp_v2 = temp_v7;
        }
        FUN_004fd2cc(0,0,1,0,temp_v2,*(int *)(temp_v8 + 0xc) != 0);
        return;
      }
      if (*(int *)(temp_v8 + 0xc) == 0) {
        temp_v2 = handleOwnerIsActive(*(unsigned int *)(param_2 + 0x1bc));
        if (temp_v2 != 0) {
          FUN_004d8668();
          temp_v10 = (float)(int)in_s0;
          FUN_004d86a0(*(unsigned int *)(param_2 + 0x1bc));
          if ((int)in_s0 < (int)temp_v10 - 1) {
            return;
          }
        }
        else {
          temp_v2 = holderObjectCall(*(unsigned int *)(param_2 + 0x1bc));
          if (temp_v2 == 0) {
            return;
          }
        }
        *(short *)(param_2 + 0x1ce) = *(short *)(param_2 + 0x1ce) + 1;
        return;
      }
      temp_v3 = handleOwnerIsActive(*(unsigned int *)(param_2 + 0x1bc));
      if ((temp_v3 == 0) && (temp_v3 = holderObjectCall(*(unsigned int *)(param_2 + 0x1bc)), temp_v3 == 0)) {
        return;
      }
    }
    if (*(int *)(temp_v2 + 0x34) != 0) {
      temp_v2 = FUN_003ec668(param_1,(int)*(char *)(temp_v7 + 2),2);
      temp_v7 = __aeabi_idivmod(*(int *)&pfVar3[1].field_0x48 * 100,*(unsigned int *)&pfVar3[1].field_0x4c
                           );
      if ((temp_v7 < 0x14) && (temp_v2 != 0)) {
        FUN_003f2638(param_1,2,param_2,1);
      }
      else {
        FUN_003f2638(param_1,1,param_2);
      }
      *(unsigned int *)(param_2 + 0x48) = 0;
      *(unsigned int *)(param_2 + 0x4c) = 0;
      *(unsigned int *)(param_2 + 0xac) = 0;
      return;
    }
  }
  *(unsigned short *)(param_2 + 0x1ca) = *(unsigned short *)(param_2 + 0x1c8);
  *(unsigned short *)(param_2 + 0x1c8) = 0;
  *(unsigned short *)(param_2 + 0x1cc) = 0;
  *(unsigned short *)(param_2 + 0x1ce) = 0;
  *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(param_2 + 0x50) & 0xffbfffff;
  *(unsigned int *)(param_2 + 0x48) = 0;
  *(unsigned int *)(param_2 + 0x4c) = 0;
  *(unsigned int *)(param_2 + 0xac) = 0;
  return;
}

} /* extern "C" */
