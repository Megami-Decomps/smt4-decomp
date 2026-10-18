/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126f04` (_code @ 0x126f04, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0014732c. */
/* Supplied declaration required: FUN_0014734c. */
/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetMixParam. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetPitch. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetSampleRate. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_00126f04(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    nn_os_CriticalSection_Enter(&DAT_004c40f8);
    puVar1 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
    software_interrupt(0x28);
    puVar1[0x1a] = DAT_0044d100;
    puVar1[0x1b] = param_1 * 7;
    FUN_0014732c(*puVar1,puVar1[0x10]);
    FUN_0014734c(*puVar1,1);
    nn_snd_CTR_Voice_SetMixParam(*puVar1,puVar1 + 2);
    nn_snd_CTR_Voice_SetSampleRate(*puVar1,puVar1[0xf]);
    nn_snd_CTR_Voice_SetPitch(*puVar1);
    FUN_00147370(*puVar1);
    nn_snd_CTR_Voice_SetState(*puVar1,0);
    nn_os_CriticalSection_Leave(&DAT_004c40f8);
    return;
  }
  return;
}
