/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001481e4` (_code @ 0x1481e4, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014ff34(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */


unsigned int FUN_001481e4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb6b8();
  temp_v0 = FUN_0014ff34(param_1,param_2);
  FUN_002bb648();
  return temp_v0;
}
