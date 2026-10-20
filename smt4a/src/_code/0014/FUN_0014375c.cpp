/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014375c` (_code @ 0x14375c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);


void FUN_0014375c(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  
  if (param_1 == 0) {
    return;
  }
  if ((((0.0f <= in_s1) && ((int)in_s1 < 0x3f800001)) && (0.0f <= in_s0)) && ((int)in_s0 < 0x3f800001)
     ) {
    *(float *)(param_1 + 0x70) = in_s0;
    if (*(int *)(param_1 + 0xec) != 1) {
      nn_snd_CTR_Voice_SetMixParam(*(unsigned int *)(param_1 + 0x68),param_1 + 0x70);
      *(float *)(param_1 + 0xa4) = in_s1;
      nn_snd_CTR_Voice_SetMixParam(*(unsigned int *)(param_1 + 0x6c),param_1 + 0xa0);
      return;
    }
    *(float *)(param_1 + 0x74) = in_s1;
    nn_snd_CTR_Voice_SetMixParam(*(unsigned int *)(param_1 + 0x68),param_1 + 0x70);
    return;
  }
  return;
}

} /* extern "C" */
