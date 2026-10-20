/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d184` (_code @ 0x17d184, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

typedef struct fn_0017d184_arg0 fn_0017d184_arg0;
struct fn_0017d184_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
};

/* Supplied declaration required: sysMemClear. */


void FUN_0017d184(fn_0017d184_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1 != (fn_0017d184_arg0 *)0x0) &&
     ((param_1->field_0x4 != 0 || (param_1->field_0x18 != 0)))) {
    sysMemClear(param_1->field_0x18,param_1->field_0x20 * 0x1c);
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x30 = 0;
  }
  return;
}

} /* extern "C" */
