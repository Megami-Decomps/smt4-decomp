/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126830` (_code @ 0x126830, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b080c(...);

typedef struct fn_00126830_arg0 fn_00126830_arg0;
struct fn_00126830_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x18];
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0xa];
    undefined2 field_0x46; /* +0x46 */
    ushort field_0x48; /* +0x48 */
    unsigned char pad_0x4a[0x2];
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x8];
    float field_0x58; /* +0x58 */
    undefined1 field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x43];
    undefined4 field_0xa0; /* +0xa0 */
    void *field_0xa4; /* +0xa4 */
    unsigned char pad_0xa8[0x8];
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_002b080c. */


void FUN_00126830(fn_00126830_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b080c(param_1,0x12,param_2);
  return;
}

} /* extern "C" */
