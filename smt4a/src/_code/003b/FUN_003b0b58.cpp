/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0b58` (_code @ 0x3b0b58, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b0b58(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(temp_v2 + 0xec);
  }
  else {
    temp_v0 = *(int *)(temp_v2 + 0xf0);
  }
  if (temp_v0 == temp_v1) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
