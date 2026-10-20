/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4a90` (_code @ 0x1b4a90, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x002e6dd8(...);

typedef struct fn_001b4a90_arg0 fn_001b4a90_arg0;
struct fn_001b4a90_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x2];
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
};

/* Supplied declaration required: func_0x002e6dd8. */


void FUN_001b4a90(fn_001b4a90_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (param_3 & 0xff) | ((param_3 & 0xff) << 8);
  func_0x002e6dd8(param_1,param_2,temp_v0 | (temp_v0 << 0x10));
  return;
}

} /* extern "C" */
