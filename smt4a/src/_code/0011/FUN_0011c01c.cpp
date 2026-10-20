/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c01c` (_code @ 0x11c01c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a7f8; /* 0x55a7f8 */

extern int FUN_002e9318(int);
extern int FUN_002eda5a(unsigned int *);
extern int FUN_00307368(int);


int FUN_0011c01c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a7f8;
  temp_v0 = FUN_002eda5a(param_1 + 8);
  temp_v0 = FUN_00307368(temp_v0 - 0x10);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  return temp_v0 - 8;
}

} /* extern "C" */
