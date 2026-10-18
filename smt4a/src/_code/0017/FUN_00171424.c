/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00171424` (_code @ 0x171424, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern unsigned int FUN_0018bc7c(unsigned int, unsigned int);


unsigned int FUN_00171424(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0018b868();
  temp_v0 = FUN_0018bc7c(1,param_1);
  FUN_0018b964();
  return temp_v0;
}
