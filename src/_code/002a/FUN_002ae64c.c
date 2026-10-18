/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae64c` (_code @ 0x2ae64c, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b492c(unsigned int);


unsigned char FUN_002ae64c(unsigned int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002b492c(param_1);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned char *)(temp_v1 + 8);
  }
  return temp_v0;
}
