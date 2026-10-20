#include "romwright_types.h"

extern "C" {

int FUN_00208c64(unsigned int);

/* Supplied declaration required: FUN_00208c64. */


void FUN_002733d4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  char *temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = *param_1;
  do {
    temp_v0 = (char *)(temp_v2 + temp_v1 * 0x194) + 0x1d0;
    if ((*temp_v0 != '\0') && (*(int *)(temp_v0 + 4) == 3)) {
      FUN_00208c64(*(unsigned int *)(temp_v0 + 0x24));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
