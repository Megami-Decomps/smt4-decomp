#include "romwright_types.h"

extern "C" {

int FUN_00230f44(...);

/* Supplied declaration required: FUN_00230f44. */


int FUN_003a63a8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00230f44();
  temp_v1 = FUN_00230f44(param_2);
  return temp_v0 - temp_v1;
}

} /* extern "C" */
