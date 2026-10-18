/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d88d8` (_code @ 0x2d88d8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00259324. */
extern int FUN_00296cc8(void);


unsigned int FUN_002d88d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 == 0) {
    temp_v1 = 0xff;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  FUN_00259324(temp_v1,0,1);
  return 1;
}
