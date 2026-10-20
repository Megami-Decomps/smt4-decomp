/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150f34` (_code @ 0x150f34, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00150f34_arg0 fn_00150f34_arg0;
struct fn_00150f34_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    byte field_0xc; /* +0xc */
};


void FUN_00150f34(fn_00150f34_arg0 *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  if ((param_1->field_0xc != 0) && (*(int *)param_1->field_0x4 != 0)) {
    do {
      temp_v1 = 0;
      *(unsigned int *)(param_1->field_0x8 + temp_v0 * 4) = 0;
      temp_v0 = temp_v0 + 1;
      if (param_1->field_0xc != 0) {
        temp_v1 = *(unsigned int *)param_1->field_0x4;
      }
    } while (temp_v0 < temp_v1);
  }
  return;
}

} /* extern "C" */
