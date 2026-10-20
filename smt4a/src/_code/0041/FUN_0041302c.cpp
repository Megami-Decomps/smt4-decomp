/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041302c` (_code @ 0x41302c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);

/* Supplied declaration required: FUN_0019a5a0. */


char * FUN_0041302c(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    FUN_0019a5a0(*(unsigned int *)(param_1 + 0x2c));
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_0019a5a0();
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
    }
    *param_1 = '\0';
  }
  return param_1;
}

} /* extern "C" */
