/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5ae8` (_code @ 0x3e5ae8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003e5ae8_arg0 fn_003e5ae8_arg0;
struct fn_003e5ae8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x14];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x58];
    int field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x58];
    int field_0xd4; /* +0xd4 */
};


unsigned int FUN_003e5ae8(fn_003e5ae8_arg0 *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1->field_0x4;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x1c;
  }
  if (temp_v1 && temp_v0 == 0) {
    temp_v1 = param_1->field_0x78 == 0;
    if (temp_v1) {
      param_1 = (fn_003e5ae8_arg0 *)param_1->field_0xd4;
    }
    if (temp_v1 && param_1 == (fn_003e5ae8_arg0 *)0x0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
