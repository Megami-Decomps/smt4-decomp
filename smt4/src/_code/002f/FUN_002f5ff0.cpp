#include "romwright_types.h"

extern "C" {

int FUN_002f6314(void);

/* Supplied declaration required: FUN_002f6314. */


unsigned int FUN_002f5ff0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x564) == 2) {
      return 1;
    }
  }
  else {
    FUN_002f6314();
  }
  return 0;
}

} /* extern "C" */
