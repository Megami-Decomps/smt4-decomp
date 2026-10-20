/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b4f0` (_code @ 0x38b4f0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c564c(int);

typedef struct fn_0038b4f0_arg0 fn_0038b4f0_arg0;
struct fn_0038b4f0_arg0 {
    unsigned char pad_0x0[0x754];
    uint field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    undefined4 field_0x75c; /* +0x75c */
    undefined4 field_0x760; /* +0x760 */
    undefined4 field_0x764; /* +0x764 */
    undefined4 field_0x768; /* +0x768 */
    unsigned char pad_0x76c[0x5f4];
    undefined4 field_0xd60; /* +0xd60 */
};

/* Supplied declaration required: FUN_002c564c. */


unsigned int FUN_0038b4f0(fn_0038b4f0_arg0 *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if ((param_1->field_0x754 & 8) == 0) {
    temp_v3 = *param_2;
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    temp_v2 = param_2[3];
    param_1->field_0x768 = param_2[4];
    param_1->field_0xd60 = param_3;
    param_1->field_0x754 = param_1->field_0x754 | 9;
    param_1->field_0x758 = temp_v3;
    param_1->field_0x75c = temp_v0;
    param_1->field_0x760 = temp_v1;
    param_1->field_0x764 = temp_v2;
    FUN_002c564c(0);
  }
  return 1;
}

} /* extern "C" */
