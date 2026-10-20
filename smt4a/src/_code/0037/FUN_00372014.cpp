/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372014` (_code @ 0x372014, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x588fd0 */


unsigned char FUN_00372014(void)

{
  if ((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) != 0) {
    return *(short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x132c) == 0xf;
  }
  return 0;
}

} /* extern "C" */
