#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_002f4fd8(void);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f4fd8. */


void FUN_0010b7e4(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f4fd8();
  FUN_002e6e14();
  return;
}

} /* extern "C" */
