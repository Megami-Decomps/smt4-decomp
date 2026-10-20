#include "romwright_types.h"

extern "C" {

int FUN_0037d770(void);

/* Supplied declaration required: FUN_0037d770. */


unsigned int FUN_0037d1cc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x568) == 2) {
      return 1;
    }
  }
  else {
    FUN_0037d770();
  }
  return 0;
}

} /* extern "C" */
