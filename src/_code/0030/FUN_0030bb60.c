/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bb60` (_code @ 0x30bb60, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002954cc. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_0030bb60(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00293c98();
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_002954cc(temp_v0,temp_v1);
  return 1;
}
