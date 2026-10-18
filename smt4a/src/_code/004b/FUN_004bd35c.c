/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd35c` (_code @ 0x4bd35c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004bd35c_arg0 fn_004bd35c_arg0;
struct fn_004bd35c_arg0 {
    unsigned char pad_0x0[0xe];
    short field_0xe; /* +0xe */
    unsigned char pad_0x10[0x1a];
    short field_0x2a; /* +0x2a */
    unsigned char pad_0x2c[0x36];
    ushort field_0x62; /* +0x62 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);


void FUN_004bd35c(fn_004bd35c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  
  temp_v1 = (int)param_1->field_0xe;
  temp_v0 = FUN_0018416c(param_1->field_0x62);
  if (temp_v0 != 0) {
    temp_v2 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = (int)(short)(int)(temp_v2 * 1.25f);
  }
  if ((param_2 <= temp_v1) && (temp_v1 = param_2, param_2 < 1)) {
    temp_v1 = 1;
  }
  param_1->field_0x2a = (short)temp_v1;
  return;
}
