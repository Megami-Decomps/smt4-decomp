/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1a2c` (_code @ 0x3c1a2c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003c1a2c_arg0 fn_003c1a2c_arg0;
struct fn_003c1a2c_arg0 {
    unsigned char pad_0x0[0x48];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x50];
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
    unsigned char pad_0xa8[0x8];
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x4];
    undefined4 field_0xb8; /* +0xb8 */
    unsigned char pad_0xbc[0x20];
    undefined4 field_0xdc; /* +0xdc */
};

extern int randNextInRange(unsigned int);


void FUN_003c1a2c(fn_003c1a2c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int in_s0;
  unsigned int temp_v1;
  
  param_1->field_0xa0 = 0xf;
  if (param_2 == 1 || param_2 == 2) {
    in_s0 = 0x3fd9999a;
  }
  param_1->field_0x48 = 1;
  param_1->field_0x4c = 0;
  if (param_2 != 1 && param_2 != 2) {
    if (param_2 != 3) {
      param_1->field_0xa4 = 0x3fb33333;
    }
    else {
      in_s0 = 0x3f000000;
      param_1->field_0xa4 = in_s0;
    }
  }
  else {
    param_1->field_0xa4 = in_s0;
  }
  temp_v0 = randNextInRange(1);
  if (temp_v0 == 0) {
    temp_v1 = 0x3f800000;
  }
  else {
    temp_v1 = 0xbf800000;
  }
  param_1->field_0xb8 = temp_v1;
  param_1->field_0xb0 = 0;
  param_1->field_0xdc = param_1->field_0xa4;
  return;
}

} /* extern "C" */
