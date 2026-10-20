/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e552` (_code @ 0x11e552, 0x102 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int);
int FUN_002fc046(...);
int FUN_00310d0a(int *, int, int);
int FUN_00310d38(int, int, unsigned int);
int rt_memcpy(unsigned int, unsigned int, unsigned int);

typedef struct fn_0011e552_arg0 fn_0011e552_arg0;
struct fn_0011e552_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x17];
    int field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x4];
    byte field_0x44; /* +0x44 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
extern int *FUN_002ed2a2(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002fc046. */
/* Supplied declaration required: FUN_00310d0a. */
/* Supplied declaration required: FUN_00310d38. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0011e552(fn_0011e552_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char *param_5)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  fn_0011e552_arg0 *pfStack_24;
  unsigned int uStack_20;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  puVar3 = &temp_v3;
  pfStack_24 = param_1;
  uStack_20 = param_2;
  temp_v4 = param_3;
  temp_v5 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)&param_1->field_0x4);
  if (temp_v0 == 0) {
    return;
  }
  if (param_1->field_0x44 != 0) {
    temp_v3 = param_1->field_0x3c - param_1->field_0x38;
    piVar2 = (int *)FUN_002ed2a2(&temp_v3,&temp_v5);
    temp_v1 = *piVar2;
    FUN_00310d38(param_1->field_0x38,param_1->field_0x38 + temp_v1,temp_v4);
    FUN_00310d0a(&param_1->field_0x38,param_1->field_0x38,param_1->field_0x38 + temp_v1);
    temp_v1 = FUN_002fc046(&param_1->field_0x38);
    if (temp_v1 == 0) {
      return;
    }
    if (param_1->field_0x28 == param_1->field_0x20) {
      *param_5 = 1;
      return;
    }
  }
  else {
    temp_v1 = FUN_002fc046();
    if (temp_v1 == 0) {
      temp_v3 = param_1->field_0x30 - param_1->field_0x2c;
      piVar2 = (int *)FUN_002ed2a2(&temp_v3,&temp_v5);
      temp_v0 = *piVar2;
      FUN_00310d38(param_1->field_0x2c,param_1->field_0x2c + temp_v0,temp_v4);
      FUN_00310d0a(&param_1->field_0x2c,param_1->field_0x2c,param_1->field_0x2c + temp_v0);
      return;
    }
    if (param_1->field_0x1c != 0) {
      temp_v3 = param_1->field_0x20 - param_1->field_0x28;
      if (temp_v5 < temp_v3) {
        puVar3 = &temp_v5;
      }
      temp_v2 = *puVar3;
      rt_memcpy(temp_v4,param_1->field_0x1c + param_1->field_0x28,temp_v2);
      if (param_1->field_0x28 + temp_v2 == param_1->field_0x20) {
        param_1->field_0x44 = 1;
      }
    }
    else {
      temp_v2 = (**(romwright_code **)(**(int **)&param_1->field_0x24 + 8))
                        (*(int **)&param_1->field_0x24,temp_v4,temp_v5,&param_1->field_0x44);
    }
    temp_v2 = param_1->field_0x28 + temp_v2;
    param_1->field_0x28 = temp_v2;
    if (temp_v2 <= (unsigned int)param_1->field_0x20) {
      return;
    }
  }
  FUN_002e9f00(temp_v0,4);
  return;
}

} /* extern "C" */
