/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003871c0` (_code @ 0x3871c0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00589164; /* 0x589164 */

extern int FUN_00163e40(unsigned int);


unsigned int FUN_003871c0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_00589164 == (unsigned int *)0x0) || (temp_v0 = FUN_00163e40(*DAT_00589164), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
