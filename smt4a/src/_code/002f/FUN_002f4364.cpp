#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);
int FUN_002eb5f4(void);

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002eb5f4. */


void FUN_002f4364(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002eb5f4();
  FUN_002e7232();
  return;
}

} /* extern "C" */
