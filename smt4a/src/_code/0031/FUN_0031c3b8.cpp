/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c3b8` (_code @ 0x31c3b8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf09c(void);
int soundChannelRequestIfEnabled(int, int, int);

extern int scrGetArg(unsigned int);
extern int scrGetArgString(unsigned int);
/* Supplied declaration required: FUN_002bf09c. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */


unsigned int FUN_0031c3b8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArgString(0);
  FUN_002bf09c();
  if (-1 < temp_v0) {
    temp_v1 = scrGetArg(1);
    temp_v2 = scrGetArg(2);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    if (temp_v2 < 0) {
      temp_v2 = 0;
    }
    soundChannelRequestIfEnabled(temp_v0,temp_v1,temp_v2);
  }
  return 1;
}

} /* extern "C" */
