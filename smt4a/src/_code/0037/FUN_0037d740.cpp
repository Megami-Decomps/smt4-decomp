/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d740` (_code @ 0x37d740, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(unsigned int, unsigned int);
int FUN_003283ac(void);

extern unsigned int FUN_0015687c(void);
extern unsigned int FUN_002360dc(void);
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0037d740(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002360dc();
  temp_v1 = FUN_0015687c();
  FUN_0030ea58(temp_v1,temp_v0);
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
