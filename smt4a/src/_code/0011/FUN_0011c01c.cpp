#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a7f8; /* 0x55a7f8 */

extern int FUN_002e9318(int);
extern int FUN_002eda5a(unsigned int *);
extern int FUN_00307368(int);


int FUN_0011c01c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a7f8;
  temp_v0 = FUN_002eda5a(param_1 + 8);
  temp_v0 = FUN_00307368(temp_v0 - 0x10);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  return temp_v0 - 8;
}

} /* extern "C" */
