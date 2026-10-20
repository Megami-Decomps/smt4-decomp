/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6cc0` (_code @ 0x2e6cc0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6c74(...);

typedef struct fn_002e6cc0_arg0 fn_002e6cc0_arg0;
struct fn_002e6cc0_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    uint field_0xc; /* +0xc */
    uint field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x18];
    uint field_0x2c; /* +0x2c */
};

/* Supplied declaration required: FUN_002e6c74. */


unsigned int FUN_002e6cc0(fn_002e6cc0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_1->field_0x10;
  temp_v0 = param_1->field_0x2c;
  if (param_1->field_0x2c <= param_1->field_0x4) {
    temp_v0 = param_1->field_0x4;
  }
  temp_v1 = param_1->field_0xc;
  param_1->field_0xc = temp_v1 & 0xffd7ffff;
  if ((int)(temp_v1 << 0xf) < 0) {
    if ((temp_v0 != temp_v2) && (temp_v1 = temp_v2, FUN_002e6c74(temp_v2,temp_v0 - temp_v2,param_1), temp_v1 != 0))
    {
      return 0xffffffff;
    }
    param_1->field_0x2c = temp_v2;
    param_1->field_0x4 = temp_v2;
    *(unsigned int *)&param_1->field_0x8 = 0;
    param_1->field_0xc = param_1->field_0xc & 0xfffeffff;
  }
  return 0;
}

} /* extern "C" */
