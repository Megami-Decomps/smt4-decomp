#include "romwright_types.h"

extern "C" {

int FUN_002ea124(void);
int FUN_002fb028(void);

/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_002fb028. */


void FUN_00114c76(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002fb028();
  FUN_002ea124();
  return;
}

} /* extern "C" */
