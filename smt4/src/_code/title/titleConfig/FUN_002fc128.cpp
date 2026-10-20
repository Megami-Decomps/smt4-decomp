/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc128` (_code @ 0x2fc128, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

extern int FUN_002bf244(unsigned int);


unsigned int FUN_002fc128(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_0044e2d0 == (unsigned int *)0x0) || (temp_v0 = FUN_002bf244(*DAT_0044e2d0), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
