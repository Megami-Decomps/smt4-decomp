/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ea8c` (_code @ 0x16ea8c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0016ea8c_arg0 fn_0016ea8c_arg0;
struct fn_0016ea8c_arg0 {
    unsigned char pad_0x0[0xc];
    short field_0xc; /* +0xc */
    short field_0xe; /* +0xe */
    unsigned char pad_0x10[0x2];
    undefined2 field_0x12; /* +0x12 */
    undefined2 field_0x14; /* +0x14 */
    undefined2 field_0x16; /* +0x16 */
    byte field_0x18; /* +0x18 */
};


void FUN_0016ea8c(fn_0016ea8c_arg0 *param_1,int param_2,int param_3)

{
  unsigned short temp_v0;
  
  if (param_3 >= 0x92) {
    param_3 = 0x91;
  }
  temp_v0 = (unsigned short)param_3;
  if (param_1->field_0x18 == 0) {
    if (param_2 < 0x28) {
      param_2 = 0x28;
    }
    param_1->field_0xc = (short)param_2;
    param_1->field_0x12 = temp_v0;
    return;
  }
  if (param_1->field_0x18 != 1) {
    param_1->field_0x16 = temp_v0;
  }
  else {
    if (param_2 < 0x24) {
      param_2 = 0x24;
    }
    param_1->field_0xe = (short)param_2;
    param_1->field_0x14 = temp_v0;
  }
  return;
}

} /* extern "C" */
