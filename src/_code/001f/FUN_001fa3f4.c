/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa3f4` (_code @ 0x1fa3f4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0025c294(void);
/* Supplied declaration required: FUN_002b087c. */


unsigned char FUN_001fa3f4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0025c294();
  FUN_002b087c();
  return *(unsigned char *)(temp_v0 + 2);
}
