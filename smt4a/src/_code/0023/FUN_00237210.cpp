#include "romwright_types.h"

extern "C" {

int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */


void FUN_00237210(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    asdMemFree();
    *param_1 = 0;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
