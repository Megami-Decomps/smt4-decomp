/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8804` (_code @ 0x2b8804, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

extern int FUN_002bf244(unsigned int);


unsigned char FUN_002b8804(void)

{
  int temp_v0;
  
  if (DAT_0043e0d0 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = FUN_002bf244(*DAT_0043e0d0);
  return temp_v0 != 0;
}

} /* extern "C" */
