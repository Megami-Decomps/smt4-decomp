/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042c39c` (_code @ 0x42c39c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDelete(int);
int objectReleaseIfSet(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: objectReleaseIfSet. */


void FUN_0042c39c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  objectReleaseIfSet(*(unsigned int *)(param_1 + 4));
  *(unsigned int *)(param_1 + 4) = 0;
  asdOperatorDelete(param_1);
  return;
}

} /* extern "C" */
