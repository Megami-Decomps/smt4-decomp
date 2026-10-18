/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1240` (_code @ 0x2f1240, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002f1240(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  temp_v0 = 1 << (temp_v0 & 0xff);
  *(unsigned int *)(temp_v1 + 0x49d0) = temp_v0 | *(unsigned int *)(temp_v1 + 0x49d0);
  *(unsigned int *)(temp_v1 + 0x49d4) = *(unsigned int *)(temp_v1 + 0x49d4) | ((int)temp_v0 >> 0x1f);
  return 1;
}
