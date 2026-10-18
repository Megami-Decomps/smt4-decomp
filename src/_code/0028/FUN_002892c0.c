/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002892c0` (_code @ 0x2892c0, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002892c0_arg0 fn_002892c0_arg0;
struct fn_002892c0_arg0 {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xb];
    int field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0xc];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
};


unsigned int FUN_002892c0(fn_002892c0_arg0 *param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1->field_0x1c;
  if (temp_v0 == 0) {
    param_1->field_0x24 = 0;
    param_1->field_0x20 = 0;
    return 1;
  }
  if (param_2 < 1) {
    param_2 = 0;
  }
  else if (temp_v0 < param_2) {
    param_2 = temp_v0 - 1;
  }
  temp_v1 = param_2 - param_1->field_0x20;
  if (temp_v1 < 0) {
    param_1->field_0x20 = param_2;
    param_1->field_0x24 = 0;
  }
  else {
    param_1->field_0x24 = temp_v1;
    temp_v2 = *(int *)&param_1->field_0x10;
    if (temp_v0 < *(int *)&param_1->field_0x10) {
      temp_v2 = temp_v0;
    }
    temp_v0 = temp_v0 - temp_v2;
    if (temp_v0 < temp_v1) {
      param_1->field_0x24 = temp_v0;
      param_1->field_0x20 = param_2 - temp_v0;
    }
  }
  return 1;
}
