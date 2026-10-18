/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f8f8` (_code @ 0x34f8f8, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034f8f8_arg0 fn_0034f8f8_arg0;
struct fn_0034f8f8_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    undefined4 field_0x20; /* +0x20 */
    undefined1 field_0x24; /* +0x24 */
    undefined1 field_0x25; /* +0x25 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0034ed9c. */
/* Supplied declaration required: FUN_0034ee20. */


void FUN_0034f8f8(fn_0034f8f8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0xc != -1) {
    FUN_0034ee20();
    param_1->field_0x24 = 0;
    param_1->field_0x18 = 0;
    *(unsigned int *)&param_1->field_0x1c = 0;
    param_1->field_0x25 = 0;
    param_1->field_0x20 = 0;
    if (param_1->field_0xc != -1) {
      FUN_0034ed9c();
      param_1->field_0xc = -1;
      (**(romwright_code **)(*(int *)param_1->field_0x4 + 4))(param_1->field_0x4,param_1->field_0x10);
      param_1->field_0x10 = 0;
    }
  }
  param_1->field_0x4 = (void *)0x0;
  param_1->field_0x8 = 0;
  return;
}
