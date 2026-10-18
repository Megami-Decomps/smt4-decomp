/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1950` (_code @ 0x2f1950, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002eabfc(void);
extern unsigned char *FUN_002eac18(unsigned int, unsigned int);


unsigned char FUN_002f1950(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_002eabfc();
  puVar2 = (unsigned char *)FUN_002eac18(param_1,temp_v0);
  return *puVar2;
}
