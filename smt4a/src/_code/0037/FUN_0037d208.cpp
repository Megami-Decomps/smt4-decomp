#include "romwright_types.h"

extern "C" {

int FUN_00164ce0(unsigned int, int);

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00164ce0. */


unsigned int FUN_0037d208(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_1;
  if (temp_v3 != 0) {
    temp_v1 = 1;
    do {
      temp_v2 = temp_v3 + temp_v1 * 4;
      temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v2 + 0x634));
      if (temp_v0 != 0) {
        FUN_00164ce0(*(unsigned int *)(temp_v2 + 0x634),0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
  }
  return 1;
}

} /* extern "C" */
