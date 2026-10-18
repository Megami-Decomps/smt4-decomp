/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fab40` (_code @ 0x3fab40, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fab40_arg0 fn_003fab40_arg0;
struct fn_003fab40_arg0 {
    unsigned char pad_0x0[0x30];
    int field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
    int field_0x44; /* +0x44 */
    int field_0x48; /* +0x48 */
};

typedef int romwright_code();
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_003f2f1c. */
/* Supplied declaration required: FUN_00414a24. */


int FUN_003fab40(fn_003fab40_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (param_1->field_0x30 != 0) {
    FUN_003f2f1c();
    FUN_002e3328();
    param_1->field_0x30 = 0;
  }
  if (param_1->field_0x34 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x34 + 4))();
    param_1->field_0x34 = (void *)0x0;
  }
  if (param_1->field_0x3c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x3c + 4))();
    param_1->field_0x3c = (void *)0x0;
  }
  if (param_1->field_0x40 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x40 + 4))();
    param_1->field_0x40 = (void *)0x0;
  }
  if (param_1->field_0x44 != 0) {
    FUN_00414a24();
    FUN_002e3328();
    param_1->field_0x44 = 0;
  }
  if (param_1->field_0x48 != 0) {
    FUN_0019a5a0();
    param_1->field_0x48 = 0;
  }
  return (int)param_1;
}
