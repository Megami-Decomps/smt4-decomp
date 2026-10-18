/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2420` (_code @ 0x1d2420, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001d2420_arg0 fn_001d2420_arg0;
typedef struct fn_001d2420_arg0_p4c fn_001d2420_arg0_p4c;
struct fn_001d2420_arg0 {
    unsigned char pad_0x0[0xc];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2e];
    undefined4 *field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    fn_001d2420_arg0_p4c *field_0x4c; /* +0x4c */
};
struct fn_001d2420_arg0_p4c {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0026933c. */
/* Supplied declaration required: FUN_002c74ac. */


void FUN_001d2420(fn_001d2420_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0x4c != (fn_001d2420_arg0_p4c *)0x0) {
    FUN_0026933c();
    FUN_002c74ac(param_1);
    return;
  }
  return;
}
