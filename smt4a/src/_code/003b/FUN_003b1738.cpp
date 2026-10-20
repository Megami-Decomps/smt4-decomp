#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_0015688c(void);
int FUN_003eaa14(void);
int FUN_004bcb54(void);

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_0015688c. */
/* Supplied declaration required: FUN_003eaa14. */
/* Supplied declaration required: FUN_004bcb54. */


unsigned int FUN_003b1738(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_0015688c();
  FUN_004bcb54();
  btlGetMainState();
  FUN_003eaa14();
  return 1;
}

} /* extern "C" */
