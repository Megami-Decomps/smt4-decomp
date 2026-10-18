/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253f24` (_code @ 0x253f24, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c4360. */


char * FUN_00253f24(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    FUN_002c4360(*(unsigned int *)(param_1 + 0x2c));
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_002c4360();
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
    }
    *param_1 = '\0';
  }
  return param_1;
}
