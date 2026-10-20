/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5728` (_code @ 0x2c5728, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c411c(void);

extern unsigned char DAT_0043e2a9; /* 0x43e2a9 */
extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c411c. */


void FUN_002c5728(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) = (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) & ~param_1;
  if ((*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) != 0) {
    DAT_0043e2a9 = 0;
    FUN_002c411c();
    return;
  }
  DAT_0043e2a9 = 1;
  FUN_002c411c();
  return;
}

} /* extern "C" */
