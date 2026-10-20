/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f90e0` (_code @ 0x4f90e0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* Supplied declaration required: FUN_0014aa78. */


unsigned int FUN_004f90e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  while (temp_v0 = temp_v0 + 1, temp_v0 < 0x6d) {
    if (temp_v0 >= 4) {
      FUN_0014aa78();
    }
  }
  return 1;
}

} /* extern "C" */
