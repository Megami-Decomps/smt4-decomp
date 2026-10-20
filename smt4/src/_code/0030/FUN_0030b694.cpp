/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b694` (_code @ 0x30b694, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, unsigned int);
int scrSetResult(int);

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0030b694(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_0027da30(temp_v2,temp_v0);
  scrSetResult(((unsigned int)*(unsigned short *)(temp_v2 + 0xfa) & (1 << (temp_v1 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
