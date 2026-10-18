/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f78a4` (_code @ 0x2f78a4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002f78a4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  temp_v0 = 1 << (temp_v0 & 0xff);
  FUN_0028df54((*(unsigned int *)(temp_v1 + 0x49d4) & ((int)temp_v0 >> 0x1f)) != 0 ||
               (*(unsigned int *)(temp_v1 + 0x49d0) & temp_v0) != 0);
  return 1;
}
