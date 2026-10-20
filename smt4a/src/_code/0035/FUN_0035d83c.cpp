/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d83c` (_code @ 0x35d83c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_0035d83c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x44);
  if (temp_v0 != 0) {
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
