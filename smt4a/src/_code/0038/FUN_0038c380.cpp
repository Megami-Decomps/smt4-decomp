/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c380` (_code @ 0x38c380, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int scrGetArg(int);
int scrSetResult(void);
int FUN_003eaf20(void);

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0038c380(void)

{
/* irregular: 4 native warning(s); review required */
  scrGetArg(0);
  btlGetMainState();
  FUN_003eaf20();
  scrSetResult();
  return 1;
}

} /* extern "C" */
