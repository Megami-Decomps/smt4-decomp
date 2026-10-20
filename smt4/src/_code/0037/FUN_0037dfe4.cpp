/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dfe4` (_code @ 0x37dfe4, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023592c(unsigned int *);
int nw_snd_internal_driver_Channel_FreeChannel(int);
int nw_snd_internal_driver_Channel_Release(int);

extern unsigned char DAT_00421d54; /* 0x421d54 */

/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */


unsigned int * FUN_0037dfe4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421d54;
  FUN_0023592c(param_1);
  for (temp_v0 = param_1[0x31]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      nw_snd_internal_driver_Channel_Release(temp_v0);
    }
  }
  for (temp_v0 = param_1[0x31]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    nw_snd_internal_driver_Channel_FreeChannel(temp_v0);
  }
  param_1[0x31] = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}

} /* extern "C" */
