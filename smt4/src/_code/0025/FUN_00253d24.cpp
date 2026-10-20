/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253d24` (_code @ 0x253d24, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(...);

/* Supplied declaration required: asdMemFree. */


void FUN_00253d24(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    asdMemFree(*(unsigned int *)(param_1 + 0x2c));
    if (*(int *)(param_1 + 0x48) != 0) {
      asdMemFree();
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}

} /* extern "C" */
