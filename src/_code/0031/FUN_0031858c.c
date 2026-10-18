/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031858c` (_code @ 0x31858c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031858c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_002b06c4();
  FUN_0028dcb0((*(unsigned short *)(temp_v0 + 0x16) & 0x7f) >> 6);
  return 1;
}
