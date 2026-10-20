#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

/* Supplied declaration required: sysMemClear. */


void FUN_002c1650(void)

{
/* irregular: 1 native warning(s); review required */
  sysMemClear(0x5cb200,0x1308);
  return;
}

} /* extern "C" */
