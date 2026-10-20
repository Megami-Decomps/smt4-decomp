/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047e38c` (_code @ 0x47e38c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int scrScriptProcessDestroy(void);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */


void FUN_0047e38c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0x10;
  *param_1 = 0;
  if (param_1[3] != 0) {
    asdMemFree();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    asdMemFree();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    scrScriptProcessDestroy();
    param_1[5] = 0;
  }
  return;
}

} /* extern "C" */
