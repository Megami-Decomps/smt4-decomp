#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005596e4; /* 0x5596e4 */

extern int FUN_002ec890(unsigned int *);


int FUN_002f31f0(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005596e4;
  temp_v0 = FUN_002ec890(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
