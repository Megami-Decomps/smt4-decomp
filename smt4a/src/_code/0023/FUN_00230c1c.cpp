/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230c1c` (_code @ 0x230c1c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100380(unsigned int, int);

/* Supplied declaration required: FUN_00100380. */


void FUN_00230c1c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 == 0) {
    FUN_00100380(param_1,0x230cb8);
    return;
  }
  if (param_2 == 1) {
    FUN_00100380(param_1,0x230cc8);
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      if (param_2 == 4) {
        FUN_00100380(param_1,0x230ce0);
        return;
      }
      if (param_2 == 5) {
        FUN_00100380(param_1,0x230cec);
        return;
      }
      if (param_2 == 6) {
        FUN_00100380(param_1,0x230d00);
        return;
      }
      if (param_2 == 7) {
        FUN_00100380(param_1,0x230d1c);
        return;
      }
      if (param_2 != 8) {
        return;
      }
    }
    FUN_00100380(param_1,0x230ca0);
    return;
  }
  FUN_00100380(param_1,0x230d1c);
  return;
}

} /* extern "C" */
