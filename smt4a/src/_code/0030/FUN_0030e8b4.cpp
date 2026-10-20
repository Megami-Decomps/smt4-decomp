#include "romwright_types.h"

extern "C" {

typedef struct fn_0030e8b4_arg0 fn_0030e8b4_arg0;
typedef struct fn_0030e8b4_arg1 fn_0030e8b4_arg1;
struct fn_0030e8b4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    undefined1 field_0x10; /* +0x10 */
};
struct fn_0030e8b4_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    byte field_0x10; /* +0x10 */
};


void FUN_0030e8b4(fn_0030e8b4_arg0 *param_1,fn_0030e8b4_arg1 *param_2)

{
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x8 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x10 = param_2->field_0x10;
  return;
}

} /* extern "C" */
