#include "romwright_types.h"

extern "C" {

int rt_malloc(int);

/* Supplied declaration required: rt_malloc. */


void FUN_0030771a(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  rt_malloc(param_2 << 2);
  return;
}

} /* extern "C" */
