/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002954bc` (_code @ 0x2954bc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002954bc_arg0 fn_002954bc_arg0;
struct fn_002954bc_arg0 {
    unsigned char pad_0x0[0xe];
    ushort field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    unsigned char pad_0x12[0x18];
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
};


unsigned char FUN_002954bc(fn_002954bc_arg0 *param_1)

{
  if (param_1 != (fn_002954bc_arg0 *)0x0) {
    param_1->field_0x2a = param_1->field_0xe;
    param_1->field_0x2c = param_1->field_0x10;
  }
  return param_1 != (fn_002954bc_arg0 *)0x0;
}
