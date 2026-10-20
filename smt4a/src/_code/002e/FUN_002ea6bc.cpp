/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea6bc` (_code @ 0x2ea6bc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043d144(void);

/* Supplied declaration required: FUN_0043d144. */


void FUN_002ea6bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_0043d144();
  }
  return;
}

} /* extern "C" */
