#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_003768dc(void);
int FUN_003847ac(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003768dc. */
/* Supplied declaration required: FUN_003847ac. */


unsigned int FUN_002a3de8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(0);
  FUN_003847ac(temp_v1,temp_v0);
  FUN_003768dc();
  return 3;
}

} /* extern "C" */
