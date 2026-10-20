#include "romwright_types.h"

extern "C" {

int FUN_002c3424(unsigned int *);

extern unsigned int DAT_00465644; /* 0x465644 */

/* Supplied declaration required: FUN_002c3424. */


void FUN_00147fc4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c3424(&DAT_00465644);
  return;
}

} /* extern "C" */
