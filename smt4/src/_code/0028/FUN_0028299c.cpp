/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028299c` (_code @ 0x28299c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);

extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


int FUN_0028299c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    FUN_002939f4();
    temp_v0 = FUN_00293230();
    if (temp_v0 == 0) {
      temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1cfc) + 0x194);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
