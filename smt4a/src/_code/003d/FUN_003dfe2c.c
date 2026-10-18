/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfe2c` (_code @ 0x3dfe2c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_003dfad4. */


unsigned short FUN_003dfe2c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1 [24];
  
  temp_v0 = FUN_001801a4();
  FUN_003dfad4(temp_v1,temp_v0);
  return temp_v1[param_1] & 0x3ff;
}
