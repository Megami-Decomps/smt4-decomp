/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efbb8` (_code @ 0x2efbb8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

typedef struct fn_002efbb8_arg1 fn_002efbb8_arg1;
struct fn_002efbb8_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x20];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
};

/* Supplied declaration required: rt_memcpy_w. */


void FUN_002efbb8(int param_1,fn_002efbb8_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy_w(param_1 * 0x148 + 0x5c602c,param_2,0x90);
  return;
}

} /* extern "C" */
