#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002f11b0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x3040) != '\r') {
    scrSetResult(0);
    return 0;
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
