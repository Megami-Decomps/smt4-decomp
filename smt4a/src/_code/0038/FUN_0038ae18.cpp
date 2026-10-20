#include "romwright_types.h"

extern "C" {

int FUN_00312d6c(void);
int lmapMainCallIfActive(void);

/* Supplied declaration required: FUN_00312d6c. */
/* Supplied declaration required: lmapMainCallIfActive. */


unsigned int FUN_0038ae18(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00312d6c();
  lmapMainCallIfActive();
  return 1;
}

} /* extern "C" */
