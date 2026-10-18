/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa498` (_code @ 0x1fa498, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0025c05c(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned char FUN_001fa498(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0025c05c();
  FUN_002b06c4();
  return *(unsigned char *)(temp_v0 + 2);
}
