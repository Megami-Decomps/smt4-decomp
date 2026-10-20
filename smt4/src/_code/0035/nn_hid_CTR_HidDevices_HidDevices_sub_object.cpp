/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_HidDevices_HidDevices_sub_object` (_code @ 0x35ad10, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00139750(int *);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00139750. */


int * nn_hid_CTR_HidDevices_HidDevices_sub_object(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00139750(param_1 + 0xb);
  if (param_1[0x10] != 0) {
    software_interrupt(0x23);
    param_1[0x10] = 0;
  }
  if (param_1[9] != 0) {
    software_interrupt(0x23);
    param_1[9] = 0;
  }
  if (param_1[7] != 0) {
    software_interrupt(0x23);
    param_1[7] = 0;
  }
  if (param_1[4] != 0) {
    software_interrupt(0x23);
    param_1[4] = 0;
  }
  if (param_1[2] != 0) {
    software_interrupt(0x23);
    param_1[2] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
