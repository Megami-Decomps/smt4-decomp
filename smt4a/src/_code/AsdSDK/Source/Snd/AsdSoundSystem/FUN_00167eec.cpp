/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167eec` (_code @ 0x167eec, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0063f4e8; /* 0x63f4e8 */
extern signed char DAT_0063f4fd; /* 0x63f4fd */


unsigned int FUN_00167eec(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0063f4fd != '\0') {
    temp_v0 = DAT_0063f4e8;
  }
  return temp_v0;
}

} /* extern "C" */
