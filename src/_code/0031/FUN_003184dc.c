/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003184dc` (_code @ 0x3184dc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002d1974(unsigned int, unsigned int);


unsigned int FUN_003184dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(*param_1);
  temp_v0 = FUN_002d1974(*(unsigned int *)(temp_v0 + 0x24),0x20000);
  FUN_0028dcb0(temp_v0 != 0);
  return 1;
}
