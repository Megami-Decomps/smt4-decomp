/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330464` (_code @ 0x330464, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019a37c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002360dc(void);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_003fd528(void);


unsigned int FUN_00330464(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002360dc();
  temp_v1 = FUN_003fd528();
  temp_v2 = FUN_0019a37c(temp_v0,temp_v1,0x12);
  FUN_003283ac(temp_v2 == 0);
  return 1;
}
