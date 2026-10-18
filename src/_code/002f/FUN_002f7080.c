/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7080` (_code @ 0x2f7080, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00247170(unsigned int);
extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */


unsigned int FUN_002f7080(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027eb98(*param_1);
  temp_v0 = FUN_00247170(*(unsigned int *)(temp_v0 + 0x20));
  if (temp_v0 != 0) {
    FUN_0028df54(1);
    return 1;
  }
  FUN_0028df54(0);
  return 1;
}
