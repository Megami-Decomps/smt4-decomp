/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7928` (_code @ 0x2f7928, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_002f7928(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  temp_v0 = ~(1 << (temp_v0 & 0xff));
  *(unsigned int *)(temp_v1 + 0x49d0) = temp_v0 & *(unsigned int *)(temp_v1 + 0x49d0);
  *(unsigned int *)(temp_v1 + 0x49d4) = *(unsigned int *)(temp_v1 + 0x49d4) & ((int)temp_v0 >> 0x1f);
  return 1;
}
