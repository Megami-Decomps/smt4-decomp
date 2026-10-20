/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd7d4` (_code @ 0x2cd7d4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern int DAT_0043e194; /* 0x43e194 */

extern unsigned int scrGetArg(void);


unsigned int FUN_002cd7d4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg();
  *(unsigned int *)(DAT_0043e18c + 0xa38) = temp_v0;
  *(unsigned int *)(DAT_0043e190 + 0xa38) = temp_v0;
  *(unsigned int *)(DAT_0043e194 + 0xa38) = temp_v0;
  return 1;
}

} /* extern "C" */
