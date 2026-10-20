/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d1e4` (_code @ 0x17d1e4, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(...);

typedef struct fn_0017d1e4_arg0 fn_0017d1e4_arg0;
struct fn_0017d1e4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

/* Supplied declaration required: FUN_002e6354. */


void FUN_0017d1e4(fn_0017d1e4_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (fn_0017d1e4_arg0 *)0x0) {
    FUN_002e6354(param_1,0x44);
    param_1->field_0x2c = 0x300;
    param_1->field_0xc = 0;
    param_1->field_0x8 = param_2;
    param_1->field_0x4 = param_3;
    param_1->field_0x20 = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x18 = param_5;
    param_1->field_0x1c = param_4;
    param_1->field_0x30 = 0;
    FUN_002e6354(param_5,param_4 * 0x1c);
    return;
  }
  return;
}

} /* extern "C" */
