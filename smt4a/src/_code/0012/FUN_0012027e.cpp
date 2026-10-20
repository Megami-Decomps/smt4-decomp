#include "romwright_types.h"

extern "C" {

typedef struct fn_0012027e_arg0 fn_0012027e_arg0;
typedef struct fn_0012027e_arg1 fn_0012027e_arg1;
struct fn_0012027e_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined2 field_0x14; /* +0x14 */
    undefined2 field_0x16; /* +0x16 */
};
struct fn_0012027e_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
};


void FUN_0012027e(fn_0012027e_arg0 *param_1,fn_0012027e_arg1 *param_2)

{
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x8 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x10 = param_2->field_0x10;
  param_1->field_0x14 = param_2->field_0x14;
  param_1->field_0x16 = param_2->field_0x16;
  return;
}

} /* extern "C" */
