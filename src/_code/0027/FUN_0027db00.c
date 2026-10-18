/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027db00` (_code @ 0x27db00, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */


void FUN_0027db00(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned int *)(DAT_00447a78 + 0x30) = 2;
  *(unsigned int *)(temp_v0 + 0x34) = 0xff;
  *(unsigned int *)(temp_v0 + 0x38) = 2;
  return;
}
