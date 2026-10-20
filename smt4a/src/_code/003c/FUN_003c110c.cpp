#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_004187e8(int, int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_004187e8. */


unsigned int FUN_003c110c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_004187e8(temp_v0,temp_v1 == 1);
  return 1;
}

} /* extern "C" */
