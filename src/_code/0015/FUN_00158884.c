/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158884` (_code @ 0x158884, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00158884_arg0 fn_00158884_arg0;
struct fn_00158884_arg0 {
    unsigned char pad_0x0[0xc];
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0x5f];
    int field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00158884(fn_00158884_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  
  if (param_1->field_0xc != 0) {
    if (param_2 == 0) {
      param_1->field_0x6c = param_1->field_0x6c + param_3;
      return;
    }
    if (param_2 == 1) {
      temp_v0 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      param_1->field_0x70 = param_1->field_0x70 + temp_v0;
    }
  }
  return;
}
