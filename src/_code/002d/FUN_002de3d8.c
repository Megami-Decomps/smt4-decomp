/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de3d8` (_code @ 0x2de3d8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002de3d8_arg0 fn_002de3d8_arg0;
struct fn_002de3d8_arg0 {
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

/* Supplied declaration required: FUN_00267fb0. */
/* Supplied declaration required: FUN_0026959c. */
/* Supplied declaration required: FUN_002c7420. */


void FUN_002de3d8(fn_002de3d8_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1->field_0x4c != (void *)0x0) {
    FUN_0026959c();
    FUN_002c7420(param_1);
  }
  FUN_00267fb0(param_1);
  return;
}
