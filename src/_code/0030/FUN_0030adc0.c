/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030adc0` (_code @ 0x30adc0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern int FUN_00296f60(void);


unsigned int FUN_0030adc0(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  *(int *)(temp_v1 + 0x1b4) = *(int *)(temp_v1 + 0x1b4) + temp_v0;
  return 1;
}
