/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc0ec` (_code @ 0x2fc0ec, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

extern int FUN_002bf41c(unsigned int);


unsigned int FUN_002fc0ec(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_0044e2d0 == (unsigned int *)0x0) || (temp_v0 = FUN_002bf41c(*DAT_0044e2d0), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
