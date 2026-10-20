#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_003851f8(unsigned int, int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003851f8. */


unsigned int FUN_0037d514(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_003851f8(temp_v0,temp_v1 != 0);
  return 1;
}

} /* extern "C" */
