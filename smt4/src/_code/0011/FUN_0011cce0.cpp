/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cce0` (_code @ 0x11cce0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_nnSndMasterManagerImpl; /* 0x4ead10 */

extern void nn_snd_CTR_MasterManagerImpl_Finalize(unsigned int);


void FUN_0011cce0(char *param_1)

{
  if (*param_1 != '\0') {
    nn_snd_CTR_MasterManagerImpl_Finalize((unsigned int)&g_nnSndMasterManagerImpl);
    param_1[0x4c] = -1;
    param_1[0x4d] = -1;
    param_1[0x4e] = -1;
    param_1[0x4f] = -1;
    *param_1 = '\0';
  }
  return;
}

} /* extern "C" */
