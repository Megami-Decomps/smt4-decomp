/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1018` (_code @ 0x2f1018, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002f1018(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  if (temp_v0 < 0x10) {
    temp_v2 = FUN_00293c98();
    *(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x497c) = temp_v1;
  }
  return 1;
}
