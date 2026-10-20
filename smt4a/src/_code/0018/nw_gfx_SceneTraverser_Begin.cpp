#include "romwright_types.h"

extern "C" {

typedef struct fn_0018d028_arg1 fn_0018d028_arg1;
struct fn_0018d028_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x8];
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x8];
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x8];
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x8];
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    unsigned char pad_0x74[0x8];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x8];
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x8];
    undefined4 field_0x9c; /* +0x9c */
    undefined4 field_0xa0; /* +0xa0 */
    unsigned char pad_0xa4[0x8];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x8];
    undefined4 field_0xbc; /* +0xbc */
    undefined4 field_0xc0; /* +0xc0 */
    unsigned char pad_0xc4[0x8];
    undefined4 field_0xcc; /* +0xcc */
    undefined4 field_0xd0; /* +0xd0 */
    unsigned char pad_0xd4[0x8];
    undefined4 field_0xdc; /* +0xdc */
    undefined4 field_0xe0; /* +0xe0 */
    unsigned char pad_0xe4[0x8];
    undefined4 field_0xec; /* +0xec */
    undefined4 field_0xf0; /* +0xf0 */
};


void nw_gfx_SceneTraverser_Begin(int param_1,fn_0018d028_arg1 *param_2)

{
  *(fn_0018d028_arg1 **)(param_1 + 8) = param_2;
  param_2->field_0x10 = param_2->field_0xc;
  param_2->field_0x20 = param_2->field_0x1c;
  param_2->field_0x30 = param_2->field_0x2c;
  param_2->field_0x40 = param_2->field_0x3c;
  param_2->field_0x70 = param_2->field_0x6c;
  param_2->field_0x80 = param_2->field_0x7c;
  param_2->field_0x90 = param_2->field_0x8c;
  param_2->field_0xa0 = param_2->field_0x9c;
  param_2->field_0xb0 = param_2->field_0xac;
  param_2->field_0x50 = param_2->field_0x4c;
  param_2->field_0x60 = param_2->field_0x5c;
  param_2->field_0xc0 = param_2->field_0xbc;
  param_2->field_0xd0 = param_2->field_0xcc;
  param_2->field_0xe0 = param_2->field_0xdc;
  param_2->field_0xf0 = param_2->field_0xec;
  return;
}

} /* extern "C" */
