/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab8f0` (_code @ 0x1ab8f0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00285e44(unsigned int, int, unsigned int);
int FUN_00289234(unsigned int);
int FUN_002893c0(void);
int FUN_0028dcb0(unsigned int);
int FUN_00296cc8(...);

/* Supplied declaration required: FUN_00285e44. */
/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: FUN_002893c0. */
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_001ab8f0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  FUN_00285e44(temp_v0,0,temp_v1);
  FUN_002893c0();
  FUN_00289234(temp_v0);
  FUN_0028dcb0(temp_v0);
  return 1;
}

} /* extern "C" */
