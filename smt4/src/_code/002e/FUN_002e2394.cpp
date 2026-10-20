#include "romwright_types.h"

extern "C" {

int FUN_00249c4c(unsigned int, unsigned int, int);
int scrGetArg(...);

/* Supplied declaration required: FUN_00249c4c. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002e2394(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_00249c4c(temp_v0,temp_v1,0);
  return 1;
}

} /* extern "C" */
