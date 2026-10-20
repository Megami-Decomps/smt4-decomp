#include "romwright_types.h"

extern "C" {

int nn_applet_CTR_detail_IsRegistered(int);

/* Supplied declaration required: nn_applet_CTR_detail_IsRegistered. */


void FUN_00441f48(void)

{
/* irregular: 1 native warning(s); review required */
  nn_applet_CTR_detail_IsRegistered(0x406);
  return;
}

} /* extern "C" */
