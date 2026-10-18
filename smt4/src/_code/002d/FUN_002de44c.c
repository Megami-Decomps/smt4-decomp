/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de44c` (_code @ 0x2de44c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002de44c_arg0 fn_002de44c_arg0;
struct fn_002de44c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x3e];
    void *field_0x4c; /* +0x4c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00267d84. */
/* Supplied declaration required: FUN_0026933c. */
/* Supplied declaration required: FUN_002c74ac. */


void FUN_002de44c(fn_002de44c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1->field_0x4c != (void *)0x0) {
    FUN_0026933c();
    FUN_002c74ac(param_1);
  }
  FUN_00267d84(param_1);
  return;
}
