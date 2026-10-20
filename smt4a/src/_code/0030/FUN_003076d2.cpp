#include "romwright_types.h"

extern "C" {

int FUN_002efb6c(unsigned int, unsigned int);

extern unsigned int FUN_002efa80(unsigned int);
/* Supplied declaration required: FUN_002efb6c. */


void FUN_003076d2(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002efa80(param_2);
  FUN_002efb6c(param_1,temp_v0);
  return;
}

} /* extern "C" */
