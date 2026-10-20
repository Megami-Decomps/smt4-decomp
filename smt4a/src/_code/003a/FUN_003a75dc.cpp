#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_003127cc(unsigned int, unsigned int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003127cc. */


unsigned int FUN_003a75dc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_003127cc(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
