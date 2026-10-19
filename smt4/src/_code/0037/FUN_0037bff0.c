/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bff0` (_code @ 0x37bff0, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004ea16a; /* 0x4ea16a */

/* Supplied declaration required: FUN_0014732c. */
/* Supplied declaration required: FUN_0014734c. */
/* Supplied declaration required: FUN_003601c4. */
extern void nn_snd_CTR_Voice_SetSampleRate(unsigned int, int);


void FUN_0037bff0(int param_1,unsigned char *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x50) = *param_2;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      temp_v1 = *(int *)(param_1 + temp_v2 * 4);
      if (temp_v1 != 0) {
        FUN_0014732c(temp_v1,1);
        temp_v0 = 1;
        switch(*(unsigned char *)(param_1 + 0x50)) {
        case 0:
          temp_v0 = 0;
          break;
        case 3:
          temp_v0 = 2;
        }
        FUN_0014734c(temp_v1,temp_v0);
        nn_snd_CTR_Voice_SetSampleRate(temp_v1,*(int *)(param_2 + 8));
        temp_v0 = 0;
        if (DAT_004ea16a == '\0') {
          temp_v0 = 2;
        }
        else if (DAT_004ea16a == '\x01') {
          temp_v0 = 1;
        }
        FUN_003601c4(temp_v1,temp_v0);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 8));
  }
  *(unsigned char *)(param_1 + 0x17) = 0;
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  *(unsigned char *)(param_1 + 0x16) = 0;
  return;
}
