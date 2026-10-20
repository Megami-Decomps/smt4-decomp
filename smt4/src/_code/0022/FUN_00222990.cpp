#include "romwright_types.h"

extern "C" {

int FUN_002879dc(unsigned int, unsigned int, int);
int scrGetArg(...);

/* Supplied declaration required: FUN_002879dc. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00222990(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(0);
  FUN_002879dc(temp_v1,temp_v0,0);
  return 1;
}

} /* extern "C" */
