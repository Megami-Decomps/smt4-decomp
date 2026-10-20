/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100836` (_code @ 0x100836, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3c44(int, unsigned int, unsigned int, int);

extern int libcLocaleGetCategory(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e3c44. */


void FUN_00100836(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_3 == 0) {
    param_3 = libcLocaleGetCategory(0,4);
  }
  FUN_002e3c44(0,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
