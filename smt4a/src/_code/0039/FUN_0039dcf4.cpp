/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039dcf4` (_code @ 0x39dcf4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, unsigned int);
int scrSetResult(int);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_001568f8. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0039dcf4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_001568f8(temp_v1,temp_v0);
  scrSetResult((int)*(char *)(temp_v1 + 0xd4));
  return 1;
}

} /* extern "C" */
