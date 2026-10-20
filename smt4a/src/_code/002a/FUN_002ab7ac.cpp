/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ab7ac` (_code @ 0x2ab7ac, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_unite; /* 0x57f290 */


unsigned char FUN_002ab7ac(void)

{
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if (g_unite != 0) {
    temp_v0 = *(unsigned char *)(g_unite + 0x420);
  }
  return temp_v0;
}

} /* extern "C" */
