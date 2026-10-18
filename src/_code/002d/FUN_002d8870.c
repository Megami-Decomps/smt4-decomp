/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8870` (_code @ 0x2d8870, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025955c. */
extern int FUN_00296f60(void);


unsigned int FUN_002d8870(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 == 0) {
    temp_v1 = 0xff;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  FUN_0025955c(temp_v1,0,1);
  return 1;
}
