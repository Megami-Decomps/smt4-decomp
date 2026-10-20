/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183478` (_code @ 0x183478, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gfxSettings; /* 0x5b3bf4 */
extern signed char DAT_005b3bf5; /* 0x5b3bf5 */
extern unsigned char DAT_005b3bf6; /* 0x5b3bf6 */


unsigned char FUN_00183478(void)

{
  unsigned char *puVar1;
  
  puVar1 = &g_gfxSettings;
  if (DAT_005b3bf5 != '\0') {
    puVar1 = (unsigned char *)(unsigned int)DAT_005b3bf6;
  }
  return DAT_005b3bf5 != '\0' && puVar1 != (unsigned char *)0x0;
}

} /* extern "C" */
