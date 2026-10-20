/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002618f8` (_code @ 0x2618f8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f24c; /* 0x57f24c */


int FUN_002618f8(void)

{
  return (int)(short)((short)*(unsigned int *)(DAT_0057f24c + 0x660) -
                     (short)*(unsigned int *)(DAT_0057f24c + 0x658));
}

} /* extern "C" */
