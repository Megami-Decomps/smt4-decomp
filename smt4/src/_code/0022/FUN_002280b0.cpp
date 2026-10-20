/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002280b0` (_code @ 0x2280b0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);

extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


int FUN_002280b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x1cfc);
  if ((temp_v0 != 0) && (-1 < *(short *)(temp_v0 + 0x192))) {
    FUN_002939f4();
    temp_v0 = FUN_00293230();
    if (temp_v0 == 0) {
      temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1cfc) + 0x192);
    }
    else {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  return -1;
}

} /* extern "C" */
