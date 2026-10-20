/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492bc0` (_code @ 0x492bc0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_naviMain; /* 0x587f28 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */


unsigned int FUN_00492bc0(void)

{
  unsigned int temp_v0;
  
  if (DAT_005f1a5c != '\0') {
    temp_v0 = *(unsigned int *)(g_naviMain + 0x3c);
  }
  else {
    temp_v0 = *(unsigned int *)(g_naviMain + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
