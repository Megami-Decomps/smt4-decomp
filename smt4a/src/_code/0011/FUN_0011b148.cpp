#include "romwright_types.h"

extern "C" {

int FUN_002ea124(void);
int FUN_00307140(void);

/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_00307140. */


void FUN_0011b148(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00307140();
  FUN_002ea124();
  return;
}

} /* extern "C" */
