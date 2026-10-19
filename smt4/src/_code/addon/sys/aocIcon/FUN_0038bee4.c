/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038bee4` (_code @ 0x38bee4, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0038bee4_arg0 fn_0038bee4_arg0;
struct fn_0038bee4_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xc];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x4];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x10];
    undefined4 field_0x44; /* +0x44 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_001dba54. */
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: FUN_002bd75c. */
/* Supplied declaration required: FUN_002bf5c0. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_0038bee4(fn_0038bee4_arg0 *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0x10000;
  FUN_002bf5c0(0x10000,0x100,0,0x2000,0x80,1);
  *(unsigned int *)&param_1->field_0x4 = temp_v0;
  FUN_002c3944();
  temp_v2 = 0;
  do {
    nnnstdMemCpy(*(int *)&param_1->field_0x4 + temp_v2 * 0x400 + 0x800,param_2 + temp_v2 * 0x300,0x300);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  temp_v1 = 0;
  FUN_002bd75c();
  param_1->field_0x8 = temp_v1;
  FUN_001dba54();
  *(unsigned int *)(param_1->field_0x8 + 4) = 0xde1;
  *(unsigned int *)(param_1->field_0x8 + 8) = 0x10000;
  *(unsigned int *)(param_1->field_0x8 + 0xc) = 0x1000000;
  *(unsigned int *)(param_1->field_0x8 + 0x10) = 0;
  *(unsigned int *)(param_1->field_0x8 + 0x14) = 0x40;
  *(unsigned int *)(param_1->field_0x8 + 0x18) = 0x40;
  *(unsigned int *)(param_1->field_0x8 + 0x1c) = 0x6754;
  *(unsigned int *)(param_1->field_0x8 + 0x20) = 0x8363;
  *(unsigned int *)(param_1->field_0x8 + 0x24) = *(unsigned int *)&param_1->field_0x4;
  *(unsigned int *)(param_1->field_0x8 + 0x28) = 0x2000;
  FUN_002bd540(param_1->field_0x8);
  return;
}
