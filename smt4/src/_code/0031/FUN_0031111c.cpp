#include "romwright_types.h"

extern "C" {

int FUN_002d4e58(unsigned int, unsigned int, unsigned int);

extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002d4e58. */


unsigned int FUN_0031111c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(2);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(0);
  FUN_002d4e58(temp_v2,temp_v1,temp_v0);
  return 1;
}

} /* extern "C" */
