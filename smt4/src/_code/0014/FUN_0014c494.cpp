/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c494` (_code @ 0x14c494, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0014c494_arg0 fn_0014c494_arg0;
struct fn_0014c494_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    byte field_0xc; /* +0xc */
};


unsigned int FUN_0014c494(fn_0014c494_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = param_1->field_0xc != 0;
  temp_v1 = 0;
  if (temp_v2) {
    temp_v1 = param_1->field_0x8;
  }
  if ((temp_v2 && temp_v1 != 0) && (param_2 < *(unsigned int *)param_1->field_0x4)) {
    temp_v0 = *(unsigned int *)(temp_v1 + param_2 * 4);
    *(unsigned int *)(temp_v1 + param_2 * 4) = param_3;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
