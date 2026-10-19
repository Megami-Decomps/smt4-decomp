/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd658` (_code @ 0x1cd658, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */


void FUN_001cd658(int param_1,int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0x34);
  *(unsigned char *)(param_1 + param_2 + 0x30) = param_3;
  nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_006433d0,param_2);
  nn_os_CriticalSection_Leave(param_1 + 0x34);
  return;
}
