#include "romwright_types.h"

extern "C" {

int FUN_002e7232(unsigned int);
int FUN_0030f8a2(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_0030f8a2. */


void FUN_00122d36(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 4);
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0030f8a2(param_1,temp_v0,param_2);
  }
  FUN_002e7232(temp_v0);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
