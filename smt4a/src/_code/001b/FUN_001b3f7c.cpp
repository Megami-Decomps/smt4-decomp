/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3f7c` (_code @ 0x1b3f7c, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);

typedef struct fn_001b3f7c_arg0 fn_001b3f7c_arg0;
struct fn_001b3f7c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined2 field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    undefined1 field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x3];
    int field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined2 field_0x58; /* +0x58 */
    short field_0x5a; /* +0x5a */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001641c4. */


void FUN_001b3f7c(fn_001b3f7c_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1->field_0x4 = 0;
  param_1->field_0x14 = 0;
  param_1->field_0x10 = 0;
  param_1->field_0xc = 0;
  param_1->field_0x8 = 0;
  param_1->field_0x24 = 0;
  param_1->field_0x20 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x18 = 0;
  param_1->field_0x34 = 0;
  param_1->field_0x30 = 0;
  param_1->field_0x2c = 0;
  param_1->field_0x28 = 0;
  param_1->field_0x38 = *(unsigned int *)(param_2 + 4);
  param_1->field_0x3c = *(unsigned int *)(param_2 + 8);
  param_1->field_0x50 = param_2 + 0x10;
  param_1->field_0x4c = 2;
  if (0 < param_1->field_0x5a) {
    temp_v0 = 0;
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1->field_0x5a);
  }
  param_1->field_0x5a = 0;
  param_1->field_0x54 = 0xffffffff;
  param_1->field_0x58 = 0xffff;
  return;
}

} /* extern "C" */
