#include "romwright_types.h"

extern "C" {

extern int DAT_00588124; /* 0x588124 */


unsigned char FUN_002292cc(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588124 != 0) {
    temp_v0 = *(int *)(DAT_00588124 + 0xf0);
  }
  return DAT_00588124 == 0 || temp_v0 == 7;
}

} /* extern "C" */
