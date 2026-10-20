#include "romwright_types.h"

extern "C" {

typedef struct fn_001cb7c8_arg0 fn_001cb7c8_arg0;
typedef struct fn_001cb7c8_arg1 fn_001cb7c8_arg1;
struct fn_001cb7c8_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
};
struct fn_001cb7c8_arg1 {
    byte field_0x0; /* +0x0 */
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x1b];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
};

extern unsigned char FUN_001d07e0(unsigned char);


void FUN_001cb7c8(fn_001cb7c8_arg0 *param_1,fn_001cb7c8_arg1 *param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = FUN_001d07e0(param_2->field_0x0);
  param_1->field_0x0 = temp_v0;
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x8 = param_2->field_0x1 != 0;
  param_1->field_0xc = param_2->field_0x8;
  param_1->field_0x10 = param_2->field_0xc;
  param_1->field_0x14 = param_2->field_0x44;
  param_1->field_0x18 = param_2->field_0x48;
  param_1->field_0x1c = param_2->field_0x18;
  param_1->field_0x20 = param_2->field_0x14;
  param_1->field_0x28 = param_2->field_0x20;
  param_1->field_0x24 = param_2->field_0x24;
  return;
}

} /* extern "C" */
