#include "romwright_types.h"

extern "C" {

int FUN_00123860(unsigned int, unsigned char [260]);

/* Supplied declaration required: FUN_00123860. */


void FUN_002f3524(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [260];
  
  FUN_00123860(param_1,temp_v0);
  return;
}

} /* extern "C" */
