/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd2bc` (_code @ 0x4bd2bc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

typedef struct fn_004bd2bc_arg0 fn_004bd2bc_arg0;
struct fn_004bd2bc_arg0 {
    unsigned char pad_0x0[0xe];
    short field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    unsigned char pad_0x12[0x18];
    short field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x34];
    ushort field_0x62; /* +0x62 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);


unsigned int FUN_004bd2bc(fn_004bd2bc_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  
  temp_v1 = param_1->field_0xe;
  temp_v0 = FUN_0018416c(param_1->field_0x62);
  if (temp_v0 != 0) {
    temp_v2 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = (short)(int)(temp_v2 * 1.25f);
  }
  param_1->field_0x2a = temp_v1;
  param_1->field_0x2c = param_1->field_0x10;
  return 1;
}

} /* extern "C" */
