/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168188` (_code @ 0x168188, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_005b406c; /* 0x5b406c */
extern unsigned int DAT_005b4074; /* 0x5b4074 */
extern unsigned int DAT_005b4078; /* 0x5b4078 */


unsigned int FUN_00168188(void)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_005b4074;
  if (DAT_005b406c == '\0') {
    temp_v0 = DAT_005b4078;
  }
  return temp_v0;
}

} /* extern "C" */
