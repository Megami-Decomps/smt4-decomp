#include "romwright_types.h"

extern "C" {

int FUN_00261424(void);
int scrSetResult(void);

/* Supplied declaration required: FUN_00261424. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037d588(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00261424();
  scrSetResult();
  return 1;
}

} /* extern "C" */
