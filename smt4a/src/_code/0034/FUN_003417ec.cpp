#include "romwright_types.h"

extern "C" {

int FUN_001884b0(unsigned int);
int FUN_00195fc8(void);

/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


unsigned int FUN_003417ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return 0;
}

} /* extern "C" */
