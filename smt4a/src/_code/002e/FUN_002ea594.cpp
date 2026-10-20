/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea594` (_code @ 0x2ea594, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);

extern unsigned int FUN_002e3138(unsigned int);
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_002ea594(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002e3138(*param_1);
  if ((int)temp_v0 < 0) {
    FUN_002e3140();
  }
  if ((temp_v0 & 0x3ff) != 0x3fe) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
