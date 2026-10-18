/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d88a0` (_code @ 0x3d88a0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d88a0_arg0 fn_003d88a0_arg0;
struct fn_003d88a0_arg0 {
    unsigned char pad_0x0[0x634];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0x50];
    undefined4 field_0x688; /* +0x688 */
    undefined4 field_0x68c; /* +0x68c */
    undefined4 field_0x690; /* +0x690 */
    undefined4 field_0x694; /* +0x694 */
};


void FUN_003d88a0(fn_003d88a0_arg0 *param_1)

{
  param_1->field_0x690 = 0;
  param_1->field_0x68c = 0;
  param_1->field_0x688 = 0;
  param_1->field_0x694 = 0;
  param_1->field_0x634 = param_1->field_0x634 | 0x20;
  return;
}
