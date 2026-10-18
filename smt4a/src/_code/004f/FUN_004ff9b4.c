/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff9b4` (_code @ 0x4ff9b4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004ff9b4_arg0 fn_004ff9b4_arg0;
struct fn_004ff9b4_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x80];
    float field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x4];
    int field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x10];
    byte field_0xa4; /* +0xa4 */
};


unsigned int FUN_004ff9b4(fn_004ff9b4_arg0 *param_1)

{
  int temp_v0;
  
  if (((param_1->field_0x4 & 2) == 0) && (temp_v0 = param_1->field_0x90, temp_v0 != 0)) {
    if (param_1->field_0xa4 != 2) {
      if (param_1->field_0xa4 == 1) {
        return 1;
      }
    }
    else if ((*(unsigned char *)(temp_v0 + 4) & 1) != 0) {
      return 1;
    }
    if (param_1->field_0x88 < *(float *)(temp_v0 + 8)) {
      return 0;
    }
  }
  return 1;
}
