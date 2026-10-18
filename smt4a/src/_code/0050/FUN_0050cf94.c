/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050cf94` (_code @ 0x50cf94, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0050cf94_arg0 fn_0050cf94_arg0;
struct fn_0050cf94_arg0 {
    unsigned char pad_0x0[0x30];
    int field_0x30; /* +0x30 */
    uint field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    uint field_0x3c; /* +0x3c */
};


unsigned int FUN_0050cf94(fn_0050cf94_arg0 *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1->field_0x3c;
  if (param_1->field_0x34 <= temp_v0) {
    temp_v0 = temp_v0 - param_1->field_0x34;
  }
  return *(unsigned int *)(param_1->field_0x30 + temp_v0 * 0x10 + 4);
}
