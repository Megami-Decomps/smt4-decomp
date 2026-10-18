/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035de60` (_code @ 0x35de60, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_0035de60(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x920c) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x920c) + 4));
    if (*(int **)(param_1 + 0x920c) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x920c) + 4))();
      *(unsigned int *)(param_1 + 0x920c) = 0;
    }
  }
  return;
}
