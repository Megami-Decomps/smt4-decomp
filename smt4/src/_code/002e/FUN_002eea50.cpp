/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eea50` (_code @ 0x2eea50, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bustupCutAnimSetJobParam(void);
int scrSetResult(int);
int FUN_0030ac54(int, int);

/* Supplied declaration required: bustupCutAnimSetJobParam. */
/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(void);
/* Supplied declaration required: FUN_0030ac54. */


unsigned int FUN_002eea50(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg();
  if (temp_v0 >= 0xe8) {
    temp_v0 = 0;
  }
  FUN_0030ac54(temp_v0,0);
  if (temp_v0 != 0) {
    bustupCutAnimSetJobParam();
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
