/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d588` (_code @ 0x42d588, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005b4486; /* 0x5b4486 */

extern int FUN_0042fbd4(void);


unsigned int FUN_0042d588(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_005b4486 != '\0') || (temp_v0 = FUN_0042fbd4(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
