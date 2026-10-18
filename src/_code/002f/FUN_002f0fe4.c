/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0fe4` (_code @ 0x2f0fe4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002f0fe4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 < 0x10) {
    temp_v1 = FUN_00293c98();
    FUN_0028df54(*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0x497c));
  }
  return 1;
}
