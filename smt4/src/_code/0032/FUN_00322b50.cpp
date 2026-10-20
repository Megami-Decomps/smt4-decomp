/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322b50` (_code @ 0x322b50, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(...);
int FUN_00349080(int, int);

/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_00349080. */


unsigned int FUN_00322b50(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  FUN_00349080(temp_v0,temp_v1 == 1);
  return 1;
}

} /* extern "C" */
