#include "romwright_types.h"

extern "C" {

int rt_memcpy(int, unsigned int, int);

/* Supplied declaration required: rt_memcpy. */


void FUN_002fb3c8(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy(param_1 + 0x3da0,param_2,param_3 << 1);
  return;
}

} /* extern "C" */
