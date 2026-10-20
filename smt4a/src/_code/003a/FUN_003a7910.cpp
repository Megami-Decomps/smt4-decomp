#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_004186e0(void);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_004186e0. */


unsigned int FUN_003a7910(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_004186e0();
  scrSetResult();
  return 1;
}

} /* extern "C" */
