/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d104` (_code @ 0x15d104, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2ab0(unsigned char *, int, int);

extern unsigned char g_nnSndMasterManagerImpl; /* 0x4ead10 */

/* Supplied declaration required: FUN_002a2ab0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_FxDelay_Finalize(unsigned int);
extern unsigned char nn_snd_CTR_FxDelay_Initialize(unsigned int);
extern void nn_snd_CTR_FxReverb_Finalize(unsigned int);


unsigned int FUN_0015d104(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 0x44);
  temp_v0 = param_1 + param_2 * 8;
  if (*(int *)(temp_v0 + 0x34) != 0) {
    nn_snd_CTR_FxDelay_Finalize(*(int *)(temp_v0 + 0x34));
  }
  if (*(int *)(temp_v0 + 0x38) != 0) {
    nn_snd_CTR_FxReverb_Finalize(*(int *)(temp_v0 + 0x38));
  }
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  FUN_002a2ab0(&g_nnSndMasterManagerImpl,param_2,0);
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  nn_os_CriticalSection_Enter(param_1 + 0x44);
  *(unsigned int *)(temp_v0 + 0x34) = param_3;
  nn_snd_CTR_FxDelay_Initialize(param_3);
  FUN_002a2ab0(&g_nnSndMasterManagerImpl,param_2,1);
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  return 1;
}

} /* extern "C" */
