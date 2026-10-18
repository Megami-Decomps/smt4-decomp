/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec8a8` (_code @ 0x2ec8a8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ec8a8_arg0 fn_002ec8a8_arg0;
typedef struct fn_002ec8a8_arg1 fn_002ec8a8_arg1;
struct fn_002ec8a8_arg0 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
    uint field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
};
struct fn_002ec8a8_arg1 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    int field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    int field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
};

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002ed294. */
/* Supplied declaration required: FUN_0031011e. */


int FUN_002ec8a8(fn_002ec8a8_arg0 *param_1,fn_002ec8a8_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 != (fn_002ec8a8_arg0 *)param_2) {
    temp_v0 = param_2->field_0x10 + param_2->field_0x18;
    param_1->field_0x10 = 0;
    param_1->field_0x18 = 0;
    if (param_1->field_0x14 < temp_v0) {
      FUN_0031011e(param_1,temp_v0);
    }
    FUN_002e74c4(param_1,*(unsigned int *)&param_2->field_0xc,temp_v0,0xffffffff);
    FUN_002ed294(param_1,param_2->field_0x18);
    param_1->field_0x1c = (param_2->field_0x1c & 0xfb) | (param_1->field_0x1c & 4);
    param_1->field_0x1d = param_2->field_0x1d;
  }
  return (int)param_1;
}
