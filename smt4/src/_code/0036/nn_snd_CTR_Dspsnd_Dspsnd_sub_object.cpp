/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_Dspsnd_sub_object` (_code @ 0x360184, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int * nn_snd_CTR_Dspsnd_Dspsnd_sub_object(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1[1] != 0) {
    software_interrupt(0x23);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
