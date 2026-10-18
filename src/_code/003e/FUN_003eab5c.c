/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eab5c` (_code @ 0x3eab5c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003eab5c_arg0 fn_003eab5c_arg0;
struct fn_003eab5c_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    uint field_0x3c; /* +0x3c */
    uint field_0x40; /* +0x40 */
};


unsigned int FUN_003eab5c(fn_003eab5c_arg0 *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1->field_0x40;
  if (param_1->field_0x3c <= temp_v0) {
    temp_v0 = temp_v0 - param_1->field_0x3c;
  }
  return *(unsigned int *)(param_1->field_0x34 + temp_v0 * 0x10 + 4);
}
