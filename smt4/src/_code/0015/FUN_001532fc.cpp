/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001532fc` (_code @ 0x1532fc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2ab0(unsigned char *, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char g_nnSndMasterManagerImpl; /* 0x4ead10 */

/* Supplied declaration required: FUN_002a2ab0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_FxDelay_Finalize(unsigned int);
extern void nn_snd_CTR_FxReverb_Finalize(unsigned int);


void FUN_001532fc(int param_1,int param_2)

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
  return;
}

} /* extern "C" */
