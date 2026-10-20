/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2ab0` (_code @ 0x2a2ab0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_Dspsnd_EnableAuxBus(unsigned char *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */


void FUN_002a2ab0(int param_1,int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0x34);
  *(unsigned char *)(param_1 + param_2 + 0x30) = param_3;
  nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_004e6f64,param_2);
  nn_os_CriticalSection_Leave(param_1 + 0x34);
  return;
}

} /* extern "C" */
