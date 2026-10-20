#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_erase_2B743C(unsigned int, int);

/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void FUN_002a215c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1,param_2 + 4);
  return;
}

} /* extern "C" */
