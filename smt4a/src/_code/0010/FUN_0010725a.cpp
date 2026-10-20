/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010725a` (_code @ 0x10725a, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6490(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e6490. */


void FUN_0010725a(romwright_code *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (romwright_code *)0x0) {
    (*param_1)();
    return;
  }
  FUN_002e6490(param_2);
  return;
}

} /* extern "C" */
