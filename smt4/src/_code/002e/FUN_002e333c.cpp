#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);
int FUN_002a775c(int);

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_002e333c(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(DAT_0043dd68 + 0x95cc);
  if (*piVar1 != 0) {
    FUN_00152bec();
    FUN_002a775c(*piVar1);
    *piVar1 = 0;
  }
  return;
}

} /* extern "C" */
