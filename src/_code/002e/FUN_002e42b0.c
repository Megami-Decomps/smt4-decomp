/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e42b0` (_code @ 0x2e42b0, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002e42b0(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  *(unsigned int *)(temp_v1 + 0x49bc) = *(unsigned int *)(temp_v1 + 0x49bc) | (1 << (temp_v0 & 0xff));
  return 1;
}
