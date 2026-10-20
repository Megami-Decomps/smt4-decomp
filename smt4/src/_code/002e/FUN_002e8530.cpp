/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8530` (_code @ 0x2e8530, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a043c(unsigned int, int);

extern int DAT_004474f4; /* 0x4474f4 */

/* Supplied declaration required: FUN_002a043c. */


void FUN_002e8530(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_004474f4;
  *(unsigned char *)(DAT_004474f4 + 0x2b0) = 1;
  FUN_002a043c(*(unsigned int *)(temp_v0 + 0x2b4),0);
  return;
}

} /* extern "C" */
