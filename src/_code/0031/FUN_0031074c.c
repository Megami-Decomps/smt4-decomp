/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031074c` (_code @ 0x31074c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00289a18. */
extern int FUN_00289a48(void);


unsigned int FUN_0031074c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289a48();
  if (temp_v0 != 0) {
    FUN_00289a18(1);
  }
  return 1;
}
