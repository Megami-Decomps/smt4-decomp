/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb4e0` (_code @ 0x1eb4e0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3510(void);
int FUN_00354c04(void);

extern unsigned int FUN_002c3414(void);
/* Supplied declaration required: FUN_002c3510. */
/* Supplied declaration required: FUN_00354c04. */


unsigned int FUN_001eb4e0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c3414();
  FUN_00354c04();
  FUN_002c3510();
  return temp_v0;
}

} /* extern "C" */
