#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);

extern unsigned char DAT_0055a3c4; /* 0x55a3c4 */

extern int FUN_002e9318(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */


void FUN_0011b008(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a3c4;
  temp_v0 = FUN_002e9318(param_1 + 0x1c);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}

} /* extern "C" */
