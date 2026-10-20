#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_002f4f00(void);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f4f00. */


void FUN_00121a12(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f4f00();
  FUN_002e6e14();
  return;
}

} /* extern "C" */
