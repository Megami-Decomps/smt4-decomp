/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153394` (_code @ 0x153394, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */


void FUN_00153394(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 0x34);
  temp_v0 = param_1 + param_2 * 4;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x1c) = param_4;
  if (param_3 != 0) {
    nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_004e6f64,param_2,1);
  }
  else {
    nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_004e6f64,param_2,(int)*(char *)(param_1 + param_2 + 0x30));
  }
  nn_os_CriticalSection_Leave(param_1 + 0x34);
  return;
}
