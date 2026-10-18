/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8488` (_code @ 0x3b8488, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003389d0(unsigned int, unsigned int);
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003b8488(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(*param_1);
  temp_v0 = FUN_003389d0(*(unsigned int *)(temp_v0 + 0x24),0x40000);
  FUN_003283ac(temp_v0 != 0);
  return 1;
}
