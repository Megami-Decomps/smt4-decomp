/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe938` (_code @ 0x2fe938, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(...);
int FUN_002df598(unsigned int, unsigned int);
int FUN_002e8530(void);

/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002df598. */
/* Supplied declaration required: FUN_002e8530. */


unsigned int FUN_002fe938(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(0);
  FUN_002df598(temp_v1,temp_v0);
  FUN_002e8530();
  return 1;
}

} /* extern "C" */
