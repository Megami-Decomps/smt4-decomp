#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_002d1f40(unsigned int, unsigned int, int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002d1f40. */


unsigned int FUN_0031d55c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(0);
  FUN_002d1f40(temp_v1,temp_v0,0);
  return 1;
}

} /* extern "C" */
