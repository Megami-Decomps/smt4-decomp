#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ac60; /* 0x55ac60 */

extern int FUN_002ea2d2(unsigned int *);


int FUN_0011ef68(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ac60;
  temp_v0 = FUN_002ea2d2(param_1 + 4);
  return temp_v0 - 0x10;
}

} /* extern "C" */
