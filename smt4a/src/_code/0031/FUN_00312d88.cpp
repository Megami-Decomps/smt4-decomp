/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312d88` (_code @ 0x312d88, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00581274; /* 0x581274 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_00312d88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(DAT_00581274 + 0x58));
  return temp_v0 == 2;
}

} /* extern "C" */
