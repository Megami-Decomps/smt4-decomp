/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002963ec` (_code @ 0x2963ec, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002963ec_arg0 fn_002963ec_arg0;
struct fn_002963ec_arg0 {
    unsigned char pad_0x0[0x18];
    short field_0x18; /* +0x18 */
    short field_0x1a; /* +0x1a */
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x1f];
    byte field_0x3d; /* +0x3d */
    unsigned char pad_0x3e[0x2];
    float field_0x40; /* +0x40 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_002963ec(fn_002963ec_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  if (param_1->field_0x3d != 0) {
    temp_v3 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = (float)VectorSignedToFloat((int)param_1->field_0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (float)VectorSignedToFloat((int)param_1->field_0x1a,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1->field_0x18 = (short)(int)(temp_v3 / param_1->field_0x40 + temp_v1);
    param_1->field_0x1a = (short)(int)(temp_v0 / param_1->field_0x40 + temp_v2);
  }
  else {
    param_1->field_0x18 = (short)param_2 + param_1->field_0x18;
    param_1->field_0x1a = (short)param_3 + param_1->field_0x1a;
  }
  param_1->field_0x1c = 0;
  return;
}
