#include "romwright_types.h"

extern "C" {

int FUN_002c4040(unsigned int *);

extern unsigned int DAT_00465028; /* 0x465028 */

/* Supplied declaration required: FUN_002c4040. */


void FUN_0010af3c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4040(&DAT_00465028);
  return;
}

} /* extern "C" */
