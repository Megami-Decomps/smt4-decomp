/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126f04` (_code @ 0x126f04, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014732c(unsigned int, unsigned int);
int FUN_0014734c(unsigned int, int);
int FUN_00147370(unsigned int);
int software_interrupt(int);

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
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);
extern void nn_snd_CTR_Voice_SetPitch(unsigned int, float);
extern void nn_snd_CTR_Voice_SetSampleRate(unsigned int, int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00126f04(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  float temp_v0;
  unsigned int *puVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_004c40f8);
    puVar1 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
    software_interrupt(0x28);
    puVar1[0x1a] = DAT_0044d100;
    puVar1[0x1b] = param_1 * 7;
    FUN_0014732c(*puVar1,puVar1[0x10]);
    FUN_0014734c(*puVar1,1);
    nn_snd_CTR_Voice_SetMixParam(*puVar1,(unsigned int)(puVar1 + 2));
    nn_snd_CTR_Voice_SetSampleRate(*puVar1,puVar1[0xf]);
    nn_snd_CTR_Voice_SetPitch(*puVar1,temp_v0);
    FUN_00147370(*puVar1);
    nn_snd_CTR_Voice_SetState(*puVar1,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004c40f8);
    return;
  }
  return;
}

} /* extern "C" */
