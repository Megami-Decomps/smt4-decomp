#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(void);
int FUN_00296cc8(...);
int FUN_00298fa0(int, unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_00298fa0. */


unsigned int FUN_002e2994(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  FUN_00298fa0(temp_v0,temp_v1);
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
