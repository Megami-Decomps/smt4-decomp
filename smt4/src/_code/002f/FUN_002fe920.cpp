#include "romwright_types.h"

extern "C" {

int mapMainCallIfActive(void);
int lmapMainCallIfActive(void);

/* Supplied declaration required: mapMainCallIfActive. */
/* Supplied declaration required: lmapMainCallIfActive. */


unsigned int FUN_002fe920(void)

{
/* irregular: 2 native warning(s); review required */
  mapMainCallIfActive();
  lmapMainCallIfActive();
  return 1;
}

} /* extern "C" */
