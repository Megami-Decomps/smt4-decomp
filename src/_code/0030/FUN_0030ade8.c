/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ade8` (_code @ 0x30ade8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_0029c468. */
extern unsigned int FUN_0029c49c(void);


unsigned int FUN_0030ade8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_0029c49c();
  FUN_0029c468(temp_v1,temp_v0,0);
  FUN_0028df54(temp_v1);
  return 1;
}
