#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_003dee48(void);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003dee48. */


unsigned int FUN_003a78fc(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_003dee48();
  scrSetResult();
  return 1;
}

} /* extern "C" */
