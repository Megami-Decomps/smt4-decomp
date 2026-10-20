#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern int FUN_003e5ae8(unsigned int);


unsigned int FUN_00334158(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1368);
  if (((temp_v0 == 5 || temp_v0 == 6) || (temp_v0 == 7 || temp_v0 == 9)) &&
     (temp_v0 = FUN_003e5ae8(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2034)), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
