#include "romwright_types.h"

extern "C" {

int FUN_0010a014(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_0010a014. */


unsigned int FUN_0010a000(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010a014(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10));
  return 0;
}

} /* extern "C" */
