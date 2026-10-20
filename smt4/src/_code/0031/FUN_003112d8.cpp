#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_002c5ef0(void);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_002c5ef0. */


unsigned int FUN_003112d8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c5ef0();
  scrSetResult();
  return 1;
}

} /* extern "C" */
