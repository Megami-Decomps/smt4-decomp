#include "romwright_types.h"

extern "C" {

int FUN_001884b0(unsigned int);
int FUN_00195fc8(void);

/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_0019059c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(*(unsigned int *)(param_1 + 4) & 0xfffffffe);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return;
}

} /* extern "C" */
