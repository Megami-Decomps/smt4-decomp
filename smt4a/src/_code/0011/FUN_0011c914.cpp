/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c914` (_code @ 0x11c914, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a8e0; /* 0x55a8e0 */

extern int FUN_002e9318(int);
extern int FUN_002eda5a(unsigned int *);
extern int vectorTeardown_00307368(int);


int FUN_0011c914(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a8e0;
  temp_v0 = FUN_002eda5a(param_1 + 0xb);
  temp_v0 = vectorTeardown_00307368(temp_v0 - 0xc);
  temp_v0 = vectorTeardown_00307368(temp_v0 - 0xc);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  return temp_v0 - 0xc;
}

} /* extern "C" */
