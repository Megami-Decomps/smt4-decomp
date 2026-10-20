#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004daca0; /* 0x4daca0 */


unsigned int FUN_001db5b8(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if ((param_1 >= 0) && (*(short *)(&DAT_004daca0 + param_2 * 0x14) > param_1)) {
    temp_v0 = *(unsigned int *)((int)(&DAT_004daca0 + param_2 * 0x14) + (param_1 * 2 + 2) * 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
