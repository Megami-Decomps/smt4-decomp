#include "romwright_types.h"

extern "C" {

int FUN_00227048(unsigned int, int);

/* Supplied declaration required: FUN_00227048. */


unsigned int FUN_002a27e8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(char *)(temp_v0 + 0x10e) != '\0') {
    FUN_00227048(*(unsigned int *)(temp_v0 + 8),temp_v0 + 0x24);
  }
  return 0;
}

} /* extern "C" */
