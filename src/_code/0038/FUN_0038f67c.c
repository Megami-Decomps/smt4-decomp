/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f67c` (_code @ 0x38f67c, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0038f67c_arg0 fn_0038f67c_arg0;
struct fn_0038f67c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1fc];
    void *field_0x208; /* +0x208 */
    unsigned char pad_0x20c[0x144];
    void *field_0x350; /* +0x350 */
    unsigned char field_0x354; /* +0x354 */
    unsigned char pad_0x355[0x3];
    int field_0x358; /* +0x358 */
};

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00234278. */
/* Supplied declaration required: FUN_0023554c. */
/* Supplied declaration required: FUN_00289984. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002baca8. */
extern unsigned int *FUN_002bad80(unsigned char *, unsigned int);


void FUN_0038f67c(fn_0038f67c_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  void *pvVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v7;
  unsigned char temp_v8 [12];
  
  if (param_1->field_0x8 != 0) {
    if (param_1->field_0x8 != 1) {
      return;
    }
    if ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) != 0 || (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) != 0) {
      return;
    }
    FUN_002a755c(param_1->field_0x358);
    param_1->field_0x358 = 0;
    pvVar1 = param_1->field_0x350;
    FUN_002972f8(pvVar1,*(unsigned int *)&param_1->field_0x354);
    param_1->field_0x358 = (int)pvVar1;
    *(unsigned int *)((int)pvVar1 + 0x108) = 2;
    FUN_00289984();
    FUN_0023554c();
    FUN_002b9008();
    FUN_002b9008();
    piVar2 = param_1->field_0x208;
    param_1->field_0x4 = 3;
    param_1->field_0x8 = 0;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v0 & 0xffffff8f;
    if ((temp_v0 & 0x10) == 0) {
      FUN_00234278(&temp_v1);
      (*(unsigned char *)((unsigned char *)&temp_v1 + 0)) = 1;
      temp_v4 = 0;
      puVar3 = (unsigned int *)FUN_002bad80(temp_v8,0);
      temp_v2 = *puVar3;
      temp_v3 = puVar3[1];
      temp_v1 = romwright_piece_3_1(temp_v1._1_3_,200);
      temp_v7 = temp_v5;
      temp_v6 = temp_v1;
      uStack_28 = temp_v4;
      uStack_30 = temp_v2;
      uStack_2c = temp_v3;
      FUN_002baca8(DAT_00432fc8,&temp_v6);
      param_1->field_0x8 = 1;
      return;
    }
    piVar2 = param_1->field_0x208;
    param_1->field_0x4 = 3;
    param_1->field_0x8 = 0;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  (**(romwright_code **)(*piVar2 + 4))();
  param_1->field_0x208 = (void *)0x0;
  return;
}
