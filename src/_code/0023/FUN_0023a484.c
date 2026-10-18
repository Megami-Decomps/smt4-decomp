/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a484` (_code @ 0x23a484, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225dac. */
/* Supplied declaration required: FUN_003aff38. */


unsigned int FUN_0023a484(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r6;
  
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225dac();
  if (temp_v0 != 0) {
    unaff_r6 = *(int *)(temp_v0 + 0x10);
  }
  if (!(temp_v0 != 0 && unaff_r6 != 0)) {
    temp_v1 = 0xe;
  }
  else {
    temp_v3 = *(int *)(unaff_r6 + 0x48);
    temp_v0 = 0;
    if (temp_v0 < temp_v3) {
      do {
        temp_v2 = unaff_r6;
        FUN_003aff38();
        if (temp_v2 == 0) {
          return 0x14;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v3);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
