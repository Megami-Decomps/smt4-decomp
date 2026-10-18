/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114c3c` (_code @ 0x114c3c, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00134dcc. */
/* Supplied declaration required: FUN_002e9afe. */


void FUN_00114c3c(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    if ((param_2 == 3) && (param_4 != 0)) {
      if (*(unsigned char **)(param_1 + 0x6c) != (unsigned char *)0x0) {
        **(unsigned char **)(param_1 + 0x6c) = 0;
        *(unsigned int *)(param_1 + 0x6c) = 0;
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        FUN_002e9afe(*(int *)(param_1 + 0x70),param_3);
        *(unsigned int *)(param_1 + 0x70) = 0;
      }
    }
    return;
  }
  FUN_00134dcc(param_1 + 0x60,*(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 100));
  return;
}
