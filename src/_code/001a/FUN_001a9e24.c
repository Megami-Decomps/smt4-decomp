/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9e24` (_code @ 0x1a9e24, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001a9e24_arg0 fn_001a9e24_arg0;
struct fn_001a9e24_arg0 {
    unsigned char pad_0x0[0x24];
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    uint field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x14];
    int field_0x44; /* +0x44 */
};

/* Supplied declaration required: FUN_002c4360. */


void FUN_001a9e24(fn_001a9e24_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1->field_0x24 != 0) && ((param_1->field_0x2c & 0x10) == 0)) {
    FUN_002c4360();
    param_1->field_0x24 = 0;
  }
  if (param_1->field_0x44 != 0) {
    FUN_002c4360();
    param_1->field_0x44 = 0;
  }
  return;
}
