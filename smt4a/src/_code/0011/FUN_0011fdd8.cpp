/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fdd8` (_code @ 0x11fdd8, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0011fdd8_arg0 fn_0011fdd8_arg0;
typedef struct fn_0011fdd8_arg1 fn_0011fdd8_arg1;
struct fn_0011fdd8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined2 field_0xc; /* +0xc */
};
struct fn_0011fdd8_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
};


void FUN_0011fdd8(fn_0011fdd8_arg0 *param_1,fn_0011fdd8_arg1 *param_2)

{
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x8 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  return;
}

} /* extern "C" */
