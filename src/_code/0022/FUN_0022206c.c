/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022206c` (_code @ 0x22206c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_0030a2c0. */


unsigned int FUN_0022206c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  FUN_0030a2c0(*(unsigned int *)(temp_v0 * 4 + 0x43df70),0,0,temp_v1);
  FUN_0028dcb0();
  return 1;
}
