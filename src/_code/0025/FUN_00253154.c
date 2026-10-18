/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253154` (_code @ 0x253154, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2950(void);


unsigned char FUN_00253154(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return (*(unsigned int *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0x750) &
         (1 << ((param_1 % 0x20) & 0xffU))) != 0;
}
