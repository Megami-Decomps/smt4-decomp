#include "romwright_types.h"

extern "C" {

int FUN_001b347c(void);
int scrSetResult(void);

/* Supplied declaration required: FUN_001b347c. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0036f800(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_001b347c();
  scrSetResult();
  return 1;
}

} /* extern "C" */
