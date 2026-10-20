#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int strDestroy(void);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: strDestroy. */


void FUN_00121252(void)

{
/* irregular: 2 native warning(s); review required */
  strDestroy();
  FUN_002e6e14();
  return;
}

} /* extern "C" */
