#include "romwright_types.h"

extern "C" {

int FUN_002e3494(unsigned int);
int FUN_002e3f74(int);

extern int FUN_00102168(int);
/* Supplied declaration required: FUN_002e3494. */
/* Supplied declaration required: FUN_002e3f74. */


void FUN_002e4e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002e3494(*(unsigned int *)(param_1 + 0x18));
  temp_v0 = FUN_00102168(param_1 + 8);
  FUN_002e3f74(temp_v0 - 8);
  return;
}

} /* extern "C" */
