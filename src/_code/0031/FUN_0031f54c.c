/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f54c` (_code @ 0x31f54c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(void);
/* Supplied declaration required: FUN_002b087c. */


unsigned int FUN_0031f54c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = FUN_00296f60();
  FUN_002b087c();
  FUN_0028df54((*(unsigned char *)(temp_v0 + 0xa5) & 3) >> 1);
  return 1;
}
