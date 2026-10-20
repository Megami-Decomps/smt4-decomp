#include "romwright_types.h"

extern "C" {

int FUN_002ea124(void);
int FUN_002f67bc(void);

/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_002f67bc. */


void FUN_0010cbdc(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f67bc();
  FUN_002ea124();
  return;
}

} /* extern "C" */
