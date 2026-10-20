/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238c80` (_code @ 0x238c80, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00291050(void);
int FUN_002ad8b4(void);

/* Supplied declaration required: FUN_00291050. */
/* Supplied declaration required: FUN_002ad8b4. */


unsigned int FUN_00238c80(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002ad8b4();
  }
  else {
    FUN_00291050();
  }
  return param_1;
}

} /* extern "C" */
