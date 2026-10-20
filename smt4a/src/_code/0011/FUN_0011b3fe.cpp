/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b3fe` (_code @ 0x11b3fe, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea43c(int);
int FUN_002ea446(int, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea446. */


void FUN_0011b3fe(int param_1)

{
/* irregular: 2 native warning(s); review required */
  (**(romwright_code **)(**(int **)(param_1 + 0x3c) + 8))
            (*(int **)(param_1 + 0x3c),param_1 + 0x58,*(unsigned int *)(param_1 + 0x40),
             *(unsigned int *)(param_1 + 0x84));
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_002ea446(param_1,*(unsigned int *)(param_1 + 0x74));
    return;
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
