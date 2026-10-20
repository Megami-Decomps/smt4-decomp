/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c68b8` (_code @ 0x3c68b8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00571508; /* 0x571508 */

extern int FUN_00236038(void);


unsigned int FUN_003c68b8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  *(unsigned char *)(DAT_00571508 + 0x6a8) = temp_v0 != 0;
  return 1;
}

} /* extern "C" */
