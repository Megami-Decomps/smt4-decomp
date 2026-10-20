#include "romwright_types.h"

extern "C" {

int FUN_00113de4(unsigned int, unsigned int *);

extern unsigned char DAT_00559610; /* 0x559610 */
extern unsigned char DAT_00594a58; /* 0x594a58 */

/* Supplied declaration required: FUN_00113de4. */


unsigned int * FUN_0030cdc0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559610;
  FUN_00113de4((*(unsigned int *)((unsigned char *)&DAT_00594a58 + 0x64)),param_1);
  return param_1;
}

} /* extern "C" */
