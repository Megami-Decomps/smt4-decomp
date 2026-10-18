/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016cbf8` (_code @ 0x16cbf8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0018a8a8. */
/* Supplied declaration required: FUN_0018a8c8. */
/* Supplied declaration required: FUN_001b6390. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetMixParam. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetPitch. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetSampleRate. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_0016cbf8(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_005880e4) {
    nn_os_CriticalSection_Enter(&DAT_00618518);
    puVar1 = (unsigned int *)(DAT_005880d8 + param_1 * 0x70);
    software_interrupt(0x28);
    puVar1[0x1a] = DAT_005880d8;
    puVar1[0x1b] = param_1 * 7;
    FUN_0018a8a8(*puVar1,puVar1[0x10]);
    FUN_0018a8c8(*puVar1,1);
    nn_snd_CTR_Voice_SetMixParam(*puVar1,puVar1 + 2);
    nn_snd_CTR_Voice_SetSampleRate(*puVar1,puVar1[0xf]);
    nn_snd_CTR_Voice_SetPitch(*puVar1);
    FUN_001b6390(*puVar1);
    nn_snd_CTR_Voice_SetState(*puVar1,0);
    nn_os_CriticalSection_Leave(&DAT_00618518);
    return;
  }
  return;
}
