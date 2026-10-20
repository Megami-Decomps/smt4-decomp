/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b820` (_code @ 0x30b820, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);
int FUN_00337360(int, unsigned int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_00337360. */


void FUN_0030b820(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_00337360(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v1 = btlGetMainState();
    scrSetResult(*(unsigned int *)(temp_v1 + 0x4454));
  }
  return;
}

} /* extern "C" */
