/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012638c` (_code @ 0x12638c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3158; /* 0x4e3158 */
extern signed char DAT_004e3169; /* 0x4e3169 */


unsigned int FUN_0012638c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_004e3169 != '\0') {
    temp_v0 = DAT_004e3158;
  }
  return temp_v0;
}
