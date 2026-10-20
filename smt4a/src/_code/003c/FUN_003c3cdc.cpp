/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3cdc` (_code @ 0x3c3cdc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019d96c(unsigned int, int, int);
int scrGetArg(int);

extern unsigned int jobGetWork(void);
/* Supplied declaration required: FUN_0019d96c. */
/* Supplied declaration required: scrGetArg. */
extern int scrGetCommandFrame(void);


unsigned int FUN_003c3cdc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(1);
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 != 0) {
    temp_v1 = scrGetCommandFrame();
    if (temp_v1 == temp_v0) {
      return 1;
    }
  }
  else {
    scrGetArg(0);
    temp_v2 = jobGetWork();
    FUN_0019d96c(temp_v2,9,temp_v0);
  }
  return 0;
}

} /* extern "C" */
