/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155634` (_code @ 0x155634, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a215c. */
extern unsigned int FUN_002a2174(void);


int FUN_00155634(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002a2174();
  FUN_002a215c(temp_v0,param_1 + 0x80);
  return param_1;
}
