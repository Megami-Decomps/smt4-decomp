/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cc3c` (_code @ 0x31cc3c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_002d18c8(unsigned int, unsigned int);


unsigned int FUN_0031cc3c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027eb98(*param_1);
  temp_v0 = FUN_002d18c8(*(unsigned int *)(temp_v0 + 0x24),0x40000);
  FUN_0028df54(temp_v0 != 0);
  return 1;
}
