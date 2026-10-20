#include "romwright_types.h"

extern "C" {

int FUN_0030fb34(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_0030fb34. */


void FUN_002fde8c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030fb34(param_1,param_2,param_3 << 3);
  return;
}

} /* extern "C" */
