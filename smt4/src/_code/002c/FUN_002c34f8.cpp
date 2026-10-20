#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465198; /* 0x465198 */


int FUN_002c34f8(signed char param_1)

{
  int temp_v0;
  
  temp_v0 = (int)(*(signed char *)((unsigned char *)&DAT_00465198 + 0x1));
  (*(signed char *)((unsigned char *)&DAT_00465198 + 0x1)) = param_1;
  return temp_v0;
}

} /* extern "C" */
