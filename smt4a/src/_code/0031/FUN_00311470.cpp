#include "romwright_types.h"

extern "C" {

int rt_malloc(int);

/* Supplied declaration required: rt_malloc. */


void FUN_00311470(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  rt_malloc(param_2 * 0xb8);
  return;
}

} /* extern "C" */
