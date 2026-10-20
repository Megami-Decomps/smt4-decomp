#include "romwright_types.h"

extern "C" {

int FUN_002ede60(...);

/* Supplied declaration required: FUN_002ede60. */


int FUN_002f360c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  temp_v0 = FUN_002ede60(temp_v0 + 0x20,param_2 + 0x20);
  return temp_v0 - 0x20;
}

} /* extern "C" */
