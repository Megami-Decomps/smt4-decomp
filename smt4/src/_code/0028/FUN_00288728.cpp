#include "romwright_types.h"

extern "C" {

int FUN_002a775c(int);
int FUN_002c415c(int);

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00288728(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x50 + 0x10;
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002a775c(*(int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c415c(*(int *)(temp_v0 + 0xc));
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002a775c(*(int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
