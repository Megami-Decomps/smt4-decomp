/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f780` (_code @ 0x36f780, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bustupCutAnimSetJobParam(void);
int scrSetResult(int);
int FUN_0039c840(int, int);

extern int scrGetArg(void);
/* Supplied declaration required: bustupCutAnimSetJobParam. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0039c840. */


unsigned int FUN_0036f780(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg();
  if (temp_v0 >= 0x1ac) {
    temp_v0 = 0;
  }
  FUN_0039c840(temp_v0,0);
  if (temp_v0 != 0) {
    bustupCutAnimSetJobParam();
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
