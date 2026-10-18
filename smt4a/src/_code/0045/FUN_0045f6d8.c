/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f6d8` (_code @ 0x45f6d8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0045f6d8_arg0 fn_0045f6d8_arg0;
struct fn_0045f6d8_arg0 {
    unsigned char pad_0x0[0x70];
    int field_0x70; /* +0x70 */
    int field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x18];
    int field_0x90; /* +0x90 */
    int field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x28];
    int field_0xc0; /* +0xc0 */
    int field_0xc4; /* +0xc4 */
};


void FUN_0045f6d8(fn_0045f6d8_arg0 *param_1)

{
  if (param_1->field_0x74 < param_1->field_0x70) {
    param_1->field_0x74 = param_1->field_0x74 + 1;
  }
  if (param_1->field_0x94 < param_1->field_0x90) {
    param_1->field_0x94 = param_1->field_0x94 + 1;
  }
  if (param_1->field_0xc4 < param_1->field_0xc0) {
    param_1->field_0xc4 = param_1->field_0xc4 + 1;
  }
  return;
}
