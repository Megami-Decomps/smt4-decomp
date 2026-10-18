/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121168` (_code @ 0x121168, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00121168_arg0 fn_00121168_arg0;
struct fn_00121168_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x20];
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
    unsigned char pad_0x44[0xc9];
    byte field_0x10d; /* +0x10d */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


int FUN_00121168(fn_00121168_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = 4.888f;
  temp_v2 = VectorUnsignedToFloat(param_1->field_0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v0;
  if (temp_v2 >= 0x409c6a80) {
    temp_v1 = (float)VectorUnsignedToFloat(param_1->field_0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v2 = VectorFloatToUnsigned(temp_v1 * 0.20458265f,3);
  temp_v3 = VectorUnsignedToFloat(param_1->field_0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v3 >= 0x409c6a80) {
    temp_v0 = (float)VectorUnsignedToFloat(param_1->field_0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v3 = VectorFloatToUnsigned(temp_v0 * 0.20458265f,3);
  return (param_1->field_0x3c * 4 + temp_v2 * 0x280 + temp_v3 * 0x280 + param_1->field_0x38 * 4 +
         param_1->field_0x40 * 4) * (unsigned int)param_1->field_0x10d + 0x20;
}
