/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c36b8` (_code @ 0x1c36b8, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


int FUN_001c36b8(void)

{
  return (int)(short)((short)*(unsigned int *)(DAT_0043dcb4 + 0x660) -
                     (short)*(unsigned int *)(DAT_0043dcb4 + 0x658));
}
