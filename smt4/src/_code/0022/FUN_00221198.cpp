#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_00292bf0(void);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_00292bf0. */


unsigned int FUN_00221198(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00292bf0();
  scrSetResult();
  return 1;
}

} /* extern "C" */
