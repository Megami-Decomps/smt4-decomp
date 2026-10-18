/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aeafc` (_code @ 0x1aeafc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001aeafc_arg0 fn_001aeafc_arg0;
struct fn_001aeafc_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x20];
    undefined4 field_0x38; /* +0x38 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001b55f8. */


void FUN_001aeafc(fn_001aeafc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x4 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x4 + 4))();
    param_1->field_0x4 = (void *)0x0;
  }
  param_1->field_0x38 = 0;
  if (param_1->field_0x14 != (void *)0x0) {
    FUN_001b55f8();
    return;
  }
  return;
}
