#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c415c. */


void FUN_002a780c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_002c415c();
    *param_1 = 0;
  }
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
