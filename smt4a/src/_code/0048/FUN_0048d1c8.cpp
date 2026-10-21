/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d1c8` (_code @ 0x48d1c8, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048a378(...);

typedef struct fn_0048d1c8_arg0 fn_0048d1c8_arg0;
struct fn_0048d1c8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
};

extern int buttonHelpIsNotActive(void);
/* Supplied declaration required: FUN_0048a378. */


void FUN_0048d1c8(fn_0048d1c8_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1->field_0x8;
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      temp_v0 = buttonHelpIsNotActive();
      if (temp_v0 != 0) {
        param_1->field_0x8 = 2;
      }
      return;
    }
    if (temp_v0 != 2) {
      return;
    }
    param_1->field_0x10 = param_1->field_0x10 & 0xfeffffff;
    temp_v0 = 0;
    param_1->field_0x4 = 2;
  }
  else {
    FUN_0048a378(param_1);
    temp_v0 = 1;
  }
  param_1->field_0x8 = temp_v0;
  return;
}

} /* extern "C" */
