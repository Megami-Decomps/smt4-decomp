/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c064` (_code @ 0x39c064, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039c57c(void);

typedef struct fn_0039c064_arg0 fn_0039c064_arg0;
struct fn_0039c064_arg0 {
    unsigned char pad_0x0[0x10];
    uint field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x5a78];
    undefined1 field_0x5a8c; /* +0x5a8c */
    undefined1 field_0x5a8d; /* +0x5a8d */
};

/* Supplied declaration required: FUN_0039c57c. */


void FUN_0039c064(fn_0039c064_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0039c57c();
  param_1->field_0x10 = param_1->field_0x10 & 0xffffffef;
  param_1->field_0x5a8c = 1;
  param_1->field_0x5a8d = 1;
  return;
}

} /* extern "C" */
