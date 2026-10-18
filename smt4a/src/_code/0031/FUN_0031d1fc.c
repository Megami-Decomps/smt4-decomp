/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d1fc` (_code @ 0x31d1fc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e6dd4. */


void FUN_0031d1fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f69c;
  *(unsigned int *)(DAT_0057f69c + 0x2db4) = 0;
  *(unsigned int *)(temp_v0 + 0x2db8) = 0;
  FUN_002e6dd4(temp_v0 + 0x2d68,0x4c);
  return;
}
