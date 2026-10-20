/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001444f0` (_code @ 0x1444f0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001524cc(...);

/* Supplied declaration required: FUN_001524cc. */


unsigned int FUN_001444f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(param_1 + 4);
  do {
    if (*(int *)(temp_v1 + temp_v0 * 4) != 0) {
      FUN_001524cc();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  FUN_001524cc(*(unsigned int *)(temp_v1 + 0x80));
  FUN_001524cc(*(unsigned int *)(temp_v1 + 0x84));
  return 0;
}

} /* extern "C" */
