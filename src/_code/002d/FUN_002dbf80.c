/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbf80` (_code @ 0x2dbf80, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002dbf80(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00293c98();
  temp_v1 = FUN_00296f60(0);
  *(unsigned int *)(temp_v0 + 0x49dc) = temp_v1;
  return 1;
}
