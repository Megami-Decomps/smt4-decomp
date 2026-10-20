#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);
int FUN_003a4448(void);

/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_003a4448. */


void FUN_00387350(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0020214c();
  param_1 = FUN_003a4448();
  *(int *)(param_1 + 0x14) = temp_v0;
  return;
}

} /* extern "C" */
