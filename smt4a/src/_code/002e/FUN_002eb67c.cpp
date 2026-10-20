#include "romwright_types.h"

extern "C" {

int FUN_002f4364(void);

extern unsigned char DAT_0055a284; /* 0x55a284 */

/* Supplied declaration required: FUN_002f4364. */


unsigned int * FUN_002eb67c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055a284;
  FUN_002f4364();
  return param_1;
}

} /* extern "C" */
