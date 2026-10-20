/* NON_MATCHING: romwright 0.5.0 decompilation of `nnosAddressSpaceManagerInitialize` (_code @ 0x161ab0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(int *);

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */


void nnosAddressSpaceManagerInitialize(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  if (param_1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = -1;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  temp_v0 = *param_1;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1[1];
  }
  if (temp_v1 && temp_v0 == 0) {
    nn_os_CriticalSection_Initialize(param_1 + 3);
    param_1[1] = param_2 + param_3;
    *param_1 = param_2;
  }
  return;
}

} /* extern "C" */
