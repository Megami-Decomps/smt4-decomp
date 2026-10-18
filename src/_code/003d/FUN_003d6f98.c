/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6f98` (_code @ 0x3d6f98, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d6f98_arg0 fn_003d6f98_arg0;
struct fn_003d6f98_arg0 {
    unsigned char pad_0x0[0x634];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0x100];
    undefined4 field_0x738; /* +0x738 */
    undefined4 field_0x73c; /* +0x73c */
    undefined4 field_0x740; /* +0x740 */
    unsigned char pad_0x744[0x20];
    undefined4 field_0x764; /* +0x764 */
    undefined4 field_0x768; /* +0x768 */
    undefined4 field_0x76c; /* +0x76c */
};


void FUN_003d6f98(fn_003d6f98_arg0 *param_1)

{
  param_1->field_0x740 = 0;
  param_1->field_0x73c = 0;
  param_1->field_0x738 = 0;
  param_1->field_0x634 = param_1->field_0x634 & 0xff7fffff;
  param_1->field_0x76c = 0;
  param_1->field_0x768 = 0;
  param_1->field_0x764 = 0;
  return;
}
