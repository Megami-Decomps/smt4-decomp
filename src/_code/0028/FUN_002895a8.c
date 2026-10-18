/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002895a8` (_code @ 0x2895a8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002895a8_arg0 fn_002895a8_arg0;
struct fn_002895a8_arg0 {
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

/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002895a8(fn_002895a8_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1->field_0xc != 0) {
    FUN_002c415c();
    param_1->field_0xc = 0;
  }
  if (param_1->field_0x10 != 0) {
    FUN_002c415c();
    param_1->field_0x10 = 0;
  }
  if (param_1->field_0x14 != 0) {
    FUN_002a7218();
    param_1->field_0x14 = 0;
  }
  if (param_1->field_0x8 != 0) {
    FUN_002917b8();
    return;
  }
  return;
}
