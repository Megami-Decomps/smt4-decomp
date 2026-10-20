/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039dd58` (_code @ 0x39dd58, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, unsigned int);
int scrSetResult(int);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_001568f8. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0039dd58(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_001568f8(temp_v2,temp_v0);
  scrSetResult(((unsigned int)*(unsigned short *)(temp_v2 + 0x110) & (1 << (temp_v1 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
