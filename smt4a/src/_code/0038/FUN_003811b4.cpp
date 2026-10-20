/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003811b4` (_code @ 0x3811b4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

extern int g_btlTalkBustUp; /* 0x5710dc */

extern int FUN_0018206c(unsigned int, unsigned short);
/* Supplied declaration required: FUN_00184310. */


unsigned char FUN_003811b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (g_btlTalkBustUp != 0) {
    FUN_00184310();
    temp_v0 = FUN_0018206c(0x10,*(unsigned short *)(param_1 + 0x9c));
    return temp_v0 != 0;
  }
  return 0;
}

} /* extern "C" */
