/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff31c` (_code @ 0x2ff31c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(unsigned int);


unsigned int FUN_002ff31c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  btlGetMainState();
  temp_v1 = FUN_002499b4();
  scrSetResult((int)(unsigned int)(temp_v1 != 0) <= temp_v0);
  return 1;
}

} /* extern "C" */
