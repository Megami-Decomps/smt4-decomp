/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002872d4` (_code @ 0x2872d4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_0049fc14; /* 0x49fc14 */
extern int DAT_0049fc18; /* 0x49fc18 */


unsigned int FUN_002872d4(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0049fc14 == '\0') || (DAT_0049fc18 < 200)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
