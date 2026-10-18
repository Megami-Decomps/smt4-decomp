/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec714` (_code @ 0x2ec714, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559e44; /* 0x559e44 */

extern int FUN_002ec890(unsigned int *);


int FUN_002ec714(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559e44;
  temp_v0 = FUN_002ec890(param_1 + 3);
  return temp_v0 - 0xc;
}
