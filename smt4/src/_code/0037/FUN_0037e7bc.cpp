/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e7bc` (_code @ 0x37e7bc, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_BasicSoundPlayer_Initialize(void);

/* Supplied declaration required: nw_snd_internal_driver_BasicSoundPlayer_Initialize. */


void FUN_0037e7bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  nw_snd_internal_driver_BasicSoundPlayer_Initialize();
  *(unsigned char *)(param_1 + 0x50) = 0;
  *(unsigned char *)(param_1 + 0x51) = 0;
  *(unsigned char *)(param_1 + 0x53) = 0;
  *(unsigned char *)(param_1 + 0x54) = 0;
  *(unsigned char *)(param_1 + 0x55) = 0;
  *(unsigned char *)(param_1 + 0x52) = 0;
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  do {
    temp_v0 = param_1 + temp_v2 * 0x20;
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v0 + 0x1ae5) = 0x7f;
    *(unsigned char *)(temp_v0 + 0x1ae6) = 0x40;
    *(unsigned int *)(temp_v0 + 0x1aec) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x1af0) = 0;
    *(unsigned int *)(temp_v0 + 0x1af4) = 0;
    *(unsigned char *)(temp_v0 + 0x1ad8) = 0;
    *(unsigned char *)(temp_v0 + 0x1ae4) = 0;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v0 = param_1 + temp_v2 * 0x340;
    *(unsigned int *)(temp_v0 + 0xd8) = 0;
    *(unsigned int *)(temp_v0 + 0x108) = 0;
    temp_v2 = temp_v1;
  } while (temp_v1 < 8);
  return;
}

} /* extern "C" */
