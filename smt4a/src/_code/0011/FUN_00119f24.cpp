/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119f24` (_code @ 0x119f24, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00119f24_arg0 fn_00119f24_arg0;
struct fn_00119f24_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    undefined4 field_0xc; /* +0xc */
    byte field_0x10; /* +0x10 */
};

extern int FUN_00306d0e(unsigned int, unsigned char, unsigned char);


unsigned char FUN_00119f24(fn_00119f24_arg0 *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00306d0e(param_1->field_0xc,param_1->field_0x4,param_1->field_0x10);
  if (temp_v0 != 0) {
    param_1->field_0x10 = 0;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
