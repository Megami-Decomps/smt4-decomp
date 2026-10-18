/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cc70` (_code @ 0x31cc70, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern int FUN_00296f60(void);


unsigned int FUN_0031cc70(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
  if (temp_v0 >= 1) {
    temp_v2 = temp_v2 | 0x80000;
  }
  else {
    temp_v2 = temp_v2 & 0xfff7ffff;
  }
  *(unsigned int *)(temp_v1 + 0x44a0) = temp_v2;
  return 1;
}
