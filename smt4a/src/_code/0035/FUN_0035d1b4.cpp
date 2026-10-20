/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d1b4` (_code @ 0x35d1b4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019f1a4(int, unsigned int);
int FUN_00236038(...);
int FUN_003283ac(void);

/* Supplied declaration required: FUN_0019f1a4. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0035d1b4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_0019f1a4(temp_v0,temp_v1);
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
