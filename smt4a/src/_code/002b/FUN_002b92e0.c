/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b92e0` (_code @ 0x2b92e0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_003e5c00. */


void FUN_002b92e0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003e5c00(*(unsigned int *)(DAT_00581288 + 0x1a8));
  if (*(int **)(DAT_00581288 + 0x1a8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_00581288 + 0x1a8) + 4))();
  }
  *(unsigned int *)(DAT_00581288 + 0x1a8) = 0;
  return;
}
