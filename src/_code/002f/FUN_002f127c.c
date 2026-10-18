/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f127c` (_code @ 0x2f127c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);


unsigned int FUN_002f127c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00293c98();
  temp_v1 = FUN_00296f60(0);
  FUN_0028df54(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x22a8));
  return 1;
}
