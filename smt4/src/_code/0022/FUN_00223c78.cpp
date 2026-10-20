/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223c78` (_code @ 0x223c78, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned int FUN_00223c78(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0044e190 != 0) && (*(int *)(DAT_0044e190 + 0x400) == 0x14)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
