#include "romwright_types.h"

extern "C" {

int FUN_001c7c44(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001c7c44. */


void nw_snd_internal_driver_Voice_AppendWaveBuffer
               (int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_001c7c44(*(unsigned int *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(unsigned int *)(param_1 + 0x1c) = param_3;
  }
  return;
}

} /* extern "C" */
