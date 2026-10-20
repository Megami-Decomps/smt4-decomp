/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2070` (_code @ 0x2c2070, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003768dc(void);
int FUN_0039587c(unsigned int, unsigned int);

extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002360dc(void);
/* Supplied declaration required: FUN_003768dc. */
/* Supplied declaration required: FUN_0039587c. */


unsigned int FUN_002c2070(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002360dc();
  temp_v1 = FUN_00236038(0);
  FUN_0039587c(temp_v1,temp_v0);
  FUN_003768dc();
  return 3;
}

} /* extern "C" */
