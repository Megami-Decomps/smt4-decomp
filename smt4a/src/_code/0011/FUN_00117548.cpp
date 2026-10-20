#include "romwright_types.h"

extern "C" {

int FUN_00300bb0(void);
int FUN_00300bf0(int);

extern unsigned char DAT_00559e70; /* 0x559e70 */

extern int FUN_002f4f90(unsigned int *);
/* Supplied declaration required: FUN_00300bb0. */
/* Supplied declaration required: FUN_00300bf0. */


void FUN_00117548(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559e70;
  FUN_00300bb0();
  temp_v0 = FUN_002f4f90(param_1 + 4);
  FUN_00300bf0(temp_v0 - 0x10);
  return;
}

} /* extern "C" */
