/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fd00` (_code @ 0x35fd00, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

extern int g_btlTalkBustUp; /* 0x5710dc */

/* Supplied declaration required: FUN_00184310. */


unsigned int FUN_0035fd00(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_btlTalkBustUp;
  if ((g_btlTalkBustUp == 0) ||
     (FUN_00184310(), (unsigned int)*(unsigned short *)(param_1 + 0x9c) != *(unsigned int *)(temp_v0 + 0x2f8))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
