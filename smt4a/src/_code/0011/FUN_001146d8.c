/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001146d8` (_code @ 0x1146d8, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_002e49c4(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned long long FUN_002ffa92(void);
extern unsigned long long FUN_002ffa9c(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_001146d8(unsigned long long *param_1)

{
  unsigned long long temp_v0;
  
  temp_v0 = FUN_002ffa92();
  temp_v0 = FUN_002e49c4((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),1000,0);
  temp_v0 = FUN_002ffa9c((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),0xffb0ff0,0);
  *param_1 = temp_v0;
  return;
}
