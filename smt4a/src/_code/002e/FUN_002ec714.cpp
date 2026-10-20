#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559e44; /* 0x559e44 */

extern int FUN_002ec890(unsigned int *);


int FUN_002ec714(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559e44;
  temp_v0 = FUN_002ec890(param_1 + 3);
  return temp_v0 - 0xc;
}

} /* extern "C" */
