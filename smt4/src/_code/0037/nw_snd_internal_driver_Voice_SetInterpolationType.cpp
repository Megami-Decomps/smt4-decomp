#include "romwright_types.h"

extern "C" {

int FUN_003601c4(int, int);

/* Supplied declaration required: FUN_003601c4. */


void nw_snd_internal_driver_Voice_SetInterpolationType(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 8)) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        temp_v2 = 0;
        if (((param_2 != 0) && (temp_v2 = param_2 == 1, !temp_v2)) && (param_2 == 2)) {
          temp_v2 = 2;
        }
        FUN_003601c4(temp_v0,temp_v2);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  return;
}

} /* extern "C" */
