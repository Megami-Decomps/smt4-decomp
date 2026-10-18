/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7adc` (_code @ 0x3e7adc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e7adc_arg0 fn_003e7adc_arg0;
struct fn_003e7adc_arg0 {
    unsigned char pad_0x0[0xec];
    int field_0xec; /* +0xec */
    unsigned char pad_0xf0[0x1c];
    int field_0x10c; /* +0x10c */
    unsigned char pad_0x110[0x4490];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
};

extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */


unsigned int FUN_003e7adc(fn_003e7adc_arg0 *param_1)

{
  unsigned int temp_v0;
  
  if (((param_1->field_0xec < 0) &&
      ((param_1->field_0x45a0 & DAT_00573a50) == 0 && (param_1->field_0x45a4 & DAT_00573a54) == 0))
     && (param_1->field_0x10c < 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
