/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ad6c` (_code @ 0x38ad6c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_00162e8c(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0038ad6c(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = scrGetArg();
  temp_v2 = FUN_00162e8c();
  if (temp_v1 == 0) {
    temp_v0 = *(short *)(temp_v2 + 0x1668);
  }
  else {
    if (temp_v1 != 1) {
      return 1;
    }
    temp_v0 = *(short *)(temp_v2 + 0x166a);
  }
  scrSetResult((int)temp_v0);
  return 1;
}

} /* extern "C" */
