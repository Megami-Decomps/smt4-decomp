#include "romwright_types.h"

extern "C" {

int FUN_0026d654(unsigned int);

extern unsigned char DAT_0044e140; /* 0x44e140 */

/* Supplied declaration required: FUN_0026d654. */


void FUN_00298d0c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12f1) = (char)param_1;
  FUN_0026d654(param_1 ^ 1);
  return;
}

} /* extern "C" */
