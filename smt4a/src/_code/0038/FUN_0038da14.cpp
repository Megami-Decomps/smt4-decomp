/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038da14` (_code @ 0x38da14, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(int);
int FUN_003f0e20(int, unsigned int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_0038da14(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_003f0e20(temp_v2,temp_v0);
  if (((temp_v2 != 0) && (temp_v1 >= 0)) && (8 >= temp_v1)) {
    temp_v1 = (int)*(short *)(temp_v2 + temp_v1 * 2 + 0x13c);
  }
  else {
    temp_v1 = 0;
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
