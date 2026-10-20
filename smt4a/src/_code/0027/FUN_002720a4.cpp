/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002720a4` (_code @ 0x2720a4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00271b64(...);
int FUN_0032246c(...);

typedef struct fn_002720a4_arg0 fn_002720a4_arg0;
typedef struct fn_002720a4_arg0_p4c fn_002720a4_arg0_p4c;
struct fn_002720a4_arg0 {
    unsigned char pad_0x0[0xc];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2e];
    undefined4 *field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    fn_002720a4_arg0_p4c *field_0x4c; /* +0x4c */
};
struct fn_002720a4_arg0_p4c {
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

/* Supplied declaration required: FUN_00271b64. */
/* Supplied declaration required: FUN_0032246c. */


void FUN_002720a4(fn_002720a4_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0x4c != (fn_002720a4_arg0_p4c *)0x0) {
    FUN_00271b64();
    FUN_0032246c(param_1);
    return;
  }
  return;
}

} /* extern "C" */
