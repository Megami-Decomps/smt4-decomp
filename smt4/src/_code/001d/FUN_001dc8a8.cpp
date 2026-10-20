#include "romwright_types.h"

extern "C" {

int FUN_0018c0d8(void);
int scrSetResult(void);

/* Supplied declaration required: FUN_0018c0d8. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_001dc8a8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0018c0d8();
  scrSetResult();
  return 1;
}

} /* extern "C" */
