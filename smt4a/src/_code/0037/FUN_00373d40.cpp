#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */


unsigned int FUN_00373d40(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x33b4) != '\r') {
    scrSetResult(0);
    return 0;
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
