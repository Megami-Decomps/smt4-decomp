/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_Sound3DParam_Sound3DParam_sub_object` (_code @ 0x45bc6c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0045bc6c_arg0 fn_0045bc6c_arg0;
struct fn_0045bc6c_arg0 {
    unsigned char pad_0x0[0x18];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined1 field_0x28; /* +0x28 */
    undefined1 field_0x29; /* +0x29 */
};


void nw_snd_Sound3DParam_Sound3DParam_sub_object(fn_0045bc6c_arg0 *param_1)

{
  param_1->field_0x18 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x20 = 0;
  param_1->field_0x24 = 0x3f000000;
  param_1->field_0x28 = 1;
  param_1->field_0x29 = 0;
  return;
}

} /* extern "C" */
