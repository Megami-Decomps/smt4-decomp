/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002012f0` (_code @ 0x2012f0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254674. */
extern unsigned int FUN_00259510(void);
/* Supplied declaration required: FUN_0027ddb0. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002012f0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00259510();
  temp_v1 = FUN_00296f60(0);
  FUN_00254674(temp_v1,temp_v0);
  FUN_0027ddb0();
  return 2;
}
