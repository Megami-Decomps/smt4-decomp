/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039cd08` (_code @ 0x39cd08, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d8b34(unsigned int);
int scrSetResult(unsigned int);
int FUN_004bd30c(unsigned int, unsigned int, int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002d8b34. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_004bd30c. */
extern unsigned int FUN_004d0cd4(void);


unsigned int FUN_0039cd08(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_004d0cd4();
  FUN_002d8b34(temp_v0);
  FUN_004bd30c(temp_v1,temp_v0,0);
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
