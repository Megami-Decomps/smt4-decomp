#include "romwright_types.h"

extern "C" {

int FUN_002ea124(void);
int FUN_002f42ec(void);

/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_002f42ec. */


void FUN_0010b188(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f42ec();
  FUN_002ea124();
  return;
}

} /* extern "C" */
