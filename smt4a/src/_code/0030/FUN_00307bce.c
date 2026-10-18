/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307bce` (_code @ 0x307bce, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00307bce_arg0 fn_00307bce_arg0;
typedef struct fn_00307bce_arg1 fn_00307bce_arg1;
struct fn_00307bce_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
};
struct fn_00307bce_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
};


void FUN_00307bce(fn_00307bce_arg0 *param_1,fn_00307bce_arg1 *param_2)

{
  unsigned int temp_v0;
  
  param_1->field_0x4 = param_2->field_0x4;
  temp_v0 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x8 = temp_v0;
  temp_v0 = param_2->field_0x10;
  param_1->field_0x14 = param_2->field_0x14;
  param_1->field_0x10 = temp_v0;
  return;
}
