/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3220` (_code @ 0x1a3220, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b868(void);
int FUN_0018b964(void);

/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern unsigned int FUN_001b0508(unsigned int, unsigned int);


unsigned int FUN_001a3220(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0018b868();
  temp_v0 = FUN_001b0508(param_1,param_2);
  FUN_0018b964();
  return temp_v0;
}

} /* extern "C" */
