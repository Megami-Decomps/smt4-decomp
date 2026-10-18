/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289810` (_code @ 0x289810, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00289810_arg0 fn_00289810_arg0;
struct fn_00289810_arg0 {
    unsigned char pad_0x0[0x8];
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00289810(fn_00289810_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1->field_0xc != 0) {
    FUN_002c4360();
    param_1->field_0xc = 0;
  }
  if (param_1->field_0x10 != 0) {
    FUN_002c4360();
    param_1->field_0x10 = 0;
  }
  if (param_1->field_0x14 != 0) {
    FUN_002a755c();
    param_1->field_0x14 = 0;
  }
  if (param_1->field_0x8 != 0) {
    FUN_00291a5c();
    return;
  }
  return;
}
