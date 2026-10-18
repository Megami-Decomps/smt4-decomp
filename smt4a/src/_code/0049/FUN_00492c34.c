/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492c34` (_code @ 0x492c34, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */


unsigned int FUN_00492c34(void)

{
  unsigned int temp_v0;
  
  if (DAT_005f1a5c != '\0') {
    temp_v0 = *(unsigned int *)(DAT_00587f28 + 0x40);
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_00587f28 + 0x10);
  }
  return temp_v0;
}
