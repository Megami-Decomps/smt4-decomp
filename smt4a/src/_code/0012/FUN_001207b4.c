/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001207b4` (_code @ 0x1207b4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055adc0; /* 0x55adc0 */

extern int FUN_002e9318(unsigned int *);


int FUN_001207b4(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055adc0;
  temp_v0 = FUN_002e9318(param_1 + 2);
  return temp_v0 - 8;
}
