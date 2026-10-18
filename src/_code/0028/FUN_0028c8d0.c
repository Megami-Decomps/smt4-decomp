/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c8d0` (_code @ 0x28c8d0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0028c8d0_arg0 fn_0028c8d0_arg0;
typedef struct fn_0028c8d0_arg0_p2c fn_0028c8d0_arg0_p2c;
struct fn_0028c8d0_arg0 {
    unsigned char pad_0x0[0x28];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    fn_0028c8d0_arg0_p2c *field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x28];
    int field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x18];
    float field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x4];
    float field_0x7c; /* +0x7c */
};
struct fn_0028c8d0_arg0_p2c {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x2b];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x1b];
    unsigned char field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x7];
    unsigned char field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0xcb];
    undefined4 field_0x148; /* +0x148 */
    undefined4 field_0x14c; /* +0x14c */
};


void FUN_0028c8d0(fn_0028c8d0_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  fn_0028c8d0_arg0_p2c *pfVar1;
  int temp_v0;
  float in_s0;
  
  if (0 < param_1->field_0x58) {
    param_1->field_0x7c = in_s0;
    pfVar1 = param_1->field_0x2c;
    if ((pfVar1->field_0x148 != 0) &&
       (temp_v0 = *(int *)(*(int *)(pfVar1->field_0x28 + 0x1c) +
                        pfVar1->field_0x14c * *(int *)(pfVar1->field_0x28 + 0x28) * 4), temp_v0 != 0))
    {
      *(float *)(temp_v0 + 0x40) = param_1->field_0x74 * in_s0;
    }
  }
  return;
}
