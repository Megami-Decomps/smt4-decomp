/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb1b0` (_code @ 0x2eb1b0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002eb200; /* 0x2eb200 */

/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002be7fc. */


unsigned int FUN_002eb1b0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  
  temp_v0 = FUN_00296f60(0);
  FUN_00296f60(1);
  FUN_00296f60(2);
  FUN_00296f60(3);
  FUN_00296f60(4);
  FUN_002be7fc(temp_v1,&LAB_002eb200,temp_v0);
  return 1;
}
