/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235a08` (_code @ 0x235a08, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00235a08_arg0 fn_00235a08_arg0;
struct fn_00235a08_arg0 {
    unsigned char pad_0x0[0x90];
    byte field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x34];
    undefined1 field_0xc5; /* +0xc5 */
    unsigned char pad_0xc6[0x3];
    byte field_0xc9; /* +0xc9 */
    unsigned char pad_0xca[0x6a];
    int field_0x134; /* +0x134 */
};

/* Supplied declaration required: FUN_0037c314. */


void FUN_00235a08(fn_00235a08_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x90 != 4) {
    if ((param_1->field_0x134 != 0) && (param_1->field_0xc9 == 0)) {
      FUN_0037c314(param_1->field_0x134,1);
    }
    param_1->field_0x90 = 4;
  }
  param_1->field_0xc5 = 0;
  return;
}
