/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5be8` (_code @ 0x1b5be8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: FUN_001cd658. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_FxDelay_Finalize. */
/* Supplied declaration required: nn_snd_CTR_FxReverb_Finalize. */


void FUN_001b5be8(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
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
  FUN_001cd658(&DAT_00647708,param_2,0);
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  return;
}
