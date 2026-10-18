/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_MasterManagerImpl_Finalize` (_code @ 0x128f40, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_MasterManagerImpl_Finalize(char *param_1)

{
  if (*param_1 != '\0') {
    param_1[0x3c] = -1;
    param_1[0x3d] = -1;
    param_1[0x3e] = -1;
    param_1[0x3f] = -1;
    *param_1 = '\0';
  }
  return;
}
