/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_BasicSoundPlayer_Initialize` (_code @ 0x37e6bc, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */


void nw_snd_internal_driver_BasicSoundPlayer_Initialize(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_os_LightEvent_ClearSignal(param_1 + 4);
  *(unsigned char *)(param_1 + 0xc) = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)(param_1 + 0xe) = 0;
  *(unsigned char *)(param_1 + 0xf) = 0;
  *(unsigned char *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x18) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned char *)(param_1 + 0x2e) = 0;
  *(unsigned char *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x34) = 0;
  *(unsigned char *)(param_1 + 0x35) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  return;
}
