/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_DspFxManager_GetDspCycles` (_code @ 0x15ddbc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


int nn_snd_CTR_DspFxManager_GetDspCycles(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = (char)temp_v0 + param_1;
    if (*(char *)(temp_v2 + 4) != '\0') {
      temp_v2 = (int)*(char *)(temp_v2 + 8);
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = (int)(char)temp_v0 + param_1 + 2;
    temp_v0 = temp_v0 + 1;
    if (*(char *)(temp_v3 + 4) != '\0') {
      temp_v3 = (int)*(char *)(temp_v3 + 8);
    }
    else {
      temp_v3 = 0;
    }
    temp_v1 = temp_v1 + temp_v2 * 10000 + temp_v3 * 40000;
  } while (temp_v0 < 2);
  return temp_v1;
}

} /* extern "C" */
