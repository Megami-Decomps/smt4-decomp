/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd00c` (_code @ 0x1dd00c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00262bcc. */
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_001dd00c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  FUN_00262bcc(temp_v0,temp_v1);
  return 1;
}
