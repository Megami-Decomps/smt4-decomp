/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3f0c` (_code @ 0x2a3f0c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002360dc(unsigned int);
extern int FUN_002a1738(unsigned int, unsigned int);


unsigned char FUN_002a3f0c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_002360dc(1);
  temp_v2 = FUN_002a1738(temp_v0,temp_v1);
  return temp_v2 != 0;
}
