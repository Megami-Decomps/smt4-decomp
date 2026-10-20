/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461ea8` (_code @ 0x461ea8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_Pause(unsigned int, unsigned int);

/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_00461ea8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if ((*(char *)(temp_v0 + 0x139) != '\0') && ((*(char *)(temp_v0 + 0x138) != '\0') != param_2)) {
      *(char *)(temp_v0 + 0x138) = (char)param_2;
      nw_snd_internal_driver_Voice_Pause(*(unsigned int *)(temp_v0 + 0x1a8),param_2);
    }
  }
  return;
}

} /* extern "C" */
