/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8880` (_code @ 0x2d8880, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002205a4(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002205a4. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002d8880(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  FUN_002205a4(temp_v0,temp_v1,temp_v2);
  return 1;
}

} /* extern "C" */
