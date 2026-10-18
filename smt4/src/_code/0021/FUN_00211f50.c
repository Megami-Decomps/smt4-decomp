/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211f50` (_code @ 0x211f50, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025930c. */
/* Supplied declaration required: FUN_0026f960. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_00211f50(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(2);
  temp_v2 = FUN_00296cc8(1);
  FUN_0025930c(temp_v2,temp_v1);
  FUN_0026f960(temp_v0);
  return 2;
}
