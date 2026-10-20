/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001146b8` (_code @ 0x1146b8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ffa9c(int, int, int, int);

extern unsigned long long FUN_002e49c4(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned long long FUN_002ffa92(void);
/* Supplied declaration required: FUN_002ffa9c. */


void FUN_001146b8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  
  temp_v0 = FUN_002ffa92();
  temp_v0 = FUN_002e49c4((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),1000000,0);
  FUN_002ffa9c((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),0xffb0ff0,0);
  return;
}

} /* extern "C" */
