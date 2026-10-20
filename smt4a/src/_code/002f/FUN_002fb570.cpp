#include "romwright_types.h"

extern "C" {

int FUN_001233b8(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_001233b8. */


void FUN_002fb570(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_001233b8(param_2,param_3,param_4);
  return;
}

} /* extern "C" */
