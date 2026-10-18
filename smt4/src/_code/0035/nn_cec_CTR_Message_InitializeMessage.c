/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_InitializeMessage` (_code @ 0x359e0c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c4938. */


void nn_cec_CTR_Message_InitializeMessage(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (int)*(char *)(param_1 + 0x98);
  if (0 < temp_v0) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v0 - 1;
      *(unsigned int *)(param_1 + temp_v1 * 6 + 0x3a) = 0;
      *(unsigned int *)(param_1 + temp_v1 * 6 + 0x38) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v0 != 0);
  }
  *(unsigned char *)(param_1 + 0x98) = 0;
  FUN_002c4938(param_1,0x70);
  *param_1 = 0x6060;
  *(unsigned int *)(param_1 + 0x9a) = 0;
  *(unsigned char *)((int)param_1 + 0x131) = 0;
  return;
}
