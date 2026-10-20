#include "romwright_types.h"

extern "C" {

int FUN_00109ff8(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_00109ff8. */


unsigned int FUN_00109fe4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00109ff8(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10));
  return 0;
}

} /* extern "C" */
