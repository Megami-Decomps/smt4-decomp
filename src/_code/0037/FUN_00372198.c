/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372198` (_code @ 0x372198, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002378c4(void);
extern unsigned int FUN_003721e0(unsigned int, unsigned int);
extern unsigned int FUN_003724a4(unsigned int, unsigned int);


unsigned int FUN_00372198(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002378c4();
  if (-1 < (int)temp_v0) {
    temp_v1 = FUN_003721e0(param_1,param_2);
    temp_v2 = FUN_003724a4(param_1,param_2);
    temp_v0 = temp_v2 | temp_v0 | temp_v1;
  }
  return temp_v0;
}
