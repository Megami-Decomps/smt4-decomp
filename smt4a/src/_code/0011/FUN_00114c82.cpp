#include "romwright_types.h"

extern "C" {

int FUN_002ea124(void);
int FUN_00300860(void);

/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_00300860. */


void FUN_00114c82(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00300860();
  FUN_002ea124();
  return;
}

} /* extern "C" */
