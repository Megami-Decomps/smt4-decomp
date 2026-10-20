/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246cf0` (_code @ 0x246cf0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bgmStopNoForce(int, int);
int soundChannelRequestIfEnabled(int, int, int);

/* Supplied declaration required: bgmStopNoForce. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */


void FUN_00246cf0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (-1 < param_2) {
    temp_v0 = *(int *)(param_1 + 0x49d8);
    if (temp_v0 != param_2) {
      if (temp_v0 != -1) {
        bgmStopNoForce(temp_v0,0);
      }
      soundChannelRequestIfEnabled(param_2,0,10);
      *(int *)(param_1 + 0x49d8) = param_2;
    }
    return;
  }
  return;
}

} /* extern "C" */
