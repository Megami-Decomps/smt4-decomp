#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_002903f0(void);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_002903f0. */


unsigned int FUN_003112c4(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002903f0();
  scrSetResult();
  return 1;
}

} /* extern "C" */
