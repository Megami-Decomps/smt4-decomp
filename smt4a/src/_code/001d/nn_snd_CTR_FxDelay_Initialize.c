/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_FxDelay_Initialize` (_code @ 0x1d1880, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6dd4. */


unsigned char nn_snd_CTR_FxDelay_Initialize(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if (*(char *)(param_1 + 0x56) != '\0') {
    temp_v2 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 4);
    *(unsigned char *)(param_1 + 0x54) = *(unsigned char *)(param_1 + 0x10);
    temp_v3 = *(int *)(param_1 + 0x3c);
    temp_v5 = *(int *)(param_1 + 0x14);
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x55);
    if (temp_v4 != 0) {
      temp_v6 = 0;
      do {
        temp_v1 = temp_v3 * 0x280 * temp_v6;
        temp_v0 = temp_v6 * 4;
        temp_v4 = temp_v4 - 1;
        temp_v6 = temp_v6 + 1;
        *(unsigned int *)(param_1 + temp_v0 + 0x1c) = temp_v1 + ((temp_v5 + 0x1fU) & 0xffffffe0);
      } while (temp_v4 != 0);
    }
    *(unsigned int *)(param_1 + 0x40) = 0;
    FUN_002e6dd4(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18));
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x55);
    if (temp_v4 != 0) {
      temp_v3 = 0;
      do {
        temp_v5 = temp_v3 * 4;
        temp_v4 = temp_v4 - 1;
        temp_v3 = temp_v3 + 1;
        *(unsigned int *)(param_1 + temp_v5 + 0x2c) = 0;
      } while (temp_v4 != 0);
    }
    temp_v2 = 1;
    *(unsigned char *)(param_1 + 0x56) = 1;
  }
  return temp_v2;
}
