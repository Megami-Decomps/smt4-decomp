#include "romwright_types.h"

extern "C" {

int memClear(int, int);

/* Supplied declaration required: memClear. */


void FUN_00200b10(void)

{
/* irregular: 1 native warning(s); review required */
  memClear(0x47d200,0x1308);
  return;
}

} /* extern "C" */
