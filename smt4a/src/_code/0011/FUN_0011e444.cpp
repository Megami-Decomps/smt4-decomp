/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e444` (_code @ 0x11e444, 0x10e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110b58(int *, unsigned int);
int FUN_00114d60(int *, unsigned int, int, int);
int FUN_0011c964(int *, unsigned int);
int FUN_002e9318(...);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea100(...);
int FUN_002f6be2(int, int *);
int FUN_002f6bf0(int);
int FUN_002fbd38(...);

typedef struct fn_0011e444_arg0 fn_0011e444_arg0;
struct fn_0011e444_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    void *field_0x8; /* +0x8 */
    void *field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x7];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x8];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
};

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00110b58. */
/* Supplied declaration required: FUN_00114d60. */
/* Supplied declaration required: FUN_0011c964. */
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_002fbd38. */
extern int FUN_002fc046(void *);


void FUN_0011e444(fn_0011e444_arg0 *param_1,int *param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)&param_1->field_0x4);
  if (temp_v0 != 0) {
    param_2[2] = param_1->field_0x14;
    (**(romwright_code **)(*param_2 + 0x54))(param_2,*(unsigned int *)&param_1->field_0x18);
    for (temp_v0 = *(int *)param_1->field_0x8; *(int *)((int)param_1->field_0x8 + 4) != temp_v0;
        temp_v0 = temp_v0 + 0x18) {
      FUN_002f6be2(temp_v0 + 8,&temp_v2);
      FUN_002f6be2(temp_v0 + 0x10,&temp_v3);
      (**(romwright_code **)(*param_2 + 0xc))(temp_v4,param_2,temp_v2,temp_v3);
      FUN_002f6bf0(temp_v2);
      FUN_002f6bf0(temp_v3);
    }
    temp_v0 = FUN_002fc046(param_1->field_0x10);
    if (temp_v0 == 0) {
      (**(romwright_code **)(*param_2 + 0x50))
                (param_2,*(unsigned int *)param_1->field_0x10,
                 *(int *)((int)param_1->field_0x10 + 4) - *(int *)param_1->field_0x10);
    }
    for (temp_v0 = *(int *)param_1->field_0xc; *(int *)((int)param_1->field_0xc + 4) != temp_v0;
        temp_v0 = temp_v0 + 0x18) {
      piVar2 = param_2;
      FUN_002fbd38(param_2);
      temp_v1 = FUN_002ea100(temp_v4,piVar2);
      FUN_00114d60(&param_1->field_0x2c,temp_v1,temp_v0 + 8,temp_v0 + 0x10);
      FUN_002e9318(temp_v4);
    }
    piVar2 = param_2;
    FUN_002fbd38();
    temp_v1 = FUN_002ea100(&temp_v2,piVar2);
    FUN_0011c964(&param_1->field_0x2c,temp_v1);
    FUN_002e9318(&temp_v2);
    piVar2 = param_2;
    FUN_002fbd38(param_2);
    temp_v1 = FUN_002ea100(&temp_v2,piVar2);
    FUN_00110b58(&param_1->field_0x38,temp_v1);
    FUN_002e9318(&temp_v2);
    (**(romwright_code **)(*param_2 + 0x14))
              (param_2,(param_1->field_0x30 - param_1->field_0x2c) +
                       (param_1->field_0x3c - param_1->field_0x38) + param_1->field_0x20);
  }
  return;
}

} /* extern "C" */
