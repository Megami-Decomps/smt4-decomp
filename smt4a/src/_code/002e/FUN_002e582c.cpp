/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e582c` (_code @ 0x2e5830, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf09c(void);
int soundChannelRequestIfEnabled(void);

extern int scrGetArgString(void);
/* Supplied declaration required: FUN_002bf09c. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */


void FUN_002e582c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArgString();
  FUN_002bf09c();
  if (-1 < temp_v0) {
    soundChannelRequestIfEnabled();
  }
  return;
}

} /* extern "C" */
