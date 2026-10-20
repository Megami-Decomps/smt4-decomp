/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b24dc` (_code @ 0x2b24dc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);

/* Supplied declaration required: FUN_00184758. */


void FUN_002b24dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x330) == '\0') {
    FUN_00184758(param_1 + 0x2dc,2,1);
    return;
  }
  return;
}

} /* extern "C" */
