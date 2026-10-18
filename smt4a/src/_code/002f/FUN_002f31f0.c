/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f31f0` (_code @ 0x2f31f0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005596e4; /* 0x5596e4 */

extern int FUN_002ec890(unsigned int *);


int FUN_002f31f0(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005596e4;
  temp_v0 = FUN_002ec890(param_1 + 2);
  return temp_v0 - 8;
}
