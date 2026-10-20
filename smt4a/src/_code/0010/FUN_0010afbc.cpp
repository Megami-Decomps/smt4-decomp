/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010afbc` (_code @ 0x10afbc, 0x132 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0010afbc_arg0 fn_0010afbc_arg0;
struct fn_0010afbc_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 *field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    void *field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    void *field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x2];
    ushort field_0x26; /* +0x26 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char DAT_00630530; /* 0x630530 */

extern int FUN_002ea6fc(unsigned char *, unsigned char *);


unsigned int
FUN_0010afbc(fn_0010afbc_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int *piVar2;
  unsigned char temp_v1 [4];
  unsigned short *temp_v2;
  unsigned char temp_v3 [12];
  fn_0010afbc_arg0 *pfStack_24;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  if (param_1->field_0x1c != 0) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    *(unsigned char *)((int)param_1->field_0x18 + 0x50) = 1;
  }
  else {
    *(unsigned char *)((int)param_1->field_0x18 + 0x50) = 0;
  }
  pfStack_24 = param_1;
  temp_v4 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  (**(romwright_code **)(*param_1->field_0xc + 0x5c))(temp_v3);
  temp_v1[0] = 0;
  temp_v0 = FUN_002ea6fc(temp_v3,temp_v1);
  if (temp_v0 != 0) {
    return 0;
  }
  temp_v2 = &param_1->field_0x26;
  if ((*(int *)((unsigned char *)&DAT_00630530 + 0x10)) != 0) {
    if ((int)(param_4 * 0x40000000) < 0) {
      temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))
                        (param_1->field_0x20,temp_v4,temp_v2,0,2,0);
      if (temp_v0 == 0) {
        return 0;
      }
    }
    else {
      temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))
                        (param_1->field_0x20,temp_v4,temp_v2,0,2,0);
      if (temp_v0 == 0) {
        temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))
                          (param_1->field_0x20,0,temp_v2,0,2,0);
        if (temp_v0 == 0) {
          return 0;
        }
      }
    }
    *(unsigned short *)(param_1->field_0xc + 0x26) = param_1->field_0x26;
  }
  else if ((int)(param_4 << 0x1e) < 0) {
    temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))
                      (param_1->field_0x20,temp_v4,temp_v2,1,0,0);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  else {
    temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))
                      (param_1->field_0x20,temp_v4,temp_v2,1,0,0);
    if (temp_v0 == 0) {
      temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x20 + 0xc))(param_1->field_0x20,0,temp_v2,1,0,0)
      ;
      if (temp_v0 == 0) {
        return 0;
      }
    }
  }
  piVar2 = (int *)param_1->field_0xc;
  if ((int)(param_4 * 0x40000000) < 0) {
    temp_v0 = (**(romwright_code **)(*piVar2 + 0x14))(piVar2,temp_v5,0);
  }
  else {
    temp_v0 = (**(romwright_code **)(*piVar2 + 0x14))(piVar2,temp_v5,0);
    if (temp_v0 != 0) {
      param_1->field_0x1c = 1;
      return 1;
    }
    temp_v0 = (**(romwright_code **)(*param_1->field_0xc + 0x14))(param_1->field_0xc,0);
  }
  if (temp_v0 == 0) {
    return 0;
  }
  param_1->field_0x1c = 1;
  return 1;
}

} /* extern "C" */
