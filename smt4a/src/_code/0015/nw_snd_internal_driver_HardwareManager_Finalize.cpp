/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_HardwareManager_Finalize` (_code @ 0x15ec84, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1838(int, unsigned int, unsigned int);
int FUN_001c2278(char *, unsigned int);

/* Supplied declaration required: FUN_001a1838. */
/* Supplied declaration required: FUN_001c2278. */


void nw_snd_internal_driver_HardwareManager_Finalize(char *param_1)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != '\0') {
    temp_v0 = 0;
    do {
      FUN_001c2278(param_1,temp_v0 & 0xff);
      FUN_001a1838((int)(char)temp_v0,*(unsigned int *)(param_1 + temp_v0 * 4 + 0x6c),
                   *(unsigned int *)(param_1 + temp_v0 * 4 + 0x274));
      temp_v1 = temp_v0 + 1;
      pcVar1 = param_1 + temp_v0 * 4 + 0x6c;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = param_1 + temp_v0 * 4 + 0x274;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      temp_v0 = temp_v1;
    } while ((int)temp_v1 < 2);
    *param_1 = '\0';
  }
  return;
}

} /* extern "C" */
