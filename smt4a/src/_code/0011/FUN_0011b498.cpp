#include "romwright_types.h"

extern "C" {

int FUN_002e7232(unsigned int);
int FUN_00306c8c(int);

extern unsigned char DAT_0055a520; /* 0x55a520 */

extern int FUN_0011c110(unsigned int *);
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_00306c8c. */


void FUN_0011b498(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a520;
  FUN_002e7232(param_1[0x21]);
  temp_v0 = FUN_0011c110(param_1 + 0x16);
  FUN_00306c8c(temp_v0 - 0x58);
  return;
}

} /* extern "C" */
