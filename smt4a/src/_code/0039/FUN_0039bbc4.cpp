#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_00377edc(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00377edc. */


unsigned int FUN_0039bbc4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_00377edc(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
