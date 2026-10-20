#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_001a6928(unsigned int *, int);
int FUN_002e3494(void);

extern unsigned char DAT_0055c6e4; /* 0x55c6e4 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001a6928. */
/* Supplied declaration required: FUN_002e3494. */


unsigned int * FUN_0019241c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c6e4;
  FUN_001a6928(param_1,1);
  if (param_1[0x13] != 0) {
    FUN_002e3494();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    asdMemFree();
    param_1[0x12] = 0;
  }
  if (param_1[8] != 0) {
    asdMemFree();
    param_1[8] = 0;
  }
  return param_1;
}

} /* extern "C" */
