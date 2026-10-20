/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_PadReader_PadReader_sub_object` (_code @ 0x11c7fc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int nn_hid_CTR_AnalogStickClamper_AnalogStickClamper_sub_object(unsigned int *);


void nn_hid_CTR_PadReader_PadReader_sub_object(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  temp_v0 = nn_hid_CTR_AnalogStickClamper_AnalogStickClamper_sub_object(param_1 + 3);
  *(unsigned char *)(temp_v0 + 0x24) = 1;
  *(unsigned int *)(temp_v0 + 0x2c) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x30) = 0xffffffff;
  return;
}

} /* extern "C" */
