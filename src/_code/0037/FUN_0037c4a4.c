/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c4a4` (_code @ 0x37c4a4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037c4a4_arg0 fn_0037c4a4_arg0;
struct fn_0037c4a4_arg0 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x4];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined1 field_0x4c; /* +0x4c */
    undefined1 field_0x4d; /* +0x4d */
    unsigned char pad_0x4e[0xa42];
    undefined1 field_0xa90; /* +0xa90 */
    unsigned char pad_0xa91[0x193];
    undefined4 field_0xc24; /* +0xc24 */
    undefined4 field_0xc28; /* +0xc28 */
};

/* Supplied declaration required: FUN_0037c9e4. */


void FUN_0037c4a4(fn_0037c4a4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0037c9e4();
  param_1->field_0x34 = 0;
  param_1->field_0x38 = 0xffffffff;
  param_1->field_0x3c = 0;
  param_1->field_0x44 = 0;
  param_1->field_0x48 = 0;
  param_1->field_0x4c = 0;
  param_1->field_0x4d = 0;
  param_1->field_0xa90 = 3;
  param_1->field_0xc24 = 0;
  param_1->field_0xc28 = 0;
  return;
}
