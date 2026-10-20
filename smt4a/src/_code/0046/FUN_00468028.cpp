/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468028` (_code @ 0x468028, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00468028_arg0 fn_00468028_arg0;
struct fn_00468028_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x5];
    byte field_0x11; /* +0x11 */
};

extern int FUN_002802c8(void);


void FUN_00468028(fn_00468028_arg0 *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002802c8();
  if (temp_v0 == 0) {
    if (param_1->field_0x11 == 1) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = 4;
    }
    param_1->field_0x4 = temp_v1;
    param_1->field_0x8 = 0;
  }
  return;
}

} /* extern "C" */
