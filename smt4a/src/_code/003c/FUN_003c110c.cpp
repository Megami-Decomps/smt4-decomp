#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_004187e8(int, int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_004187e8. */


unsigned int FUN_003c110c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_004187e8(temp_v0,temp_v1 == 1);
  return 1;
}

} /* extern "C" */
