/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010aafa` (_code @ 0x10aafa, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ee50c(void);

/* Supplied declaration required: FUN_002ee50c. */


unsigned int FUN_0010aafa(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002ee50c();
    return 1;
  }
  return 0;
}

} /* extern "C" */
