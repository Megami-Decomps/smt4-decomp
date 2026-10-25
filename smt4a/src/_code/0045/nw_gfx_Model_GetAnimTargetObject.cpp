/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_GetAnimTargetObject` (_code @ 0x4545e8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004545e8_arg0 fn_004545e8_arg0;
struct fn_004545e8_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x164];
    int field_0x170; /* +0x170 */
    int field_0x174; /* +0x174 */
    unsigned char pad_0x178[0x4];
    int field_0x17c; /* +0x17c */
    int field_0x180; /* +0x180 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int libc_strlen(int);
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


int nw_gfx_Model_GetAnimTargetObject(fn_004545e8_arg0 *param_1,int *param_2)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r5;
  int temp_v4;
  
  temp_v0 = *param_2;
  temp_v2 = *(int *)(temp_v0 + 0x10);
  if (temp_v2 == 6) {
    return (int)param_1;
  }
  if (temp_v2 == 7) {
    temp_v2 = param_1->field_0x170;
    if (temp_v2 == param_1->field_0x174) {
      piVar2 = (int *)((int)param_1->field_0x8 + 0xb8);
      temp_v2 = *piVar2;
      if (temp_v2 != 0) {
        temp_v2 = (int)piVar2 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
    }
    piVar2 = (int *)(temp_v2 + *(int *)(temp_v0 + 0x1c) * 4);
    temp_v0 = *piVar2;
    if (temp_v0 == 0) {
      return 0;
    }
    return temp_v0 + (int)piVar2;
  }
  if (temp_v2 != 8) {
    return 0;
  }
  temp_v2 = *(int *)(temp_v0 + 0x1c);
  if (temp_v2 != 0) {
    unaff_r5 = temp_v2 + temp_v0 + 0x1c;
  }
  if (temp_v2 == 0) {
    unaff_r5 = 0;
  }
  piVar2 = (int *)((int)param_1->field_0x8 + 0xd0);
  temp_v4 = *piVar2;
  if (temp_v4 != 0) {
    temp_v4 = (int)piVar2 + temp_v4;
  }
  else {
    temp_v4 = 0;
  }
  if (temp_v4 != 0 && unaff_r5 != 0) {
    temp_v1 = libc_strlen(unaff_r5);
    temp_v0 = nw_ut_ResDicPatricia_Get(&temp_v4,unaff_r5,temp_v1);
    if (temp_v0 != 0) {
      temp_v0 = ((temp_v0 - temp_v4) - 0x1c) >> 4;
    }
    else {
      temp_v0 = -1;
    }
  }
  else {
    temp_v0 = -1;
  }
  if (param_1->field_0x17c != param_1->field_0x180) {
    temp_v2 = param_1->field_0x17c + temp_v0 * 8;
  }
  else {
    piVar2 = (int *)((int)param_1->field_0x8 + 0xd0);
    temp_v3 = *piVar2;
    if (temp_v3 != 0) {
      temp_v3 = (int)piVar2 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    temp_v2 = 0;
    if (temp_v3 != 0) {
      piVar2 = (int *)(temp_v3 + temp_v0 * 0x10 + 0x28);
      temp_v0 = *piVar2;
      temp_v2 = 0;
      if (temp_v0 != 0) {
        temp_v2 = (int)piVar2 + temp_v0;
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
