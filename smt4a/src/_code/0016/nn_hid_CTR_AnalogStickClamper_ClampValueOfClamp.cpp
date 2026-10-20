#include "romwright_types.h"

extern "C" {


void nn_hid_CTR_AnalogStickClamper_ClampValueOfClamp(short *param_1)

{
  if (*param_1 < 0x28) {
    *param_1 = 0x28;
  }
  if (param_1[1] < 0x24) {
    param_1[1] = 0x24;
  }
  if (param_1[3] > 0x91) {
    param_1[3] = 0x91;
  }
  if (param_1[4] > 0x91) {
    param_1[4] = 0x91;
  }
  if (param_1[5] > 0x91) {
    param_1[5] = 0x91;
  }
  return;
}

} /* extern "C" */
