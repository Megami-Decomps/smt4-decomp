/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b86c` (_code @ 0x48b86c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048c09c(void);

typedef struct fn_0048b86c_arg0 fn_0048b86c_arg0;
struct fn_0048b86c_arg0 {
    unsigned char pad_0x0[0x10];
    uint field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x7b7c];
    undefined1 field_0x7b90; /* +0x7b90 */
    undefined1 field_0x7b91; /* +0x7b91 */
};

/* Supplied declaration required: FUN_0048c09c. */


void FUN_0048b86c(fn_0048b86c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0048c09c();
  param_1->field_0x10 = param_1->field_0x10 & 0xffffffef;
  param_1->field_0x7b90 = 1;
  param_1->field_0x7b91 = 1;
  return;
}

} /* extern "C" */
