/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd360` (_code @ 0x2fd360, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559ef4; /* 0x559ef4 */

extern int FUN_002e9318(unsigned int *);


int FUN_002fd360(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559ef4;
  temp_v0 = FUN_002e9318(param_1 + 6);
  return temp_v0 - 0x18;
}

} /* extern "C" */
