/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015efec` (_code @ 0x15efec, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f1ac(void);

/* Supplied declaration required: FUN_0015f1ac. */


void FUN_0015efec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0015f1ac();
    return;
  }
  return;
}

} /* extern "C" */
