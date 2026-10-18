/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300190` (_code @ 0x300190, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_00300190(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60(0);
  FUN_00296f60(1);
  temp_v1 = FUN_00293c98();
  FUN_00282b94(temp_v1,temp_v0);
  FUN_0028df54();
  return 1;
}
