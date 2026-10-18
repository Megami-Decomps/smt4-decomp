/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d104` (_code @ 0x15d104, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_002a2ab0. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_FxDelay_Finalize. */
/* Supplied declaration required: nn_snd_CTR_FxDelay_Initialize. */
/* Supplied declaration required: nn_snd_CTR_FxReverb_Finalize. */


unsigned int FUN_0015d104(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 0x44);
  temp_v0 = param_1 + param_2 * 8;
  if (*(int *)(temp_v0 + 0x34) != 0) {
    nn_snd_CTR_FxDelay_Finalize();
  }
  if (*(int *)(temp_v0 + 0x38) != 0) {
    nn_snd_CTR_FxReverb_Finalize();
  }
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  FUN_002a2ab0(&DAT_004ead10,param_2,0);
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  nn_os_CriticalSection_Enter(param_1 + 0x44);
  *(unsigned int *)(temp_v0 + 0x34) = param_3;
  nn_snd_CTR_FxDelay_Initialize(param_3);
  FUN_002a2ab0(&DAT_004ead10,param_2,1);
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  return 1;
}
