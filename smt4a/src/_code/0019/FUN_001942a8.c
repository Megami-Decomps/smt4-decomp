/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001942a8` (_code @ 0x1942a8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001942a8_arg0 fn_001942a8_arg0;
struct fn_001942a8_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    int field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    int field_0x1c; /* +0x1c */
};

/* Supplied declaration required: FUN_001a063c. */


void FUN_001942a8(fn_001942a8_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a063c(param_2,*(unsigned int *)&param_1->field_0x8,param_1->field_0xc << 2);
  if (*(int *)&param_1->field_0x14 * -0x34 != 0) {
    FUN_001a063c(param_2,*(unsigned int *)((int)param_1->field_0x10 + 0x2c),
                 *(int *)((int)param_1->field_0x10 + 0x30) << 2);
  }
  FUN_001a063c(param_2,*(unsigned int *)&param_1->field_0x18,param_1->field_0x1c << 2);
  return;
}
