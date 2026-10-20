#include "romwright_types.h"

extern "C" {

int FUN_002ede60(...);

/* Supplied declaration required: FUN_002ede60. */


void FUN_002f35a4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  FUN_002ede60(temp_v0 + 0x20,param_3);
  return;
}

} /* extern "C" */
