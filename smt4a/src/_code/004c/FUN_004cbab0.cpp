/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cbab0` (_code @ 0x4cbab0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004cbab0_arg0 fn_004cbab0_arg0;
struct fn_004cbab0_arg0 {
    unsigned char pad_0x0[0x48];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x5c];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x8];
    undefined4 field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x4];
    undefined4 field_0xc4; /* +0xc4 */
    unsigned char pad_0xc8[0x20];
    undefined4 field_0xe8; /* +0xe8 */
};

extern int randRange(unsigned int);


void FUN_004cbab0(fn_004cbab0_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  unsigned int in_s0;
  unsigned int temp_v1;
  
  param_1->field_0xac = 0xf;
  if (param_2 == 1 || param_2 == 2) {
    in_s0 = 0x3fd9999a;
  }
  param_1->field_0x48 = 1;
  param_1->field_0x4c = 0;
  if (param_2 != 1 && param_2 != 2) {
    if (param_2 != 3) {
      param_1->field_0xb0 = 0x3fb33333;
    }
    else {
      in_s0 = 0x3f000000;
      param_1->field_0xb0 = in_s0;
    }
  }
  else {
    param_1->field_0xb0 = in_s0;
  }
  temp_v0 = randRange(1);
  if (temp_v0 == 0) {
    temp_v1 = 0x3f800000;
  }
  else {
    temp_v1 = 0xbf800000;
  }
  param_1->field_0xc4 = temp_v1;
  param_1->field_0xbc = 0;
  param_1->field_0xe8 = param_1->field_0xb0;
  return;
}

} /* extern "C" */
