#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

extern int FUN_002bf244(unsigned int);


unsigned int FUN_002fc128(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_0044e2d0 == (unsigned int *)0x0) || (temp_v0 = FUN_002bf244(*DAT_0044e2d0), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
