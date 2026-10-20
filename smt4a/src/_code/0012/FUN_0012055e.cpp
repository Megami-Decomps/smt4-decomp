#include "romwright_types.h"

extern "C" {

typedef struct fn_0012055e_arg0 fn_0012055e_arg0;
typedef struct fn_0012055e_arg1 fn_0012055e_arg1;
struct fn_0012055e_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x1];
    undefined2 field_0x6; /* +0x6 */
    undefined1 field_0x8; /* +0x8 */
};
struct fn_0012055e_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x1];
    ushort field_0x6; /* +0x6 */
    byte field_0x8; /* +0x8 */
};


void FUN_0012055e(fn_0012055e_arg0 *param_1,fn_0012055e_arg1 *param_2)

{
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x6 = param_2->field_0x6;
  param_1->field_0x8 = param_2->field_0x8;
  return;
}

} /* extern "C" */
