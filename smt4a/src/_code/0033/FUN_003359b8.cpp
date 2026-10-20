/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003359b8` (_code @ 0x3359b8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003f0e20(int, int);

extern int btlGetMainState(void);
extern int FUN_001ab854(int);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003359b8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x6d) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x3fc);
  }
  else {
    temp_v0 = FUN_001ab854(temp_v0 - 0x6d);
  }
  scrSetResult(*(unsigned short *)(temp_v0 + 0x62));
  return 1;
}

} /* extern "C" */
