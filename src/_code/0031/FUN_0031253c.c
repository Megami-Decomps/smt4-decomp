/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031253c` (_code @ 0x31253c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern int FUN_00296f60(void);


unsigned int FUN_0031253c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  FUN_0028df54(*(short *)(temp_v1 + 0x1fca) <= temp_v0);
  return 1;
}
