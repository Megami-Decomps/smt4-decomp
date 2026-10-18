/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126b48` (_code @ 0x126b48, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00126b48_arg0 fn_00126b48_arg0;
struct fn_00126b48_arg0 {
    unsigned char pad_0x0[0x2c];
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    int field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x4];
    int field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0xc];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x4];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x4];
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    uint field_0x7c; /* +0x7c */
    uint field_0x80; /* +0x80 */
    unsigned char field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x7];
    uint field_0x8c; /* +0x8c */
    uint field_0x90; /* +0x90 */
};

/* Supplied declaration required: FUN_002e6dd4. */


void FUN_00126b48(fn_00126b48_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1->field_0x3c = param_1->field_0x2c << 1;
  *(unsigned short *)(param_1->field_0x44 + (param_1->field_0x4c * 2 - 2)) = 0;
  FUN_002e6dd4(param_1->field_0x44,param_1->field_0x4c * 2 - 2);
  temp_v0 = *(int *)&param_1->field_0x84 * 0xc;
  param_1->field_0x80 = (unsigned int)*(unsigned short *)(temp_v0 + 0x543fba);
  param_1->field_0x8c = (unsigned int)*(unsigned short *)(temp_v0 + 0x543fb8);
  param_1->field_0x90 = (unsigned int)*(unsigned short *)(temp_v0 + 0x543fbc);
  param_1->field_0x7c = (unsigned int)*(unsigned short *)(temp_v0 + 0x543fbe);
  param_1->field_0x6c = 0;
  param_1->field_0x5c = 0;
  param_1->field_0x78 = 2;
  param_1->field_0x74 = 0;
  param_1->field_0x68 = 0;
  param_1->field_0x48 = 0;
  param_1->field_0x60 = 2;
  return;
}
