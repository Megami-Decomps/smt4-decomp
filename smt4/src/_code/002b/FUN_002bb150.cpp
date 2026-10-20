/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb150` (_code @ 0x2bb150, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_002bb150(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  if ((int)(unsigned int)(param_1 < 0x3477) <= param_2) {
    software_interrupt(10);
    return;
  }
  temp_v2 = (int)((unsigned long long)param_1 * 0x44a2fa85 >> 0x20) + param_2 * 0x44a2fa85;
  do {
    temp_v1 = temp_v2 - 2;
    temp_v0 = temp_v2 >= 2;
    temp_v2 = temp_v1;
  } while (temp_v1 != 0 && temp_v0);
  return;
}

} /* extern "C" */
