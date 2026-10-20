/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1be8` (_code @ 0x2a1be8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int FUN_00429e64(void);

/* Supplied declaration required: FUN_0013ebd8. */
extern unsigned int FUN_0014374c(void);
/* Supplied declaration required: FUN_00429e64. */


unsigned int FUN_002a1be8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_0014374c();
  FUN_00429e64();
  FUN_0013ebd8();
  return temp_v0;
}

} /* extern "C" */
