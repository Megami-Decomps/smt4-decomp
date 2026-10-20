/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b678` (_code @ 0x10b678, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b628(unsigned int *);

extern unsigned char DAT_00558d10; /* 0x558d10 */
extern int DAT_00599378; /* 0x599378 */

/* Supplied declaration required: FUN_0010b628. */


unsigned int * FUN_0010b678(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558d10;
  if (DAT_00599378 != 0) {
    FUN_0010b628(param_1);
  }
  return param_1;
}

} /* extern "C" */
