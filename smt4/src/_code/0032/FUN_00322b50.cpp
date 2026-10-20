#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_00349080(int, int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00349080. */


unsigned int FUN_00322b50(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_00349080(temp_v0,temp_v1 == 1);
  return 1;
}

} /* extern "C" */
