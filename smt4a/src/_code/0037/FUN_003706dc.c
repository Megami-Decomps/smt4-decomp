/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003706dc` (_code @ 0x3706dc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_0036af24. */
/* Supplied declaration required: FUN_00376fa4. */
/* Supplied declaration required: FUN_003847ac. */


unsigned int FUN_003706dc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_003847ac(temp_v1,temp_v2);
  FUN_00376fa4(temp_v0);
  FUN_0036af24();
  return 1;
}
