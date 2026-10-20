#include "romwright_types.h"

extern "C" {

typedef struct fn_0011eec4_arg0 fn_0011eec4_arg0;
typedef struct fn_0011eec4_arg1 fn_0011eec4_arg1;
struct fn_0011eec4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined2 field_0x18; /* +0x18 */
    unsigned char pad_0x1a[0x2];
    undefined4 field_0x1c; /* +0x1c */
};
struct fn_0011eec4_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    ushort field_0x18; /* +0x18 */
    unsigned char pad_0x1a[0x2];
    undefined4 field_0x1c; /* +0x1c */
};


void FUN_0011eec4(fn_0011eec4_arg0 *param_1,fn_0011eec4_arg1 *param_2)

{
  unsigned int temp_v0;
  
  param_1->field_0x4 = param_2->field_0x4;
  temp_v0 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x8 = temp_v0;
  param_1->field_0x10 = param_2->field_0x10;
  param_1->field_0x14 = param_2->field_0x14;
  param_1->field_0x18 = param_2->field_0x18;
  param_1->field_0x1c = param_2->field_0x1c;
  return;
}

} /* extern "C" */
