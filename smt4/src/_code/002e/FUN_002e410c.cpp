/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e410c` (_code @ 0x2e410c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, unsigned int);
int scrSetResult(int);

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_002e410c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_0027da30(temp_v1,temp_v0);
  scrSetResult(*(unsigned short *)(temp_v1 + 2));
  return 1;
}

} /* extern "C" */
