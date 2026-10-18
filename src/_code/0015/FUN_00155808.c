/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155808` (_code @ 0x155808, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00155808(unsigned short *param_1)

{
  unsigned int temp_v0;
  
  if ((*param_1 == 0) || (temp_v0 = *param_1 - 0x220c, temp_v0 >= 2)) {
    temp_v0 = 2;
  }
  return temp_v0;
}
