/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011014c` (_code @ 0x11014c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0011d2b0(void);
extern int FUN_002c12d0(void);


unsigned int FUN_0011014c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0011d2b0();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002c12d0(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
