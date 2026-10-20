#include "romwright_types.h"

extern "C" {

int FUN_00145e34(unsigned int, int);

extern int DAT_0044ea28; /* 0x44ea28 */

/* Supplied declaration required: FUN_00145e34. */


void FUN_002b93b0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00145e34(*(unsigned int *)(DAT_0044ea28 + param_1 * 0x18),param_2);
  return;
}

} /* extern "C" */
