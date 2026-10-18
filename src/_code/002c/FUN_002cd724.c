/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd724` (_code @ 0x2cd724, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern int DAT_0043e194; /* 0x43e194 */

extern unsigned int FUN_00296f60(void);


unsigned int FUN_002cd724(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296f60();
  *(unsigned int *)(DAT_0043e18c + 0xa38) = temp_v0;
  *(unsigned int *)(DAT_0043e190 + 0xa38) = temp_v0;
  *(unsigned int *)(DAT_0043e194 + 0xa38) = temp_v0;
  return 1;
}
