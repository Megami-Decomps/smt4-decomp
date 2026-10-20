#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int btlMainClearUnk24(void);

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: btlMainClearUnk24. */


unsigned int FUN_003c22c4(void)

{
/* irregular: 2 native warning(s); review required */
  btlGetMainState();
  btlMainClearUnk24();
  return 1;
}

} /* extern "C" */
