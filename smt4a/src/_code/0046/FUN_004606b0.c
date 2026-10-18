/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004606b0` (_code @ 0x4606b0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004606b0_arg0 fn_004606b0_arg0;
struct fn_004606b0_arg0 {
    unsigned char pad_0x0[0x118];
    undefined4 field_0x118; /* +0x118 */
    unsigned char pad_0x11c[0x4];
    undefined1 field_0x120; /* +0x120 */
    undefined1 field_0x121; /* +0x121 */
};

/* Supplied declaration required: FUN_0045f268. */


void FUN_004606b0(fn_004606b0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0045f268();
  param_1->field_0x118 = 0;
  param_1->field_0x120 = 1;
  param_1->field_0x121 = 0;
  return;
}
