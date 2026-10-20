/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004645ec` (_code @ 0x4645ec, 0x420 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004638ac(...);

typedef struct fn_004645ec_arg0 fn_004645ec_arg0;
typedef struct fn_004645ec_arg1 fn_004645ec_arg1;
struct fn_004645ec_arg0 {
    unsigned char pad_0x0[0x14];
    void *field_0x14; /* +0x14 */
    void *field_0x18; /* +0x18 */
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    uint field_0x20; /* +0x20 */
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x2];
    byte field_0x27; /* +0x27 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0xf];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x4];
    undefined4 field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
    byte field_0x50; /* +0x50 */
    byte field_0x51; /* +0x51 */
    unsigned char pad_0x52[0x6];
    undefined4 field_0x58; /* +0x58 */
};
struct fn_004645ec_arg1 {
    unsigned char pad_0x0[0x14];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    undefined1 field_0x28; /* +0x28 */
    unsigned char pad_0x29[0xf];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x7];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x3];
    unsigned char field_0x50; /* +0x50 */
    unsigned char field_0x51; /* +0x51 */
    unsigned char pad_0x52[0x6];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    undefined4 field_0x5c; /* +0x5c */
    undefined1 field_0x60; /* +0x60 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} param_5_stack;

extern int *DAT_005c1d30; /* 0x5c1d30 */

/* Supplied declaration required: FUN_004638ac. */
extern unsigned int aeabi_uidivmod(unsigned int, unsigned int);


unsigned int
FUN_004645ec(fn_004645ec_arg0 *param_1,fn_004645ec_arg1 *param_2,unsigned int *param_3,
            unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  fn_004645ec_arg0 *pfVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned long long temp_v7;
  unsigned int temp_v8 [2];
  unsigned int temp_v9 [11];
  fn_004645ec_arg0 *pfStack_34;
  fn_004645ec_arg1 *pfStack_30;
  unsigned int *puStack_2c;
  unsigned int temp_v10;
  
  temp_v6 = 0;
  temp_v8[0] = 0;
  pfStack_34 = param_1;
  pfStack_30 = param_2;
  puStack_2c = param_3;
  temp_v10 = param_4;
  if (((unsigned int)param_1->field_0x3c < (unsigned int)param_1->field_0x38) &&
     (*(char *)((int)param_1->field_0x18 + 8) != '\0')) {
    param_1->field_0x38 = param_1->field_0x40;
    (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x40))(param_1->field_0x14,param_1->field_0x48,0);
    if (param_1->field_0x40 != 0) {
      temp_v5 = param_1->field_0x20;
      if (temp_v5 != 0) {
        temp_v0 = temp_v5 & 1;
        if (temp_v0 == 1) {
          temp_v9[0] = *param_3;
        }
        temp_v4 = (unsigned int)(temp_v0 == 1);
        if (temp_v0 < temp_v5) {
          do {
            temp_v0 = temp_v0 + 2;
            temp_v9[temp_v4] = param_3[temp_v4];
            temp_v9[temp_v4 + 1] = param_3[temp_v4 + 1];
            temp_v4 = temp_v4 + 2;
          } while (temp_v0 < param_1->field_0x20);
        }
      }
      temp_v1 = (**(romwright_code **)(*DAT_005c1d30 + 0x10))
                        (DAT_005c1d30,param_1->field_0x14,param_1->field_0x20,temp_v9);
      if (temp_v1 == 0) {
        return 0;
      }
    }
    param_1->field_0x58 = *(unsigned int *)((int)param_1->field_0x18 + 0xc);
    param_1->field_0x50 = 1;
  }
  if (param_5 != 0) {
    pfVar3 = param_1;
    FUN_004638ac(param_1,param_5,temp_v8);
    if (pfVar3 == (fn_004645ec_arg0 *)0x0) {
      param_2->field_0x1c = 0;
      return 1;
    }
    temp_v2 = aeabi_uidivmod(param_1->field_0x58,*(unsigned int *)((int)param_1->field_0x18 + 0x1c));
    param_1->field_0x38 = temp_v2;
    (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x40))(param_1->field_0x14,0);
    temp_v0 = 0;
    temp_v5 = 0;
    if (param_1->field_0x38 != 0) {
      do {
        if ((param_1->field_0x40 != 0) && (param_1->field_0x40 - 1U == temp_v0)) {
          temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x54))();
          param_1->field_0x48 = temp_v2;
        }
        (**(romwright_code **)(*DAT_005c1d30 + 0xc))(DAT_005c1d30,param_1->field_0x14);
        temp_v5 = param_1->field_0x38;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v5);
    }
    temp_v6 = param_1->field_0x58 - temp_v5 * *(int *)((int)param_1->field_0x18 + 0x1c);
  }
  else if (param_1->field_0x50 != 0) {
    temp_v6 = param_1->field_0x4c;
  }
  if ((param_1->field_0x40 != 0) && (param_1->field_0x40 - 1 == param_1->field_0x38)) {
    temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x54))();
    param_1->field_0x48 = temp_v2;
  }
  temp_v7 = (unsigned long long)(unsigned int)param_1->field_0x58;
  if (param_1->field_0x38 != param_1->field_0x3c) {
    temp_v1 = *(int *)((int)param_1->field_0x18 + 0x1c);
  }
  else {
    temp_v1 = *(int *)((int)param_1->field_0x18 + 0x28);
  }
  temp_v5 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x54))();
  temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x3c))();
  if (temp_v5 >= temp_v0) {
    temp_v1 = 0;
  }
  else if (temp_v1 != 0) {
    temp_v5 = param_1->field_0x20;
    if (temp_v5 != 0) {
      temp_v0 = temp_v5 & 1;
      if (temp_v0 == 1) {
        temp_v9[0] = *param_3;
      }
      temp_v4 = (unsigned int)(temp_v0 == 1);
      if (temp_v0 < temp_v5) {
        do {
          temp_v0 = temp_v0 + 2;
          temp_v9[temp_v4] = param_3[temp_v4];
          temp_v9[temp_v4 + 1] = param_3[temp_v4 + 1];
          temp_v4 = temp_v4 + 2;
        } while (temp_v0 < param_1->field_0x20);
      }
    }
    temp_v3 = (**(romwright_code **)(*DAT_005c1d30 + 0x10))
                      (DAT_005c1d30,param_1->field_0x14,param_1->field_0x20,temp_v9);
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v5 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x54))();
    temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x3c))();
    if (temp_v0 <= temp_v5) {
      param_1->field_0x3c = param_1->field_0x38;
    }
  }
  temp_v2 = (unsigned int)temp_v7;
  param_1->field_0x50 = 0;
  temp_v5 = param_1->field_0x38 + 1;
  param_1->field_0x38 = temp_v5;
  param_1->field_0x58 = param_1->field_0x58 + temp_v1;
  if ((unsigned int)param_1->field_0x3c < temp_v5) {
    if (param_1->field_0x27 != 0) {
      param_1->field_0x58 = 0;
      temp_v2 = aeabi_uidivmod(0,*(unsigned int *)((int)param_1->field_0x18 + 0x1c));
      param_1->field_0x38 = temp_v2;
      (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x40))(param_1->field_0x14,0);
      temp_v2 = (unsigned int)temp_v7;
      temp_v5 = 0;
      if (temp_v5 < (unsigned int)param_1->field_0x38) {
        do {
          if ((param_1->field_0x40 != 0) && (param_1->field_0x40 - 1U == temp_v5)) {
            temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x14 + 0x54))();
            param_1->field_0x48 = temp_v2;
          }
          (**(romwright_code **)(*DAT_005c1d30 + 0xc))(DAT_005c1d30,param_1->field_0x14);
          temp_v2 = (unsigned int)temp_v7;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (unsigned int)param_1->field_0x38);
      }
    }
    else if (*(char *)((int)param_1->field_0x18 + 8) == '\0') {
      param_1->field_0x51 = 1;
    }
  }
  param_2->field_0x28 = 0;
  param_2->field_0x18 = temp_v10;
  param_2->field_0x1c = temp_v1;
  param_2->field_0x20 = temp_v2;
  param_2->field_0x24 = temp_v6;
  param_2->field_0x5c = temp_v8[0];
  param_2->field_0x60 = param_1->field_0x51;
  return 1;
}

} /* extern "C" */
