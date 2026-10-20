#include "romwright_types.h"

extern "C" {

int FUN_003f5848(unsigned int);

extern unsigned char DAT_00420a88; /* 0x420a88 */

/* Supplied declaration required: FUN_003f5848. */


unsigned int * FUN_00351b70(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420a88;
  FUN_003f5848(param_1[1]);
  return param_1;
}

} /* extern "C" */
