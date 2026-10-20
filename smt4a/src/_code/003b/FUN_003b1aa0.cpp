/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1aa0` (_code @ 0x3b1aa0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameDataBlocksSetWord(int);
int scrSetResult(int);

/* Supplied declaration required: gameDataBlocksSetWord. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b1aa0(void)

{
/* irregular: 2 native warning(s); review required */
  gameDataBlocksSetWord(0);
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
