/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b538` (_code @ 0x39b538, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobGetWork(...);
int FUN_0019d96c(unsigned int, int, int);

/* Supplied declaration required: jobGetWork. */
/* Supplied declaration required: FUN_0019d96c. */
extern unsigned int scrGetArg(unsigned int);
extern int scrGetCommandFrame(void);


unsigned int FUN_0039b538(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    temp_v0 = scrGetCommandFrame();
    if (temp_v0 == 0x14) {
      return 1;
    }
  }
  else {
    temp_v1 = scrGetArg(0);
    temp_v2 = jobGetWork();
    FUN_0019d96c(temp_v2,7,0x14);
    temp_v0 = jobGetWork(temp_v1);
    *(unsigned int *)(temp_v0 + 0x78) = 2;
  }
  return 0;
}

} /* extern "C" */
