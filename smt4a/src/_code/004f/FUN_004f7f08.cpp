/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7f08` (_code @ 0x4f7f08, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiFreeCallback(void);

typedef struct fn_004f7f08_arg0 fn_004f7f08_arg0;
struct fn_004f7f08_arg0 {
    unsigned char pad_0x0[0x339c];
    uint field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0xe];
    undefined2 field_0x33ae; /* +0x33ae */
    undefined2 field_0x33b0; /* +0x33b0 */
    undefined2 field_0x33b2; /* +0x33b2 */
    undefined1 field_0x33b4; /* +0x33b4 */
    undefined1 field_0x33b5; /* +0x33b5 */
    undefined2 field_0x33b6; /* +0x33b6 */
    undefined2 field_0x33b8; /* +0x33b8 */
    undefined2 field_0x33ba; /* +0x33ba */
    unsigned char pad_0x33bc[0x4];
    void *field_0x33c0; /* +0x33c0 */
    undefined4 field_0x33c4; /* +0x33c4 */
    undefined4 field_0x33c8; /* +0x33c8 */
    int field_0x33cc; /* +0x33cc */
    int field_0x33d0; /* +0x33d0 */
    undefined4 field_0x33d4; /* +0x33d4 */
    undefined4 field_0x33d8; /* +0x33d8 */
    undefined4 field_0x33dc; /* +0x33dc */
    undefined4 field_0x33e0; /* +0x33e0 */
};

typedef int romwright_code(...);
/* Supplied declaration required: uiFreeCallback. */


void FUN_004f7f08(fn_004f7f08_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1->field_0x33ae = 0;
  param_1->field_0x33b0 = 0;
  param_1->field_0x33b2 = 0;
  param_1->field_0x33b4 = 0;
  param_1->field_0x33b5 = 0;
  param_1->field_0x33ba = 0;
  param_1->field_0x33b6 = 0;
  param_1->field_0x33b8 = 0;
  param_1->field_0x33c4 = 0;
  param_1->field_0x33c8 = 0;
  param_1->field_0x33d8 = 0;
  param_1->field_0x33d4 = 0;
  param_1->field_0x33e0 = 0;
  param_1->field_0x33dc = 0;
  param_1->field_0x339c = param_1->field_0x339c & 0xffff8fff;
  if (param_1->field_0x33c0 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x33c0 + 4))();
    param_1->field_0x33c0 = (void *)0x0;
  }
  if (param_1->field_0x33cc != 0) {
    uiFreeCallback();
    param_1->field_0x33cc = 0;
  }
  if (param_1->field_0x33d0 != 0) {
    uiFreeCallback();
    param_1->field_0x33d0 = 0;
  }
  return;
}

} /* extern "C" */
