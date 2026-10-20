/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379310` (_code @ 0x379310, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd7c0(unsigned int, unsigned int, int);

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_003fd7c0. */


void FUN_00379310(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_00581288 + 0x180) != 0) {
    FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_00581288 + 0x180) + 4),param_1,2);
    return;
  }
  return;
}

} /* extern "C" */
