/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d0c4` (_code @ 0x12d0c4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001248c0(void);
int asdOperatorNewB(int);
int FUN_0030e924(void);

/* Supplied declaration required: FUN_001248c0. */
/* Supplied declaration required: asdOperatorNewB. */
/* Supplied declaration required: FUN_0030e924. */


void FUN_0012d0c4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1 == 0) {
    asdOperatorNewB(0x34);
    FUN_0030e924();
    return;
  }
  if (param_1 != 1) {
    asdOperatorNewB(0x34);
    FUN_001248c0();
    return;
  }
  asdOperatorNewB(0x34);
  FUN_0030e924();
  return;
}

} /* extern "C" */
