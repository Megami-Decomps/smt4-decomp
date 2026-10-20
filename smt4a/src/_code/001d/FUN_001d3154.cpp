/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3154` (_code @ 0x1d3154, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3490(void);

/* Supplied declaration required: FUN_001d3490. */


void FUN_001d3154(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_001d3490();
    return;
  }
  return;
}

} /* extern "C" */
