#include "romwright_types.h"

extern "C" {

int FUN_0025930c(unsigned int, unsigned int);
int FUN_0027db40(void);
int FUN_00296cc8(...);

/* Supplied declaration required: FUN_0025930c. */
/* Supplied declaration required: FUN_0027db40. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_001ed4b8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(0);
  FUN_0025930c(temp_v1,temp_v0);
  FUN_0027db40();
  return 2;
}

} /* extern "C" */
