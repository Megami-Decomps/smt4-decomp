/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022bde8` (_code @ 0x22bde8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0022bde8_arg1 fn_0022bde8_arg1;
struct fn_0022bde8_arg1 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    uint field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
};


void FUN_0022bde8(int *param_1,fn_0022bde8_arg1 *param_2)

{
/* irregular: irregular input(s): in_r12 */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_r12;
  
  temp_v0 = param_2->field_0x14;
  if (param_2->field_0x18 == 0) {
    *param_1 = (int)param_2;
    param_1[1] = 0;
    param_1[2] = temp_v0;
    return;
  }
  if (temp_v0 != 0) {
    in_r12 = param_2->field_0xc;
  }
  if (!(temp_v0 != 0 && temp_v0 != in_r12)) {
    temp_v1 = param_2->field_0x4;
    temp_v2 = param_2->field_0xc;
    *param_1 = (int)param_2;
    param_1[1] = temp_v1;
    param_1[2] = temp_v2;
  }
  else {
    temp_v3 = *(unsigned int *)&param_2->field_0x10;
    temp_v1 = param_2->field_0x4;
    if (temp_v3 < temp_v0) {
      param_1[2] = temp_v0;
    }
    temp_v1 = temp_v1 + temp_v0;
    if (temp_v0 <= temp_v3) {
      *param_1 = (int)param_2;
      param_1[1] = temp_v1;
      param_1[2] = in_r12 + temp_v0;
      return;
    }
    *param_1 = (int)param_2;
    param_1[1] = temp_v1;
  }
  return;
}
